# -*- coding: utf-8 -*-
"""A+B 生成器 v3：Ghidra12 ObjC 风格（Class::method + _objc_msgSend_<sel> 包装）"""
import io, os, re, glob, sys
from collections import defaultdict, deque

SRC = sys.argv[1]
HDR = re.compile(r'^// ==== (.+?) @0x([0-9a-f]+) ====$')

recs = {}
for p in glob.glob(os.path.join(SRC, "*.c")):
    cur = None; buf = []
    def flush():
        if cur: recs[cur[1]] = [cur[0], "\n".join(buf)]
    for line in io.open(p, encoding="utf-8", errors="replace"):
        m = HDR.match(line.strip())
        if m: flush(); cur = (m.group(1), m.group(2)); buf = []
        else: buf.append(line)
    flush()
print("records:", len(recs))

# ---- 名字解析 ----
M_CLSMETH = re.compile(r'^(\w[\w$]*)::(.+)$')
M_BLOCK   = re.compile(r'^___\d+-\[(\w+)_([^\]]+)\]_block_invoke')
M_MSGSEND = re.compile(r'_objc_msgSend(?:Super2|Super)?_([A-Za-z0-9_]+)')

def parse_name(n):
    m = M_CLSMETH.match(n)
    if m: return (m.group(1), m.group(2), "method")
    m = M_BLOCK.match(n)
    if m: return (m.group(1), m.group(2), "block")
    if n.startswith("_objc_msgSend"): return (None, None, "msgsend")
    if n.startswith("___copy_helper") or n.startswith("___destroy_helper") or n == ".cxx_destruct":
        return (None, None, "helper")
    if n.startswith("_objc_") or n.startswith("__OBJC"): return (None, None, "rt")
    if n.startswith("_") and n[1:2].isupper(): return (None, None, "import")
    if "::" in n: return (None, None, "other")
    # 裸选择器（method 实现，类名丢失）
    return (None, n, "method")

info = {}
for a, (n, body) in recs.items():
    info[a] = parse_name(n)

# 选择器 -> 实现该方法记录（类名或裸）
sel_impl = defaultdict(set)
cls_of = {}
for a, (cls, meth, kind) in info.items():
    if kind == "method" and meth:
        sel_impl[meth].add(a)
        if cls: cls_of[a] = cls

callees = defaultdict(set); callers = defaultdict(set)
edge_ext = defaultdict(int)
for a, (n, body) in recs.items():
    mycls = info[a][0]
    # 1) msgSend 包装 -> 选择器 -> 本 tweak 实现
    for m in M_MSGSEND.finditer(body):
        raw = m.group(1)
        sel = raw.replace("_", ":") if raw.endswith("_") else raw
        impls = sel_impl.get(sel)
        if not impls: continue
        targets = {x for x in impls if cls_of.get(x) == mycls} or (impls if len(impls) == 1 else set())
        for t in targets:
            if t != a: callees[a].add(t); callers[t].add(a)
    # 2) 已知记录名的直接引用（C 函数/block/Class::method）
    for m in re.finditer(r'(?<![A-Za-z0-9_$:])[A-Za-z_$][\w$:]*(?::)?(?![A-Za-z0-9_$])', body):
        pass  # 太泛，跳过；仅精确匹配已知名
    for rn, ra in ((rn, ra) for rn, ras in ((k, [x for x in v]) for k, v in [])):
        pass
for rn, ras in byname_map.items() if False else []:
    pass

# 精确已知名匹配（Class::method 与 block 与 C 函数；选择器名太短易撞，跳过裸名<8）
long_names = sorted([n for n in recs.values() and set(x[0] for x in recs.values())], key=len, reverse=True)
long_names = [n for n in long_names if len(n) >= 8 and not n.startswith("_objc_msgSend")]
addr_by_name = {}
for a, (n, b) in recs.items(): addr_by_name.setdefault(n, a)
for a, (n, body) in recs.items():
    for rn in long_names:
        if rn != n and rn in body:
            ra = addr_by_name.get(rn)
            if ra and ra != a: callees[a].add(ra); callers[ra].add(a)

n_edges = sum(len(v) for v in callees.values())
print("edges:", n_edges, "nodes with out:", len(callees))

roots = sorted([a for a in recs if a not in callers and callees.get(a)], key=lambda x:int(x,16))
print("roots:", len(roots), [recs[r][0] for r in roots][:8])

used = set(); fi = 0
def bfs(root):
    order, depth = [], {}; q = deque([root]); depth[root] = 0
    while q:
        a = q.popleft(); order.append(a)
        for c in sorted(callees.get(a, []), key=lambda x:int(x,16)):
            if c not in depth: depth[c] = depth[a]+1; q.append(c)
    return order, depth
for root in roots:
    order, depth = bfs(root)
    new = [a for a in order if a not in used]
    if len(new) < 4: continue
    for a in new: used.add(a)
    fi += 1
    safe = re.sub(r'[^\w.-]', '_', recs[root][0])[:60]
    out = ["// ============ 功能链 %d  根: %s @0x%s ============" % (fi, recs[root][0], root),
           "// 节点 %d，按调用深度排序，自上而下读" % len(order), ""]
    for a in order:
        n, body = recs[a]
        cl = ", ".join(recs[c][0] for c in sorted(callers.get(a,[]), key=lambda x:int(x,16))[:8]) or "(根)"
        ce = ", ".join(recs[c][0] for c in sorted(callees.get(a,[]), key=lambda x:int(x,16))[:10]) or "(叶)"
        out += ["// ---- [d%d] %s @0x%s ----" % (depth[a], n, a), "// CALLERS: %s" % cl, "// CALLEES: %s" % ce, body, ""]
    io.open(os.path.join(SRC, "_chain_%02d_%s.c" % (fi, safe)), "w", encoding="utf-8").write("\n".join(out))
    print("chain %d: %s (%d nodes)" % (fi, safe, len(order)))

def esc(t): return t.replace("&","&amp;").replace("<","&lt;").replace(">","&gt;")
def link(m):
    t = m.group(0); a = addr_by_name.get(t)
    return '<a href="#f_%s">%s</a>' % (a, esc(t)) if a else esc(t)
LINKPAT = re.compile(r'(?<![A-Za-z0-9_$])(?:' + "|".join(re.escape(x) for x in long_names) + r')(?![A-Za-z0-9_$])')
groups = defaultdict(list)
for a, (cls, meth, kind) in info.items():
    groups[cls or ("block链" if kind=="block" else "其他/C")].append(a)
parts = ["""<!doctype html><html><head><meta charset="utf-8"><title>WCMoments xref</title>
<style>body{background:#14171c;color:#c9d1d9;font:13px/1.5 Consolas,monospace;margin:0}
#toc{position:fixed;top:0;left:0;bottom:0;width:340px;overflow:auto;background:#0d1017;padding:10px;border-right:1px solid #2a2f3a}
#main{margin-left:356px;padding:14px}
#toc a{display:block;color:#8ab4f8;text-decoration:none;padding:1px 4px;font-size:12px}
#toc .g{color:#e6edf3;font-weight:bold;margin-top:8px}
a.x{color:#f2cc60;text-decoration:none;border-bottom:1px dotted #f2cc60}
.sec{margin:14px 0;border:1px solid #2a2f3a;border-radius:6px}
.hd{background:#1b2129;padding:6px 10px;color:#e6edf3;font-weight:bold}
.hd .a{color:#7ee787;font-weight:normal}
pre{margin:0;padding:10px;white-space:pre-wrap}
.c{color:#8b949e;font-weight:normal}</style></head><body>"""]
parts.append('<div id="toc"><b style="color:#e6edf3">WCMoments (%d)</b>' % len(recs))
for g in sorted(groups):
    parts.append('<div class="g">%s (%d)</div>' % (esc(g), len(groups[g])))
    for a in sorted(groups[g], key=lambda x:int(x,16)):
        parts.append('<a href="#f_%s">%s</a>' % (a, esc(recs[a][0][:95])))
parts.append('</div><div id="main">')
for a in sorted(recs, key=lambda x:int(x,16)):
    n, body = recs[a]
    hd = '<div class="sec" id="f_%s"><div class="hd">%s <span class="a">@0x%s</span>' % (a, esc(n), a)
    if callers.get(a): hd += ' <span class="c">&larr; ' + esc(", ".join(recs[c][0] for c in list(callers[a])[:6])) + '</span>'
    if callees.get(a): hd += ' <span class="c">&rarr; ' + esc(", ".join(recs[c][0] for c in list(callees[a])[:8])) + '</span>'
    hd += '</div>'
    parts.append(hd)
    parts.append("<pre>" + LINKPAT.sub(link, esc(body)) + "</pre></div>")
parts.append("</div></body></html>")
io.open(os.path.join(SRC, "_xref.html"), "w", encoding="utf-8").write("".join(parts))
print("html done")

# 解包 xiaowei.dylib 并反汇编关键语音发送调用点（ADRP+LDR/ADD 引用定位 + capstone 注释）
import struct, io, gzip, lzma, bz2, tarfile, sys
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

sys.stdout.reconfigure(encoding="utf-8", errors="replace")
DEB = r"c:\Users\20546\Desktop\ios_cc4BX\插件\小微助手_2.2-9_有根.deb"

# ---- 解包 dylib ----
data = open(DEB, "rb").read()
pos, members = 8, []
while pos + 60 <= len(data):
    hdr = data[pos:pos+60]
    name = hdr[0:16].decode("ascii","replace").strip()
    size = int(hdr[48:58].decode("ascii","replace").strip() or 0)
    members.append((name, data[pos+60:pos+60+size])); pos += 60 + size + (size % 2)
for name, body in members:
    if name.startswith("data.tar"):
        for op in (gzip.decompress, lzma.decompress, bz2.decompress, lambda x: x):
            try: tarb = op(body); break
            except Exception: continue
tf = tarfile.open(fileobj=io.BytesIO(tarb))
BLOB = None
for m in tf.getmembers():
    if m.isfile() and m.name.endswith("xiaowei.dylib"):
        BLOB = tf.extractfile(m).read()
assert BLOB, "no dylib"
print("dylib:", len(BLOB))

# ---- MachO 解析 ----
assert struct.unpack_from("<I", BLOB, 0)[0] == 0xfeedfacf
ncmds = struct.unpack_from("<I", BLOB, 16)[0]
off = 32
segs, secs = [], []
for _ in range(ncmds):
    cmd, csize = struct.unpack_from("<II", BLOB, off)
    if cmd == 0x19:  # LC_SEGMENT_64
        vmaddr, vmsize, fileoff, filesize = struct.unpack_from("<QQQQ", BLOB, off+24)
        segs.append((vmaddr, vmsize, fileoff, filesize))
        nsects = struct.unpack_from("<I", BLOB, off+64)[0]
        so = off + 72
        for _i in range(nsects):
            sname = BLOB[so:so+16].split(b"\0")[0].decode("ascii","replace").lstrip("_")
            sseg  = BLOB[so+16:so+32].split(b"\0")[0].decode("ascii","replace").lstrip("_")
            addr, sz = struct.unpack_from("<QQ", BLOB, so+32)
            fo = struct.unpack_from("<I", BLOB, so+48)[0]
            secs.append({"seg": sseg, "name": sname, "addr": addr, "size": sz, "off": fo})
            so += 80
    off += csize

def vm2fo(a):
    for vmaddr, vmsize, fileoff, filesize in segs:
        if vmaddr <= a < vmaddr + vmsize and filesize:
            return a - vmaddr + fileoff
    return None

def sec_at(a):
    for s in secs:
        if s["addr"] and s["addr"] <= a < s["addr"] + s["size"]:
            return s
    return None

def rd_str(a, maxlen=200):
    fo = vm2fo(a)
    if fo is None: return None
    end = BLOB.find(b"\0", fo, fo+maxlen)
    if end < 0: return None
    try: return BLOB[fo:end].decode("utf-8")
    except Exception: return None

def rd64(a):
    fo = vm2fo(a)
    if fo is None or fo+8 > len(BLOB): return None
    return struct.unpack_from("<Q", BLOB, fo)[0]

def decode_ptr(raw):
    # 链式 fixup: 低 36 位 target；经典重定位: 完整 vmaddr —— 两种候选都试
    cands = {raw, raw & 0xFFFFFFFFF}
    return cands

# 关键 section
S = {}
for s in secs: S.setdefault(s["name"], s)
text = S["text"]

def selref_addr_for(selname):
    want = selname.encode()
    # 方法名字符串地址
    ss = S.get("objc_methname")
    hits = []
    fo = ss["off"]
    idx = BLOB.find(want + b"\0", fo, fo + ss["size"])
    while idx >= 0 and len(hits) < 4:
        strva = ss["addr"] + (idx - fo)
        # selref 槽: 内容指向 strva
        for name in ("objc_selrefs",):
            r = S.get(name)
            if not r: continue
            for slot in range(r["addr"], r["addr"] + r["size"], 8):
                raw = rd64(slot)
                if raw is None: continue
                for c in decode_ptr(raw):
                    if c == strva:
                        hits.append(slot)
    # 类自身也可能直接引用字符串（极少），忽略
        idx = BLOB.find(want + b"\0", idx+1, fo + ss["size"])
    return hits

def cfstring_addr_for(content):
    want = content.encode()
    # __cstring 或 __objc_methname 中找内容
    strvas = []
    for sname in ("cstring", "objc_methname"):
        ss = S.get(sname)
        if not ss: continue
        idx = BLOB.find(want + b"\0", ss["off"], ss["off"] + ss["size"])
        if idx >= 0: strvas.append(ss["addr"] + (idx - ss["off"]))
    hits = []
    cf = S.get("objc_cfstring")
    if cf:
        for slot in range(cf["addr"], cf["addr"] + cf["size"], 32):
            raw = rd64(slot)
            if raw is None: continue
            for c in decode_ptr(raw):
                if c in strvas:
                    hits.append(slot)
    return hits, strvas

# ---- 文本扫描: ADRP + ADD/LDR 计算出目标地址的指令对 ----
def find_refs(target_va, max_sites=3, win_before=45, win_after=80):
    lo, hi = text["addr"], text["addr"] + text["size"]
    tlo, tfo = text["addr"], text["off"]
    code = BLOB[tfo:tfo + text["size"]]
    md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN); md.detail = False
    sites = []
    n = len(code) // 4
    adrp = {}  # reg -> page base (track per scan sequentially; approximate: reset at cbz/ret boundaries not needed, heuristic ok)
    # 先线性扫一遍找引用点
    refpcs = []
    regpage = {}
    for i in range(n):
        pc = lo + i*4
        w = struct.unpack_from("<I", code, i*4)[0]
        if (w & 0x9F000000) == 0x90000000:  # ADRP
            rd = w & 0x1F
            immlo = (w >> 29) & 3
            immhi = (w >> 5) & 0x7FFFF
            imm = (immhi << 2) | immlo
            if imm & (1 << 20): imm -= (1 << 21)
            regpage[rd] = (pc & ~0xFFF) + (imm << 12)
        elif (w & 0xFF800000) == 0x91000000:  # ADD imm
            rn = (w >> 5) & 0x1F
            if rn in regpage:
                imm = (w >> 10) & 0xFFF
                t = regpage[rn] + imm
                if t == target_va: refpcs.append(pc)
        elif (w & 0xFFC00000) == 0xF9400000:  # LDR unsigned imm (64b)
            rn = (w >> 5) & 0x1F
            if rn in regpage:
                imm = ((w >> 10) & 0xFFF) * 8
                t = regpage[rn] + imm
                if t == target_va: refpcs.append(pc)
        else:
            # 控制流跨越函数边界时寄存器页缓存可能失真，简单清空一半概率场景
            if (w & 0xFF000000) in (0x94000000, 0x14000000):  # bl/b
                regpage.clear()
    for site in refpcs[:max_sites]:
        print("\n  ---- 引用点 @0x%X ----" % site)
        # 反汇编窗口（带字符串注释）
        start = max(site - win_before*4, lo)
        end = min(site + win_after*4, hi)
        # 重建窗口内的 adrp 页映射（从窗口起点开始）
        rp = {}
        for pc in range(start, end, 4):
            w = struct.unpack_from("<I", code, pc - lo)[0]
            if (w & 0x9F000000) == 0x90000000:
                rd = w & 0x1F
                immlo = (w >> 29) & 3; immhi = (w >> 5) & 0x7FFFF
                imm = (immhi << 2) | immlo
                if imm & (1 << 20): imm -= (1 << 21)
                rp[pc] = (rd, (pc & ~0xFFF) + (imm << 12))
        def annotate(pc, w):
            if (w & 0x9F000000) == 0x90000000: return ""
            if (w & 0xFF800000) == 0x91000000:
                rn = (w >> 5) & 0x1F
                for ppc, (rd, page) in rp.items():
                    if rd == rn and ppc < pc:
                        t = page + ((w >> 10) & 0xFFF)
                        return note_addr(t)
                return ""
            if (w & 0xFFC00000) == 0xF9400000:
                rn = (w >> 5) & 0x1F
                for ppc, (rd, page) in rp.items():
                    if rd == rn and ppc < pc:
                        t = page + (((w >> 10) & 0xFFF) * 8)
                        return note_addr(t)
                return ""
            return ""
        def note_addr(t):
            s = sec_at(t)
            if not s: return ""
            if s["name"] in ("objc_selrefs",):
                for c in decode_ptr(rd64(t) or 0):
                    st = rd_str(c) if c else None
                    if st: return ' ; @%s "%s"' % (hex(t), st)
            elif s["name"] in ("objc_classrefs", "objc_data", "objc_const"):
                for c in decode_ptr(rd64(t) or 0):
                    if c:
                        cs = sec_at(c)
                        if cs and cs["name"] == "objc_classname":
                            return ' ; @%s class "%s"' % (hex(t), rd_str(c) or "")
                return ' ; @%s classref@%s' % (hex(t), s["name"])
            elif s["name"] == "objc_cfstring":
                raw = rd64(t)
                for c in decode_ptr(raw or 0):
                    st = rd_str(c) if c else None
                    if st: return ' ; @%s cfstr "%s"' % (hex(t), st[:60])
            elif s["name"] in ("cstring", "objc_methname"):
                st = rd_str(t)
                if st: return ' ; @%s "%s"' % (hex(t), st[:60])
            return ""
        for ins in md.disasm(code[start - lo:end - lo], start):
            w = struct.unpack_from("<I", code, ins.address - lo)[0]
            ann = annotate(ins.address, w)
            mark = "  <== REF" if ins.address == site else ""
            print("  0x%08X  %-8s %s%s%s" % (ins.address, ins.mnemonic, ins.op_str, ann, mark))
    if not refpcs:
        print("  (无引用点)")

# ---- 目标 ----
TARGETS_SEL = [
    ("SaveMesVoice:MsgWrap:", 8, 80, 110),
    ("ResendVoiceMsg:MsgWrap:", 8, 80, 110),
    ("AddMsg:MsgWrap:", 6, 80, 110),
    ("AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:", 8, 80, 110),
    ("initWithMsgType:nsFromUsr:", 4, 60, 90),
    ("setM_dtVoice:", 4, 60, 90),
    ("setVoiceData:", 4, 60, 90),
    ("voiceData", 4, 60, 90),
]
TPL = '<msg><voicemsg voicelength="%u" voiceformat="4" forwardflag="%u" /></msg>'

for sel, maxs, wb, wa in TARGETS_SEL:
    print("\n" + "="*72)
    print("SEL:", sel)
    slots = selref_addr_for(sel)
    print("selref 槽: %s" % ([hex(s) for s in slots] or "未找到"))
    for s in slots[:2]:
        find_refs(s, max_sites=maxs, win_before=wb, win_after=wa)

print("\n" + "="*72)
print("CFSTRING/模板:", TPL)
cfslots, strvas = cfstring_addr_for(TPL)
print("cfstring 槽: %s  cstring: %s" % ([hex(x) for x in cfslots], [hex(x) for x in strvas]))
for s in cfslots[:2]:
    find_refs(s, max_sites=4, win_before=300, win_after=300)
for sv in strvas[:1]:
    find_refs(sv, max_sites=2, win_before=300, win_after=300)

# ---- 直接 dump 指定地址范围（辅助函数）----
DUMP_RANGES = [
    (0x7AC80, 0x7ADF0, "helper 0x7aa00 尾部"),
    (0x7ADF0, 0x7AEA0, "helper 0x7adf0"),
    (0x7A2E0, 0x7A3E0, "helper 0x7a2e0(wrap,x19,x40,x25)"),
    (0x7A4A0, 0x7A620, "setM_dtVoice 引用处 0x7a4a0"),
]
print("\n" + "="*72)
print("RANGE DUMP")
for a in (0x7ae2a0, 0x7ae2c0, 0x7ae360, 0x7ae380, 0x7ae3a0, 0x7ae3c0, 0x7ae2fc):
    print("STR @0x%x: %r" % (a, rd_str(a)))
md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
tlo, tfo = text["addr"], text["off"]
code = BLOB[tfo:tfo + text["size"]]
for a0, a1, label in DUMP_RANGES:
    print("\n---- %s (0x%X-0x%X) ----" % (label, a0, a1))
    # 窗口内 adrp 映射
    rp = {}
    for pc in range(a0, a1, 4):
        w = struct.unpack_from("<I", code, pc - tlo)[0]
        if (w & 0x9F000000) == 0x90000000:
            rd = w & 0x1F
            immlo = (w >> 29) & 3; immhi = (w >> 5) & 0x7FFFF
            imm = (immhi << 2) | immlo
            if imm & (1 << 20): imm -= (1 << 21)
            rp[pc] = (rd, (pc & ~0xFFF) + (imm << 12))
    def note_addr2(t):
        s = sec_at(t)
        if not s: return ""
        if s["name"] in ("objc_selrefs",):
            for c in decode_ptr(rd64(t) or 0):
                st = rd_str(c) if c else None
                if st: return ' ; @%s "%s"' % (hex(t), st)
        elif s["name"] == "objc_cfstring":
            for c in decode_ptr(rd64(t) or 0):
                st = rd_str(c) if c else None
                if st: return ' ; @%s cfstr "%s"' % (hex(t), st[:60])
        elif s["name"] in ("cstring", "objc_methname"):
            st = rd_str(t)
            if st: return ' ; @%s "%s"' % (hex(t), st[:60])
        return ""
    for pc in range(a0, a1, 4):
        w = struct.unpack_from("<I", code, pc - tlo)[0]
        ann = ""
        if (w & 0x9F000000) == 0x90000000:
            rd = w & 0x1F
            immlo = (w >> 29) & 3; immhi = (w >> 5) & 0x7FFFF
            imm = (immhi << 2) | immlo
            if imm & (1 << 20): imm -= (1 << 21)
            page = (pc & ~0xFFF) + (imm << 12)
            s = sec_at(page)
            if s and s["name"] in ("objc_selrefs", "objc_cfstring", "cstring", "objc_methname"):
                ann = note_addr2(page)
        elif (w & 0xFF800000) == 0x91000000:
            rn = (w >> 5) & 0x1F
            for ppc, (rd, page) in sorted(rp.items()):
                if rd == rn and ppc < pc:
                    ann = note_addr2(page + ((w >> 10) & 0xFFF))
            # 取最近的 adrp
        elif (w & 0xFFC00000) == 0xF9400000:
            rn = (w >> 5) & 0x1F
            for ppc, (rd, page) in sorted(rp.items()):
                if rd == rn and ppc < pc:
                    ann = note_addr2(page + (((w >> 10) & 0xFFF) * 8))
        for ins in md.disasm(code[pc - tlo:pc - tlo + 4], pc):
            print("  0x%08X  %-8s %s%s" % (ins.address, ins.mnemonic, ins.op_str, ann))
            break

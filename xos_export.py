# -*- coding: utf-8 -*-
# XOS 1.5.9 Ghidra headless export (BubbleBox-style structure)
# Output: per-class .c, FUN_ chunks, _funcs/, _index.tsv, _full_class_method_index.txt, _summary.txt
import re, os
from ghidra.app.decompiler import DecompInterface, DecompileOptions
from ghidra.util.task import ConsoleTaskMonitor

OUT = r"C:\Users\20546\Desktop\ios_cc4BX\XOS159反编译"
FUNCDIR = os.path.join(OUT, "_funcs")
if not os.path.exists(OUT): os.makedirs(OUT)
if not os.path.exists(FUNCDIR): os.makedirs(FUNCDIR)

def wbin(path, text):
    f = open(path, "wb"); f.write(text.encode("utf-8", "replace")); f.close()

monitor = ConsoleTaskMonitor()
program = currentProgram
fm = program.getFunctionManager()

di = DecompInterface()
di.setOptions(DecompileOptions())
di.openProgram(program)

groups = {}
index_rows = []
n_total = n_ok = n_thunk = n_short = n_fail = 0

it = fm.getFunctions(True)
while it.hasNext():
    f = it.next()
    n_total += 1
    if n_total % 500 == 0:
        print("[xos_export] scanned %d (ok=%d thunk=%d short=%d fail=%d)" % (n_total, n_ok, n_thunk, n_short, n_fail))
    if f.isThunk():
        n_thunk += 1
        continue
    name = f.getName(False)
    addr = f.getEntryPoint().getOffset()
    try:
        res = di.decompileFunction(f, 30, monitor)
    except:
        n_fail += 1
        continue
    if res is None or not res.decompileCompleted():
        n_fail += 1
        continue
    code = res.getDecompiledFunction().getC()
    if code is None or len(code.strip()) < 40:
        n_short += 1
        continue
    n_ok += 1
    m = re.match(r'^[-+]\[([A-Za-z_]\w*)(?:\([^)]*\))?\s', name)
    cls = m.group(1) if m else "FUN_"
    groups.setdefault(cls, []).append((name, addr, code))
    index_rows.append("%s\t0x%x\t%s" % (name, addr, cls))
    safe = re.sub(r'[^\w.-]', '_', name)[:140]
    wbin(os.path.join(FUNCDIR, "%016x_%s.c" % (addr, safe)), "// %s @0x%x\n%s" % (name, addr, code))

# per-class / FUN_ chunked group files
part_files = []
for cls in sorted(groups.keys()):
    items = groups[cls]
    if cls == "FUN_":
        part = 1; buf = []; size = 0
        for (n, a, c) in items:
            chunk = "// ==== %s @0x%x ====\n%s\n" % (n, a, c)
            if size + len(chunk) > 2097152 and buf:
                fn = "FUN_.c" if part == 1 else "FUN__part%d.c" % part
                wbin(os.path.join(OUT, fn), "".join(buf))
                part_files.append(fn); part += 1; buf = []; size = 0
            buf.append(chunk); size += len(chunk)
        if buf:
            fn = "FUN_.c" if part == 1 else "FUN__part%d.c" % part
            wbin(os.path.join(OUT, fn), "".join(buf))
            part_files.append(fn)
    else:
        blob = "// class %s (%d methods)\n\n" % (cls, len(items))
        blob += "".join("// ==== %s @0x%x ====\n%s\n" % (n, a, c) for (n, a, c) in items)
        wbin(os.path.join(OUT, "%s.c" % cls), blob)

# indexes
wbin(os.path.join(OUT, "_index.tsv"), "name\taddress\tgroup\n" + "\n".join(index_rows))
idx = []
for cls in sorted(groups.keys()):
    idx.append("== %s (%d) ==" % (cls, len(groups[cls])))
    for (n, a, c) in groups[cls]:
        idx.append("  0x%x  %s" % (a, n))
wbin(os.path.join(OUT, "_full_class_method_index.txt"), "\n".join(idx))
wbin(os.path.join(OUT, "_summary.txt"),
     "Total scanned : %d\nExported      : %d\nSkipped (thunk): %d\nSkipped (short): %d\nFailed         : %d\nGroup files    : %d\n" % (n_total, n_ok, n_thunk, n_short, n_fail, len(part_files)))
print("[xos_export] DONE ok=%d total=%d groupfiles=%d" % (n_ok, n_total, len(part_files)))

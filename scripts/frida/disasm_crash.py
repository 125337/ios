# -*- coding: utf-8 -*-
# 反汇编 Mio dylib 崩溃点附近代码，识别 objc_msgSend 的 selector 引用
import struct
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

PATH = r"C:\Users\20546\Desktop\ios_cc4BX\dist\Mio_arm64-1.dylib"
data = open(PATH, "rb").read()

# 解析 sections（__TEXT: __objc_selref / __cstring / __objc_classref）
magic, cputype, cpusub, filetype, ncmds, sizeofcmds, flags, res = struct.unpack_from("<IIIIIIII", data, 0)
off = 32
selref = cstring = None
for _ in range(ncmds):
    cmd, cmdsize = struct.unpack_from("<II", data, off)
    if cmd == 0x19:  # LC_SEGMENT_64
        segname = data[off+8:off+24].rstrip(b"\0").decode()
        nsects = struct.unpack_from("<I", data, off+64)[0]
        so = off + 72
        for s in range(nsects):
            sect = data[so:so+16].rstrip(b"\0").decode()
            sg = data[so+16:so+32].rstrip(b"\0").decode()
            addr, size, foff = struct.unpack_from("<QQQ", data, so+32)
            if segname == "__DATA_CONST" and sect == "__objc_selref":
                selref = (addr, size, foff)
            if segname == "__TEXT" and sect == "__cstring":
                cstring = (addr, size, foff)
            so += 80
    off += cmdsize
print(f"selref={selref and (hex(selref[0]), hex(selref[1]))} cstring={cstring and (hex(cstring[0]), hex(cstring[1]))}")

md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
md.detail = True

def disasm(target, back=0x40, fwd=0x30):
    print(f"\n═══ 0x{target:x} 反汇编 ═══")
    start = target - back
    code = data[start:start + back + fwd]
    sel_refs = {}
    for ins in md.disasm(code, start):
        mark = " ★" if ins.address == target else "  "
        line = f"{mark}0x{ins.address:x}: {ins.mnemonic} {ins.op_str}"
        # ADRP+ADD/LDR 解析 selref
        if ins.mnemonic in ("adrp", "ldr") and "selref" not in sel_refs:
            pass
        print(line)
    # 向上找 adrp/add 组合（capstone op_str 手工解析）
    return

def find_selref_near(target, window=0x60):
    """在 target 前 window 内找 adrp xN, page; add/ldr xN, [xN, #off] 指向 selref"""
    start = max(0, target - window)
    code = data[start:target + 8]
    ins_list = list(md.disasm(code, start))
    adrp_val = {}
    out = []
    for i, ins in enumerate(ins_list):
        if ins.mnemonic == "adrp":
            try:
                ops = ins.op_str.split(", ")
                reg = ops[0]
                imm = int(ops[1].replace("#", ""), 16)
                adrp_val[reg] = imm
            except Exception:
                pass
        elif ins.mnemonic == "ldr" and "selref" in (ins.op_str + ""):
            pass
        # LDR x, [x, #imm] 形式：解析出最终地址
        if ins.mnemonic == "ldr" and "[" in ins.op_str:
            try:
                left, right = ins.op_str.split("[")
                reg = right.split(",")[0].strip().rstrip("]")
                if reg in adrp_val:
                    # ldr xN, [xM, #off] → adrp page + off
                    offpart = right.split(",", 1)
                    offv = 0
                    if len(offpart) > 1:
                        ostr = offpart[1].strip().rstrip("]")
                        if ostr.startswith("#"):
                            offv = int(ostr[1:], 16) if ostr[1:].startswith("0x") else int(ostr[1:])
                    final = adrp_val[reg] + offv
                    if selref and selref[0] <= final < selref[0] + selref[1]:
                        # 读 selref 指向的 selector 字符串
                        fo = selref[2] + (final - selref[0])
                        sel_ptr = struct.unpack_from("<Q", data, fo)[0]
                        sel_name_addr = sel_ptr
                        # selector 名在 __cstring? selref 存的是 SEL 指针（chained fixup 下为 0），
                        # 直接读它指向的内存
                        if 0 < sel_name_addr < len(data):
                            end = data.index(b"\0", sel_name_addr)
                            nm = data[sel_name_addr:end].decode(errors="replace")
                        else:
                            nm = f"ptr=0x{sel_ptr:x}"
                        out.append((ins.address, nm))
            except Exception:
                pass
    return out

for t in (0x5bb38, 0x5bce4):
    print(f"\n════════ 0x{t:x} ════════")
    refs = find_selref_near(t)
    for a, nm in refs:
        print(f"  0x{a:x}: selref → {nm}")
    disasm(t, back=0x50, fwd=0x40)

# -*- coding: utf-8 -*-
# 解析 Mach-O 符号表：定位 dylib 崩溃偏移所属函数
import struct, sys

PATH = r"C:\Users\20546\Desktop\ios_cc4BX\dist\Mio_arm64-1.dylib"
TARGETS = [0x5bce4, 0x5bb38]

data = open(PATH, "rb").read()
magic, cputype, cpusub, filetype, ncmds, sizeofcmds, flags, res = struct.unpack_from("<IIIIIIII", data, 0)
print(f"magic=0x{magic:x} ncmds={ncmds}")

off = 32  # header size (64-bit)
symtab_off = symtab_n = strtab_off = strtab_size = None
segs = []
for _ in range(ncmds):
    cmd, cmdsize = struct.unpack_from("<II", data, off)
    if cmd == 0x19:  # LC_SEGMENT_64
        segname = data[off+8:off+24].rstrip(b"\0").decode()
        vmaddr, vmsize, fileoff, filesize = struct.unpack_from("<QQQQ", data, off+24)
        segs.append((segname, vmaddr, vmsize, fileoff, filesize))
        print(f"SEG {segname} vmaddr=0x{vmaddr:x} size=0x{vmsize:x} fileoff=0x{fileoff:x}")
    elif cmd == 0x2:  # LC_SYMTAB
        symtab_off, symtab_n, strtab_off, strtab_size = struct.unpack_from("<IIII", data, off+8)
    off += cmdsize

if symtab_off is None:
    print("无 LC_SYMTAB（符号被剥离）")
    sys.exit(0)

syms = []
for i in range(symtab_n):
    o = symtab_off + i * 16
    n_strx, n_type, n_sect, n_desc, n_value = struct.unpack_from("<IBBHQ", data, o)
    if n_type & 0x0e != 0x0e:  # 只要 N_SECT（定义在本文件的符号）
        continue
    end = data.index(b"\0", strtab_off + n_strx)
    name = data[strtab_off + n_strx:end].decode(errors="replace")
    syms.append((n_value, name))

syms.sort()
for t in TARGETS:
    best = None
    for v, name in syms:
        if v <= t:
            best = (v, name)
        else:
            break
    if best:
        print(f"0x{t:x} → {best[1]} +0x{t - best[0]:x} (函数起点 0x{best[0]:x})")
    else:
        print(f"0x{t:x} → 无匹配符号")
print(f"符号总数(定义): {len(syms)}")

import struct, sys, re, glob

path = r'BubbleBox反编译\BubbleBoxExport\BubbleBox.dylib'
data = open(path, 'rb').read()
ncmds = struct.unpack_from('<I', data, 16)[0]
sections = []
off = 32
for _ in range(ncmds):
    cmd, cmdsize = struct.unpack_from('<II', data, off)
    if cmd == 0x19:
        nsects = struct.unpack_from('<I', data, off+64)[0]
        so = off + 72
        for i in range(nsects):
            s = data[so:so+16].split(b'\0')[0].decode(errors='replace')
            sg = data[so+16:so+32].split(b'\0')[0].decode(errors='replace')
            addr, size = struct.unpack_from('<QQ', data, so+32)
            offset, = struct.unpack_from('<I', data, so+48)
            sections.append((sg, s, addr, size, offset))
            so += 80
    off += cmdsize

def va2off(va):
    for (sg, s, addr, size, offset) in sections:
        if addr <= va < addr + size:
            return offset + (va - addr)
    return None

def read_cfstring(struct_va):
    fo = va2off(struct_va)
    if fo is None:
        return None
    isa, flags, dptr, length = struct.unpack_from('<QQQq', data, fo)
    dfo = va2off(dptr)
    if dfo is None or length < 0 or length > 4096:
        return None
    return data[dfo:dfo+length].decode(errors='replace')

# collect all CFConstantString refs from engine decompiles
refs = {}
for f in glob.glob(r'BubbleBox反编译\BubbleBoxExport\_efuncs\*.c') + \
         glob.glob(r'BubbleBox反编译\BubbleBoxExport\_funcs\FUN_004*.c') + \
         [r'BubbleBox反编译\BubbleBoxExport\_merge_engine.c', r'BubbleBox反编译\BubbleBoxExport\_merge_callers.c']:
    txt = open(f, encoding='utf-8', errors='replace').read()
    for m in re.finditer(r'PTR____CFConstantStringClassReference_([0-9a-f]{8})', txt):
        va = int(m.group(1), 16)
        refs.setdefault(va, []).append(f.split('\\')[-1])

print('=== CFConstantString refs resolved ===')
for va in sorted(refs):
    s = read_cfstring(va)
    files = ','.join(sorted(set(refs[va])))
    print('%08x  %-60r  [%s]' % (va, s, files[:80]))

import struct, sys

path, selname = sys.argv[1], sys.argv[2]
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

def getsec(name):
    for (sg, s, addr, size, offset) in sections:
        if s == name:
            return (addr, size, offset)
    return None

def off2va(o):
    for (sg, s, addr, size, offset) in sections:
        if offset <= o < offset+size:
            return addr + (o - offset)

# find selref slot VA(s) for selector
saddr, ssize, soff = getsec('__objc_selrefs')
needle = selname.encode() + b'\0'
si = data.find(needle)
sel_va = off2va(si)
slots = []
for i in range(0, ssize - 7, 8):
    raw = struct.unpack_from('<Q', data, soff + i)[0]
    if (raw & 0x0000FFFFFFFFFFFF) == sel_va:
        slots.append(saddr + i)
print('selector %r methname=%#x selref slots: %s' % (selname, sel_va, [hex(s) for s in slots]))

taddr, tsize, toff = getsec('__text')
text_va = taddr

def decode_adrp(ins, pc):
    if (ins & 0x9F000000) != 0x90000000:
        return None
    rd = ins & 0x1F
    immlo = (ins >> 29) & 0x3
    immhi = (ins >> 5) & 0x7FFFF
    imm = (immhi << 2) | immlo
    if imm & (1 << 20):
        imm -= (1 << 21)
    return (rd, (pc & ~0xFFF) + (imm << 12))

def decode_ldr_imm(ins):
    # LDR (immediate, unsigned offset) 64-bit: 1111 1001 01 imm12 Rn Rt
    if (ins & 0xFFC00000) != 0xF9400000:
        return None
    rt = ins & 0x1F
    rn = (ins >> 5) & 0x1F
    imm12 = (ins >> 10) & 0xFFF
    return (rt, rn, imm12 * 8)

hits = []
i = 0
insns = tsize // 4
for k in range(insns):
    pc = text_va + k * 4
    ins = struct.unpack_from('<I', data, toff + k * 4)[0]
    a = decode_adrp(ins, pc)
    if not a:
        continue
    rd, page = a
    for slot in slots:
        if (slot & ~0xFFF) == page:
            # look ahead for LDR from rd with right imm
            for j in range(1, 24):
                if k + j >= insns:
                    break
                ins2 = struct.unpack_from('<I', data, toff + (k + j) * 4)[0]
                l = decode_ldr_imm(ins2)
                if l:
                    rt, rn, imm = l
                    if rn == rd and (page + imm) == slot:
                        hits.append((pc, text_va + (k + j) * 4, rt))
                        break
                # stop if rd overwritten by another adrp/movz
                if (ins2 & 0x9F000000) == 0x90000000 and (ins2 & 0x1F) == rd:
                    break
print('code refs (adrp_pc, ldr_pc, reg):')
for h in hits:
    print('  adrp=%08x ldr=%08x' % (h[0], h[1]))
if not hits:
    print('  none found in __text')

import struct, sys

path = sys.argv[1]
targets = set(sys.argv[2:])

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

def va2off(va):
    for (sg, s, addr, size, offset) in sections:
        if addr <= va < addr + size:
            return offset + (va - addr)
    return None

# ---- selrefs: every 8-aligned slot = methname VA | flag(0x0010<<44) ----
saddr, ssize, soff = getsec('__objc_selrefs')
slot_name = {}
n_valid = 0
for i in range(0, ssize - 7, 8):
    raw = struct.unpack_from('<Q', data, soff + i)[0]
    if raw == 0:
        continue
    va = raw & 0x0000FFFFFFFFFFFF
    fo = va2off(va)
    if fo is None:
        continue
    end = data.find(b'\0', fo)
    nm = data[fo:end].decode(errors='replace')
    slot_name[saddr + i] = nm
    n_valid += 1
print('selref slots decoded: %d / %d' % (n_valid, ssize // 8))

# ---- method lists: name field -> selref slot VA; resolve via slot_name ----
maddr, msize, moff = getsec('__objc_methlist')
defs = []  # (selector, entryVA, impVA)
e = 0
while e < msize - 7:
    entsize, count = struct.unpack_from('<II', data, moff + e)
    rel = (entsize & 0x80000000) != 0
    esz = entsize & 0x7FFFFFFF
    body = 8 + count * esz
    if body <= 0 or e + body > msize:
        e += 4
        continue
    if rel and esz == 12:
        for i in range(count):
            ea = maddr + e + 8 + i * 12
            name_rel, types_rel, imp_rel = struct.unpack_from('<iii', data, moff + e + 8 + i * 12)
            nm = slot_name.get(ea + name_rel)
            defs.append((nm, ea, ea + imp_rel))
    elif not rel and esz == 24:
        for i in range(count):
            ea = maddr + e + 8 + i * 24
            name_va, types_va, imp_va = struct.unpack_from('<QQQ', data, moff + e + 8 + i * 24)
            fo = va2off(name_va)
            nm = data[fo:data.find(b'\0', fo)].decode(errors='replace') if fo else '?'
            defs.append((nm, ea, imp_va))
    e += body

print('total defs decoded:', len(defs), ' unresolved:', sum(1 for d in defs if d[0] is None))

print()
print('=== methlist DEFINITIONS matching targets ===')
for (nm, ea, imp) in sorted(defs, key=lambda x: (x[0] or '')):
    if nm in targets:
        print('%-40s entry=%08x IMP=%08x' % (nm, ea, imp))

print()
print('=== targets: definition vs call-site ===')
name_count = {}
for (nm, ea, imp) in defs:
    if nm:
        name_count[nm] = name_count.get(nm, 0) + 1
for t in sorted(targets):
    is_def = name_count.get(t, 0)
    slots = [s for s, nm in slot_name.items() if nm == t]
    tag = 'DEFINED x%d' % is_def if is_def else 'call-only'
    print('%-40s %-12s methlist_defs=%d selref_slots=%d' % (t, tag, is_def, len(slots)))

print()
print('=== sample defs sanity (known BubbleBox methods) ===')
for want in ('nodes', 'senderUser:', 'merge:', 'bubbleInfoWithType:position:isSender:'):
    for (nm, ea, imp) in defs:
        if nm == want:
            print('%-40s IMP=%08x' % (nm, imp))
            break

#!/usr/bin/env python3
import struct, sys

with open('wechat_analysis/Payload/WeChat.app/WeChat', 'rb') as f:
    data = f.read()

# Parse Mach-O to find ARM64 slice
magic = struct.unpack('<I', data[:4])[0]
arm64_start = 0
if magic == 0xbeefcafe:
    narch = struct.unpack('<I', data[4:8])[0]
    for i in range(narch):
        cpu, sub, off, size, align = struct.unpack('<IIIII', data[8+i*20:28+i*20])
        if cpu == 12:
            arm64_start = off
            break
elif magic == 0xfeedfacf:
    arm64_start = 0

# Parse segments
pos = arm64_start + 32
ncmds = struct.unpack('<I', data[arm64_start+16:arm64_start+20])[0]

text_seg = None
for j in range(ncmds):
    cmd_type, cmd_size = struct.unpack('<II', data[pos:pos+8])
    if cmd_type == 0x19:
        segname = data[pos+8:pos+24].rstrip(b'\x00').decode('ascii', errors='replace')
        vmaddr, vmsize, fileoff, filesize = struct.unpack('<QQQQ', data[pos+24:pos+56])
        if segname == '__TEXT':
            text_seg = {'vmaddr': vmaddr, 'fileoff': fileoff}
    elif cmd_type == 0x22:
        rebase_off, rebase_sz = struct.unpack('<II', data[pos+8:pos+16])
    pos += cmd_size

# agreeDuty string offset
agree_off = 0x167375a8
agree_va = text_seg['vmaddr'] + (agree_off - text_seg['fileoff'])
print(f'agreeDuty string VA: 0x{agree_va:x}')

# Search __TEXT.__text for references to this string
# In ARM64, strings are loaded with: adrp xd, #page + add xd, xd, #offset
# Or: adrp xd, #page + ldr xd, [xd, #offset]

# The page-relative offset for the string
string_page = agree_va & ~0xfff
page_off = agree_va & 0xfff

print(f'agreeDuty page: 0x{string_page:x}')
print(f'agreeDuty page offset: 0x{page_off:x}')
print()

# Let me search for the adrp instruction pattern
# adrp xd, #imm 
# Encoding: 1 0 immhi[18:24] 1 0 0 0 0 immlo[0:1] Rd[0:4]
# The immediate encodes the page difference = target_page - pc_page

# We can't easily brute-force search for adrp, but we can search for
# the bytes of 'add xd, xd, #0x5a8' which is specific to agreeDuty
# add Rd, Rn, #imm: 1 0 0 1 0 0 0 1 sh[0:1] imm12[0:11] Rn[0:4] Rd[0:4]
# For x2, x2, #0x5a8: 0x100b0022 (big endian)
add_pattern = struct.pack('<I', 0x910b0042)  # add x2, x2, #0x5a8 (if sh=0 -> 0x5a8 = 1448)
# Actually the encoding is: 0x910xx042 where xx encodes the immediate

# Let me search in __TEXT for all possible add instructions with #0x5a8
# add x?, x?, #0x5a8: op=0x91, Rd and Rn same, imm=0x5a8=1448=0x5a8
# encoded: 1 0 0 1 0 0 0 1 0 0 0 0 0 1 0 1 1 0 1 0 1 0 0 0 Rn Rd
# = 0x91 0x00 0x58 0x62 (little endian)

text_fileoff = text_seg['fileoff']
text_data = data[fileoff + 0x4000:]

# Search for 'add x2, x2, #0x5a8' little endian
add_pat_bytes = bytes([0x42, 0x00, 0x58, 0x91])  # add x2, x2, #0x5a8
pos = 0
found = []
while True:
    p = text_data.find(add_pat_bytes, pos)
    if p == -1:
        break
    # Check if the preceding instruction is adrp
    adrp_bytes = text_data[p-4:p]
    # adrp encoding: 1 0 immlo 1 0 0 0 0 immhi R_d
    # Bit 31=1, 30=0, 29-24 vary
    adrp_val = struct.unpack('<I', adrp_bytes)[0]
    if (adrp_val >> 30) == 0x2:  # bits 31:30 = 10
        found.append(p)
        # Calculate the target
        immhi = (adrp_val >> 5) & 0x7ffff
        immlo = (adrp_val >> 29) & 0x3
        imm = (immhi << 2) | immlo
        # Sign extend from 21 bits
        if imm & 0x100000:
            imm |= -0x200000
        # Target page = PC page + imm * 4096
        # PC = text_fileoff + 0x4000 + p
        pc_page = (text_seg['vmaddr'] + 0x4000 + p) & ~0xfff
        target_page = pc_page + imm * 4096
        if target_page == string_page:
            print(f'FOUND at __TEXT offset 0x{p:x} (file 0x{text_fileoff + 0x4000 + p:x})')
            print(f'  PC page: 0x{pc_page:x}, target page: 0x{target_page:x}')
            # Dump surrounding instructions
            for di in range(-20, 20):
                insn_off = p - 4 + di*4
                if insn_off >= 0 and insn_off + 4 <= len(text_data):
                    insn = struct.unpack('<I', text_data[insn_off:insn_off+4])[0]
                    print(f'  [{di:3}] 0x{insn:08x}', end='')
                    if insn_off == p - 4:
                        print(' <-- adrp')
                    elif insn_off == p:
                        print(' <-- add (loads agreeDuty)')
                    else:
                        print()
    pos = p + 1

if not found:
    print('未找到引用 agreeDuty 的 adrp+add 指令')
    print('可能 agreeDuty 是通过动态/间接方式引用的')

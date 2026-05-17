#!/usr/bin/env python3
import sys
import struct
import os

def read_bytes(f, offset, size):
    f.seek(offset)
    return f.read(size)

def write_bytes(f, offset, data):
    f.seek(offset)
    f.write(data)

def insert_dylib(binary_path, dylib_path):
    with open(binary_path, 'rb+') as f:
        magic = struct.unpack('<I', f.read(4))[0]
        
        if magic == 0xfeedface:
            is_64bit = False
            swap = False
        elif magic == 0xfeedfacf:
            is_64bit = True
            swap = False
        elif magic == 0xcefaedfe:
            is_64bit = False
            swap = True
        elif magic == 0xcffaedfe:
            is_64bit = True
            swap = True
        else:
            print(f"Error: Not a Mach-O file")
            return False
        
        print(f"Architecture: {'ARM64' if is_64bit else 'ARM32'}")
        
        header_size = 32 if is_64bit else 28
        f.seek(0)
        header = f.read(header_size)
        
        if swap:
            ncmds = struct.unpack('>I', header[16:20])[0]
        else:
            ncmds = struct.unpack('<I', header[16:20])[0]
        
        print(f"Number of load commands: {ncmds}")
        
        dylib_name = os.path.basename(dylib_path).encode() + b'\x00'
        
        if is_64bit:
            cmd_size = 24 + ((len(dylib_name) + 7) // 8) * 8
        else:
            cmd_size = 20 + ((len(dylib_name) + 3) // 4) * 4
        
        dylib_cmd = struct.pack('<II', 0x0c, cmd_size)
        dylib_cmd += struct.pack('<IIII', 24 if is_64bit else 20, 2, 0, 0)
        dylib_cmd += dylib_name
        dylib_cmd += b'\x00' * (cmd_size - len(dylib_cmd))
        
        f.seek(0, 2)
        file_size = f.tell()
        
        f.write(dylib_cmd)
        
        f.seek(0)
        header = bytearray(f.read(header_size))
        
        if swap:
            old_ncmds = struct.unpack('>I', header[16:20])[0]
            old_size = struct.unpack('>I', header[20:24])[0]
            header[16:20] = struct.pack('>I', old_ncmds + 1)
            header[20:24] = struct.pack('>I', old_size + cmd_size)
        else:
            old_ncmds = struct.unpack('<I', header[16:20])[0]
            old_size = struct.unpack('<I', header[20:24])[0]
            header[16:20] = struct.pack('<I', old_ncmds + 1)
            header[20:24] = struct.pack('<I', old_size + cmd_size)
        
        f.seek(0)
        f.write(header)
        
        print(f"Successfully inserted: {dylib_path}")
        return True

if __name__ == '__main__':
    if len(sys.argv) < 3:
        print(f"Usage: {sys.argv[0]} <binary> <dylib_path>")
        sys.exit(1)
    
    binary = sys.argv[1]
    dylib = sys.argv[2]
    
    insert_dylib(binary, dylib)

// FUN_003f89f8 @ 003f89f8

void FUN_003f89f8(long param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  uint local_164;
  ulong local_d8 [6];
  uint local_a4;
  char local_a0;
  undefined4 local_94;
  uint local_90;
  byte local_89;
  ulong local_88;
  ulong local_80;
  bool local_75;
  uint local_74;
  ulong *local_70;
  ulong local_68;
  uint local_5c;
  ulong *local_58;
  bool local_49;
  code *local_48;
  uint local_3c;
  uint local_38;
  uint local_34;
  ulong *local_30;
  ulong local_28;
  
  local_80 = *(ulong *)(param_1 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x34);
  uVar1 = *(uint *)(param_1 + 0x30);
  local_88 = 0;
  _objc_storeStrong(&local_88,*(undefined8 *)(param_1 + 0x20));
  local_89 = bVar2 & 1;
  local_90 = uVar1;
  if (local_80 == 0) {
    local_75 = false;
  }
  else {
    _memset(local_d8,0,0x40);
    uVar4 = local_88;
    FUN_01139098(local_88,local_89 & 1,local_90,local_d8);
    _os_unfair_lock_lock(local_80);
    *(undefined1 *)(local_80 + 0x48) = 0;
    if ((uVar4 & 1) == 0) {
      _memset((void *)(local_80 + 8),0,0x40);
    }
    else {
      _memcpy((void *)(local_80 + 8),local_d8,0x40);
    }
    uVar3 = local_80;
    _os_unfair_lock_unlock();
    local_75 = false;
    if ((uVar4 & 1) != 0) {
      local_70 = local_d8;
      local_74 = local_90;
      local_5c = local_90;
      local_58 = local_70;
      if (((local_70 == (ulong *)0x0) || (local_a0 == '\0')) || (local_a4 != local_90)) {
        local_49 = false;
      }
      else {
        FUN_00a59890(0);
        local_68 = uVar3;
        if (((local_58[5] == uVar3) && (uVar4 = local_58[2], FUN_00a4ec00(), uVar4 == uVar3)) &&
           (uVar4 = local_58[3], FUN_01138c10(), uVar4 == uVar3)) {
          if (((char)local_58[7] == '\x03') && (local_58[5] == 0)) {
            local_49 = false;
          }
          else if ((local_58[4] == 0) ||
                  ((local_58[4] + 1 == 0 ||
                   (_mach_continuous_time(local_58[4] + 1), uVar3 < local_58[4])))) {
            local_30 = local_58;
            local_34 = local_5c;
            if (local_58 == (ulong *)0x0) {
              local_28 = 0;
            }
            else {
              local_38 = local_5c & 0x1f;
              if (local_38 == 0) {
                local_164 = (uint)local_58[6];
              }
              else {
                local_164 = (int)local_58[6] << (ulong)local_38 |
                            (uint)local_58[6] >> (ulong)(0x20 - local_38 & 0x1f);
              }
              local_3c = local_164;
              local_48 = FUN_009dea6c;
              local_28 = (ulong)local_164 ^ 0xc3a5f77e905041d1 ^ (ulong)local_5c << 1 ^ local_58[5]
                         ^ local_58[2] ^ local_58[3] << 7 ^ local_58[4] >> 0xb ^
                         (ulong)(byte)local_58[7] << 0x35 ^
                         (ulong)*(byte *)((long)local_58 + 0x39) << 0x2d ^ 0x9dea6c;
            }
            local_49 = (*local_58 ^ local_58[1]) == local_28;
          }
          else {
            local_49 = false;
          }
        }
        else {
          local_49 = false;
        }
      }
      local_75 = false;
      if (local_49 != false) {
        local_75 = (char)local_70[7] == '\x03';
      }
    }
  }
  local_94 = 1;
  _objc_storeStrong(&local_88,0);
  return;
}


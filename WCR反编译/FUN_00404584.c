// FUN_00404584 @ 00404584

bool FUN_00404584(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint local_14c;
  ulong *local_128;
  ulong auStack_100 [8];
  byte local_b9;
  ulong local_b8 [6];
  int local_84;
  char local_80;
  undefined4 local_74;
  ulong *local_70;
  undefined *local_68;
  uint local_5c;
  ulong *local_58;
  ulong local_28;
  
  _memset(local_b8,0,0x40);
  local_b9 = 0x40;
  FUN_01139098(&cf_keyword_alert,1,0x3c9e17a4,local_b8);
  _memset(auStack_100,0,0x40);
  _os_unfair_lock_lock(&DAT_028ca700);
  if ((local_b9 & 1) == 0) {
    local_128 = auStack_100;
  }
  else {
    local_128 = local_b8;
  }
  _memcpy(&DAT_028ca708,local_128,0x40);
  puVar4 = &DAT_028ca700;
  _os_unfair_lock_unlock();
  bVar3 = false;
  if ((local_b9 & 1) != 0) {
    local_70 = local_b8;
    local_74 = 0x3c9e17a4;
    local_5c = 0x3c9e17a4;
    if (((local_70 == (ulong *)0x0) || (local_80 == '\0')) || (local_84 != 0x3c9e17a4)) {
      bVar2 = false;
    }
    else {
      local_58 = local_70;
      FUN_00a59890(0);
      if ((((undefined *)local_58[5] == puVar4) &&
          (puVar5 = (undefined *)local_58[2], local_68 = puVar4, FUN_00a4ec00(), puVar5 == puVar4))
         && (puVar5 = (undefined *)local_58[3], FUN_01138c10(), puVar5 == puVar4)) {
        if (((char)local_58[7] == '\x03') && (local_58[5] == 0)) {
          bVar2 = false;
        }
        else if ((local_58[4] == 0) ||
                ((local_58[4] + 1 == 0 ||
                 (_mach_continuous_time(local_58[4] + 1), puVar4 < (undefined *)local_58[4])))) {
          if (local_58 == (ulong *)0x0) {
            local_28 = 0;
          }
          else {
            uVar1 = local_5c & 0x1f;
            if (uVar1 == 0) {
              local_14c = (uint)local_58[6];
            }
            else {
              local_14c = (int)local_58[6] << (ulong)uVar1 |
                          (uint)local_58[6] >> (ulong)(0x20 - uVar1 & 0x1f);
            }
            local_28 = (ulong)local_14c ^ 0xc3a5f77e905041d1 ^ (ulong)local_5c << 1 ^ local_58[5] ^
                       local_58[2] ^ local_58[3] << 7 ^ local_58[4] >> 0xb ^
                       (ulong)(byte)local_58[7] << 0x35 ^
                       (ulong)*(byte *)((long)local_58 + 0x39) << 0x2d ^ 0x9dea6c;
          }
          bVar2 = (*local_58 ^ local_58[1]) == local_28;
        }
        else {
          bVar2 = false;
        }
      }
      else {
        bVar2 = false;
      }
    }
    bVar3 = false;
    if (bVar2) {
      bVar3 = (char)local_70[7] == '\x03';
    }
  }
  return bVar3;
}


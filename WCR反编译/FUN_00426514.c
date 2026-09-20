// FUN_00426514 @ 00426514

byte FUN_00426514(void)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint local_dc;
  ulong local_a8 [6];
  int local_74;
  char local_70;
  byte local_65;
  undefined4 local_64;
  ulong *local_60;
  undefined *local_58;
  uint local_4c;
  ulong *local_48;
  bool local_39;
  code *local_38;
  uint local_2c;
  uint local_28;
  uint local_24;
  ulong *local_20;
  ulong local_18;
  
  _os_unfair_lock_lock();
  _memcpy(local_a8,&DAT_028ca708,0x40);
  puVar3 = &DAT_028ca700;
  _os_unfair_lock_unlock();
  local_64 = 0x3c9e17a4;
  local_4c = 0x3c9e17a4;
  local_60 = local_a8;
  local_48 = local_a8;
  if (((local_a8 == (ulong *)0x0) || (local_70 == '\0')) || (local_74 != 0x3c9e17a4)) {
    local_39 = false;
  }
  else {
    FUN_00a59890(0);
    local_58 = puVar3;
    if ((((undefined *)local_48[5] == puVar3) &&
        (puVar4 = (undefined *)local_48[2], FUN_00a4ec00(), puVar4 == puVar3)) &&
       (puVar4 = (undefined *)local_48[3], FUN_01138c10(), puVar4 == puVar3)) {
      if (((char)local_48[7] == '\x03') && (local_48[5] == 0)) {
        local_39 = false;
      }
      else if ((local_48[4] == 0) ||
              ((local_48[4] + 1 == 0 ||
               (_mach_continuous_time(local_48[4] + 1), puVar3 < (undefined *)local_48[4])))) {
        local_20 = local_48;
        local_24 = local_4c;
        if (local_48 == (ulong *)0x0) {
          local_18 = 0;
        }
        else {
          local_28 = local_4c & 0x1f;
          if (local_28 == 0) {
            local_dc = (uint)local_48[6];
          }
          else {
            local_dc = (int)local_48[6] << (ulong)local_28 |
                       (uint)local_48[6] >> (ulong)(0x20 - local_28 & 0x1f);
          }
          local_2c = local_dc;
          local_38 = FUN_009dea6c;
          local_18 = (ulong)local_dc ^ 0xc3a5f77e905041d1 ^ (ulong)local_4c << 1 ^ local_48[5] ^
                     local_48[2] ^ local_48[3] << 7 ^ local_48[4] >> 0xb ^
                     (ulong)(byte)local_48[7] << 0x35 ^
                     (ulong)*(byte *)((long)local_48 + 0x39) << 0x2d ^ 0x9dea6c;
        }
        local_39 = (*local_48 ^ local_48[1]) == local_18;
      }
      else {
        local_39 = false;
      }
    }
    else {
      local_39 = false;
    }
  }
  bVar1 = false;
  if (local_39 != false) {
    bVar1 = (char)local_60[7] == '\x03';
  }
  if (bVar1) {
    local_65 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar3 = PTR___dispatch_main_q_02578680;
    bVar2 = (byte)puVar4;
    if (((ulong)puVar4 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_65 = 0;
    }
    else {
      FUN_00404584();
      local_65 = bVar2 & 1;
    }
  }
  return local_65;
}


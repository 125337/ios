// FUN_005d8714 @ 005d8714

bool FUN_005d8714(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint local_154;
  ulong local_c8 [6];
  uint local_94;
  char local_90;
  uint local_88;
  byte local_81;
  ulong local_80;
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
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = false;
  if (((ulong)puVar3 & 1) != 0) {
    local_80 = 0;
    _objc_storeStrong(&local_80,&cf_moments_tail);
    local_81 = 0;
    local_88 = 0xc60e8b24;
    _memset(local_c8,0,0x40);
    uVar4 = local_80;
    FUN_01139098(local_80,local_81 & 1,local_88,local_c8);
    bVar1 = false;
    if ((uVar4 & 1) != 0) {
      local_70 = local_c8;
      local_74 = local_88;
      local_58 = local_70;
      local_5c = local_88;
      if (((local_70 == (ulong *)0x0) || (local_90 == '\0')) || (local_94 != local_88)) {
        local_49 = false;
      }
      else {
        FUN_00a59890(0);
        local_68 = uVar4;
        if (((local_58[5] == uVar4) && (uVar5 = local_58[2], FUN_00a4ec00(), uVar5 == uVar4)) &&
           (uVar5 = local_58[3], FUN_01138c10(), uVar5 == uVar4)) {
          if (((char)local_58[7] == '\x03') && (local_58[5] == 0)) {
            local_49 = false;
          }
          else if ((local_58[4] == 0) ||
                  ((local_58[4] + 1 == 0 ||
                   (_mach_continuous_time(local_58[4] + 1), uVar4 < local_58[4])))) {
            local_30 = local_58;
            local_34 = local_5c;
            if (local_58 == (ulong *)0x0) {
              local_28 = 0;
            }
            else {
              local_38 = local_5c & 0x1f;
              if (local_38 == 0) {
                local_154 = (uint)local_58[6];
              }
              else {
                local_154 = (int)local_58[6] << (ulong)local_38 |
                            (uint)local_58[6] >> (ulong)(0x20 - local_38 & 0x1f);
              }
              local_3c = local_154;
              local_48 = FUN_009dea6c;
              local_28 = (ulong)local_154 ^ 0xc3a5f77e905041d1 ^ (ulong)local_5c << 1 ^ local_58[5]
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
      bVar1 = false;
      if (local_49 != false) {
        bVar1 = (char)local_70[7] == '\x03';
      }
    }
    _objc_storeStrong(&local_80,0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return bVar1;
}


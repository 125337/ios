// featureActive @ 00f59c9c

/* Function Stack Size: 0x10 bytes */

bool WCRefineFakeLocationEngine::featureActive(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint local_12c;
  undefined *local_e8;
  SEL local_e0;
  ID local_d8;
  bool local_c9;
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
  local_e0 = param_2;
  local_d8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fakeLocationEnabled_026ac5c0);
  if (((ulong)puVar2 & 1) == 0) {
    local_c9 = false;
  }
  else {
    local_80 = 0;
    _objc_storeStrong(&local_80,&cf_fake_location);
    local_81 = 1;
    local_88 = 0x93f0c24b;
    _memset(local_c8,0,0x40);
    uVar3 = local_80;
    FUN_01139098(local_80,local_81 & 1,local_88,local_c8);
    bVar1 = false;
    if ((uVar3 & 1) != 0) {
      local_70 = local_c8;
      local_74 = local_88;
      local_58 = local_70;
      local_5c = local_88;
      if (((local_70 == (ulong *)0x0) || (local_90 == '\0')) || (local_94 != local_88)) {
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
                local_12c = (uint)local_58[6];
              }
              else {
                local_12c = (int)local_58[6] << (ulong)local_38 |
                            (uint)local_58[6] >> (ulong)(0x20 - local_38 & 0x1f);
              }
              local_3c = local_12c;
              local_48 = FUN_009dea6c;
              local_28 = (ulong)local_12c ^ 0xc3a5f77e905041d1 ^ (ulong)local_5c << 1 ^ local_58[5]
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
    local_c9 = bVar1;
  }
  _objc_storeStrong(&local_e8,0);
  return local_c9 & 1;
}


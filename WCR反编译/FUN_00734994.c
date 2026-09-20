// FUN_00734994 @ 00734994

void FUN_00734994(undefined8 param_1)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  ulong uVar7;
  long lVar8;
  ulong local_1b8;
  ulong local_1b0;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  ulong local_f0;
  ulong local_e8;
  uint local_e0;
  ulong local_d0;
  ulong local_c8;
  undefined1 auStack_c0 [128];
  cfstringStruct *local_40 [3];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_1);
  uVar4 = local_d0;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0),
     uVar4 == 0)) {
    local_c8 = 0;
    local_e0 = 1;
  }
  else {
    FUN_00735314();
    _objc_retainAutoreleasedReturnValue();
    local_e8 = uVar4;
    if (uVar4 == 0) {
      local_c8 = 0;
      local_e0 = 1;
    }
    else {
      pcVar5 = &cf_getStringKeyInNSCacheByValue_;
      _NSSelectorFromString();
      pcVar6 = &cf_getStringKeyByValue_;
      local_40[0] = pcVar5;
      _NSSelectorFromString();
      pcVar5 = &cf_getCurLangDescOfValue_;
      local_40[1] = pcVar6;
      _NSSelectorFromString();
      uVar4 = local_d0;
      local_40[2] = pcVar5;
      FUN_00735608();
      _objc_retainAutoreleasedReturnValue();
      local_f0 = uVar4;
      _memset(auStack_138,0,0x40);
      uVar4 = local_f0;
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_c0,0x10);
      if (local_1b0 != 0) {
        lVar8 = *local_128;
        local_1b8 = 0;
        do {
          do {
            if (*local_128 - lVar8 != 0) {
              _objc_enumerationMutation(*local_128 - lVar8,uVar4);
            }
            local_f8 = *(undefined8 *)(local_130 + local_1b8 * 8);
            for (local_140 = 0; local_140 < 3; local_140 = local_140 + 1) {
              uVar7 = local_e8;
              FUN_007359c4(local_e8,local_40[local_140],local_f8);
              _objc_retainAutoreleasedReturnValue();
              local_148 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_length_0269cca0);
              uVar1 = local_148;
              bVar2 = uVar7 != 0;
              if (bVar2) {
                (*(code *)PTR__objc_retain_02578638)();
                local_c8 = uVar1;
              }
              local_e0 = (uint)bVar2;
              _objc_storeStrong(bVar2,&local_148,0);
              if (local_e0 != 0) goto LAB_00734d64;
            }
            local_1b8 = local_1b8 + 1;
          } while (local_1b8 < local_1b0);
          local_1b0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_c0,
                     0x10);
          local_1b8 = 0;
        } while (local_1b0 != 0);
      }
      local_e0 = 0;
LAB_00734d64:
      (*(code *)PTR__objc_release_02578630)(uVar4);
      if (local_e0 == 0) {
        local_c8 = 0;
        local_e0 = 1;
      }
      _objc_storeStrong(&local_f0,0);
    }
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// FUN_0055f5e8 @ 0055f5e8

void FUN_0055f5e8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_170;
  ulong local_168;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  uint local_d8;
  ulong local_c8;
  undefined8 local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar2 = local_c8;
  pcVar1 = &cf_WCTimeLineCellView;
  _NSClassFromString();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
  uVar3 = local_c8;
  if ((uVar2 & 1) == 0) {
    _memset(auStack_120,0,0x40);
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_168 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_168 != 0) {
      lVar4 = *local_110;
      local_170 = 0;
      do {
        do {
          if (*local_110 - lVar4 != 0) {
            _objc_enumerationMutation(*local_110 - lVar4,uVar2);
          }
          local_e0 = *(undefined8 *)(local_118 + local_170 * 8);
          uVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_WCRefineFindWCTimeLineCellViewIn_026a5098,local_e0);
          _objc_retainAutoreleasedReturnValue();
          local_128 = uVar3;
          if (uVar3 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar3;
          }
          local_d8 = (uint)(uVar3 != 0);
          _objc_storeStrong(&local_128,0);
          if (local_d8 != 0) goto LAB_0055f8a4;
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    local_d8 = 0;
LAB_0055f8a4:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_d8 == 0) {
      local_b0 = 0;
      local_d8 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar3;
    local_d8 = 1;
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


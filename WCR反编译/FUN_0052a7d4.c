// FUN_0052a7d4 @ 0052a7d4

void FUN_0052a7d4(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong local_1a0;
  ulong local_198;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  ulong local_e0;
  int local_d8;
  undefined1 local_d1;
  ulong local_d0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_d1 = 0;
  bVar2 = true;
  uVar1 = local_b8 != 0;
  if ((bool)uVar1) {
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar3 == 0;
    local_d1 = uVar1;
    local_d0 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar1 = local_d1;
  }
  local_d1 = uVar1;
  if (bVar2) {
    local_b0 = 0;
    local_d8 = 1;
  }
  else {
    local_e0 = 0;
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_imageTagView_026a4b00);
    if ((uVar3 & 1) != 0) {
      uVar4 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_imageTagView_026a4b00);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_e0;
      local_e0 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    uVar3 = local_e0;
    pcVar5 = &cf_WCImageFullScreenTagView;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar5);
    uVar4 = local_e0;
    if ((uVar3 & 1) == 0) {
      _memset(auStack_128,0,0x40);
      uVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      local_198 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      if (local_198 != 0) {
        lVar6 = *local_118;
        local_1a0 = 0;
        do {
          do {
            if (*local_118 - lVar6 != 0) {
              _objc_enumerationMutation(*local_118 - lVar6,uVar4);
            }
            uVar7 = *(ulong *)(local_120 + local_1a0 * 8);
            pcVar5 = &cf_WCImageFullScreenTagView;
            local_e8 = uVar7;
            _NSClassFromString();
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,pcVar5);
            uVar3 = local_e8;
            if ((uVar7 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar3;
              local_d8 = 1;
              goto LAB_0052ac24;
            }
            local_1a0 = local_1a0 + 1;
          } while (local_1a0 < local_198);
          local_198 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_1a0 = 0;
        } while (local_198 != 0);
      }
      local_d8 = 0;
LAB_0052ac24:
      (*(code *)PTR__objc_release_02578630)(uVar4);
      if (local_d8 == 0) {
        local_b0 = 0;
        local_d8 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar4;
      local_d8 = 1;
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}


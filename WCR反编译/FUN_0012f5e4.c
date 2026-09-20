// FUN_0012f5e4 @ 0012f5e4

void FUN_0012f5e4(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_198;
  ulong local_190;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined1 local_d9;
  ulong local_d8;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  uVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_getHeadImageView_0269f0a8);
  if ((uVar3 & 1) != 0) {
    uVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_getHeadImageView_0269f0a8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_b8;
    local_b8 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  if (local_b8 == 0) {
    uVar4 = local_b0;
    FUN_00132704();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_b8;
    local_b8 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  local_d9 = 0;
  bVar2 = true;
  uVar1 = local_b8 != 0;
  if ((bool)uVar1) {
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar3 == 0;
    local_d9 = uVar1;
    local_d8 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar1 = local_d9;
  }
  local_d9 = uVar1;
  if (bVar2) {
    _memset(auStack_128,0,0x40);
    uVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_190 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_190 != 0) {
      lVar5 = *local_118;
      local_198 = 0;
      do {
        do {
          if (*local_118 - lVar5 != 0) {
            _objc_enumerationMutation(*local_118 - lVar5,uVar3);
          }
          uVar6 = *(ulong *)(local_120 + local_198 * 8);
          local_e8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar6);
          if ((uVar4 & 1) != 0) {
            _objc_storeStrong(&local_b8,local_e8);
            goto LAB_0012fa20;
          }
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_198 = 0;
      } while (local_190 != 0);
    }
LAB_0012fa20:
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  if (local_b8 != 0) {
    FUN_00132788(local_b0,local_b8);
  }
  uVar3 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


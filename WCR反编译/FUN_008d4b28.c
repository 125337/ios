// FUN_008d4b28 @ 008d4b28

void FUN_008d4b28(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_1f0;
  ulong local_188;
  ulong local_180;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  int local_d0;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar1 = local_b8;
  FUN_008ceaa4(local_b8,PTR_s_toolPanelView_0269f450,"_toolPanelView");
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar5 = local_b8;
  uVar1 = local_c0;
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar5 & 1) != 0) {
      _memset(auStack_118,0,0x40);
      uVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_180 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_180 != 0) {
        lVar4 = *local_108;
        local_188 = 0;
        do {
          do {
            if (*local_108 - lVar4 != 0) {
              _objc_enumerationMutation(*local_108 - lVar4,uVar1);
            }
            uVar5 = *(ulong *)(local_110 + local_188 * 8);
            local_d8 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_class_0269cd60);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar5);
            uVar5 = local_d8;
            if ((uVar2 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar5;
              local_d0 = 1;
              goto LAB_008d4efc;
            }
            local_188 = local_188 + 1;
          } while (local_188 < local_180);
          local_180 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                     0x10);
          local_188 = 0;
        } while (local_180 != 0);
      }
      local_d0 = 0;
LAB_008d4efc:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_d0 != 0) goto LAB_008d4fd0;
    }
    uVar1 = local_c0;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar1 & 1) == 0) {
      local_1f0 = 0;
    }
    else {
      local_1f0 = local_c0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_1f0;
    local_d0 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar1;
    local_d0 = 1;
  }
LAB_008d4fd0:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


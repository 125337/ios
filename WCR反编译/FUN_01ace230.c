// FUN_01ace230 @ 01ace230

void FUN_01ace230(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  ulong local_c0;
  undefined4 local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar2 = local_b0;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_b0;
  if ((uVar2 & 1) == 0) {
    local_b4 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIControl_026ce2d0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIControl_026ce2d0,PTR_s_class_0269cd60)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar2 = local_b0;
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setEnabled__026ca938,1);
      (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_c0,PTR_s_setAlpha__026ca860);
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setUserInteractionEnabled__026caad8,1);
      _objc_storeStrong(&local_c0,0);
    }
    _memset(auStack_108,0,0x40);
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_150 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_150 != 0) {
      lVar4 = *local_f8;
      local_158 = 0;
      do {
        do {
          if (*local_f8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar4,uVar2);
          }
          local_c8 = *(undefined8 *)(local_100 + local_158 * 8);
          FUN_01ace230(local_c8);
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_158 = 0;
      } while (local_150 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_b4 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


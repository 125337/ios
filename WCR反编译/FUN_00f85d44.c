// FUN_00f85d44 @ 00f85d44

void FUN_00f85d44(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_150;
  ulong local_148;
  ulong local_108;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  undefined4 local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  if (local_b0 == 0) {
    local_b4 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _memset(auStack_100,0,0x40);
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_148 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_148 != 0) {
      lVar3 = *local_f0;
      local_150 = 0;
      do {
        do {
          if (*local_f0 - lVar3 != 0) {
            _objc_enumerationMutation(*local_f0 - lVar3,uVar2);
          }
          uVar4 = *(ulong *)(local_f8 + local_150 * 8);
          local_c0 = uVar4;
          FUN_00f89e08(uVar4,&cf_Backdrop);
          if (((uVar4 & 1) == 0) &&
             (uVar4 = local_c0, FUN_00f89e08(local_c0,&cf_VisualEffect), (uVar4 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setHidden__026ca970,1);
            (*(code *)PTR__objc_msgSend_02578628)(0,local_c0,PTR_s_setAlpha__026ca860);
            uVar4 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(0);
            (*(code *)PTR__objc_release_02578630)(uVar4);
            puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setBackgroundColor__026ca888);
            (*(code *)PTR__objc_release_02578630)(puVar1);
          }
          local_150 = local_150 + 1;
        } while (local_150 < local_148);
        local_148 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10
                  );
        local_150 = 0;
      } while (local_148 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_108 = 0;
    uVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_108;
    local_108 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_108 != 0) {
      puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    _objc_storeStrong(&local_108,0);
    local_b4 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


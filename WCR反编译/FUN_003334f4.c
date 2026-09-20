// FUN_003334f4 @ 003334f4

void FUN_003334f4(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _memset(auStack_118,0,0x40);
  uVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_158 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_158 != 0) {
    lVar3 = *local_108;
    local_160 = 0;
    do {
      do {
        if (*local_108 - lVar3 != 0) {
          _objc_enumerationMutation(*local_108 - lVar3,uVar2);
        }
        local_d8 = *(undefined8 *)(local_110 + local_160 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setHidden__026ca970,1);
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_160 = 0;
    } while (local_158 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setHidden__026ca970,0);
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_c0,PTR_s_setAlpha__026ca860);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setUserInteractionEnabled__026caad8,1);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


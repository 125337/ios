// FUN_00333b08 @ 00333b08

void FUN_00333b08(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*DAT_028c9ea8)(param_1,param_2);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setHidden__026ca970,0);
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_b0,PTR_s_setAlpha__026ca860);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setUserInteractionEnabled__026caad8,1);
  _memset(auStack_100,0,0x40);
  uVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tipsViews_026a2138);
  _objc_retainAutoreleasedReturnValue();
  local_138 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_138 != 0) {
    lVar3 = *local_f0;
    local_140 = 0;
    do {
      do {
        if (*local_f0 - lVar3 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar3,uVar1);
        }
        uVar4 = *(ulong *)(local_f8 + local_140 * 8);
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_c0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar4 & 1) != 0) {
          FUN_00334504(local_c0);
        }
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_140 = 0;
    } while (local_138 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


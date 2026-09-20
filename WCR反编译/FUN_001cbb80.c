// FUN_001cbb80 @ 001cbb80

void FUN_001cbb80(ulong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_168;
  ulong local_160;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined1 local_d1;
  ulong local_d0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*DAT_028c8e90)(param_1,param_2);
  uVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  local_d1 = 0;
  bVar2 = false;
  uVar1 = uVar3 != 0;
  if ((bool)uVar1) {
    uVar6 = local_b0;
    _objc_getAssociatedObject(local_b0,&DAT_028c91ac);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar6 == 0;
    local_d1 = uVar1;
    local_d0 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    uVar1 = local_d1;
  }
  local_d1 = uVar1;
  (*(code *)PTR__objc_release_02578630)();
  if (bVar2) {
    FUN_0021d550();
    if ((uVar3 & 1) != 0) {
      _memset(auStack_120,0,0x40);
      uVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_160 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_160 != 0) {
        lVar5 = *local_110;
        local_168 = 0;
        do {
          do {
            if (*local_110 - lVar5 != 0) {
              _objc_enumerationMutation(*local_110 - lVar5,uVar3);
            }
            uVar6 = *(ulong *)(local_118 + local_168 * 8);
            puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
            local_e0 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
            if ((uVar6 & 1) != 0) {
              puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setBackgroundColor__026ca888);
              (*(code *)PTR__objc_release_02578630)(puVar4);
            }
            local_168 = local_168 + 1;
          } while (local_168 < local_160);
          local_160 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_168 = 0;
        } while (local_160 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    uVar3 = local_b0;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar3,&DAT_028c91ac,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


// wcr_findTextViewInView: @ 009d9bdc

/* Function Stack Size: 0x18 bytes */

ID WCRefineAnonymousAtHelper::wcr_findTextViewInView_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ulong local_158;
  ulong local_150;
  ID local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  uint local_cc;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  IVar2 = local_c8;
  if (local_c8 == 0) {
    local_b0 = 0;
    local_cc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UITextView_026ce1b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITextView_026ce1b8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    IVar3 = local_c8;
    if ((IVar2 & 1) == 0) {
      _memset(auStack_118,0,0x40);
      IVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_150 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_150 != 0) {
        lVar4 = *local_108;
        local_158 = 0;
        do {
          do {
            if (*local_108 - lVar4 != 0) {
              _objc_enumerationMutation(*local_108 - lVar4,IVar2);
            }
            local_d8 = *(undefined8 *)(local_110 + local_158 * 8);
            IVar3 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_wcr_findTextViewInView__026ab030,local_d8);
            _objc_retainAutoreleasedReturnValue();
            local_120 = IVar3;
            if (IVar3 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = IVar3;
            }
            local_cc = (uint)(IVar3 != 0);
            _objc_storeStrong(&local_120,0);
            if (local_cc != 0) goto LAB_009d9e50;
            local_158 = local_158 + 1;
          } while (local_158 < local_150);
          local_150 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                     0x10);
          local_158 = 0;
        } while (local_150 != 0);
      }
      local_cc = 0;
LAB_009d9e50:
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if (local_cc == 0) {
        local_b0 = 0;
        local_cc = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = IVar3;
      local_cc = 1;
    }
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


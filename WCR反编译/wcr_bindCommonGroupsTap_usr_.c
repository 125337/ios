// wcr_bindCommonGroupsTap:usr: @ 01d9a130

/* Function Stack Size: 0x20 bytes */

void WCRefineSessionStatsBoardView::wcr_bindCommonGroupsTap_usr_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_158;
  ulong local_150;
  undefined *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined4 local_cc;
  long local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  if ((local_c0 == 0) ||
     (lVar3 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_cc = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setUserInteractionEnabled__026caad8,1);
    _memset(auStack_118,0,0x40);
    uVar4 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_gestureRecognizers_026ca650);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_150 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_150 != 0) {
      lVar3 = *local_108;
      local_158 = 0;
      do {
        do {
          if (*local_108 - lVar3 != 0) {
            _objc_enumerationMutation(*local_108 - lVar3,uVar1);
          }
          uVar4 = *(ulong *)(local_110 + local_158 * 8);
          puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
          local_d8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_removeGestureRecognizer__026ca808,local_d8);
          }
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_158 = 0;
      } while (local_150 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_120 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addGestureRecognizer__026ca4a8,puVar2);
    _objc_setAssociatedObject(local_c0,DAT_028c69a8,local_c8,3);
    _objc_storeStrong(&local_120,0);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


// findVoiceMessageViewInView: @ 01f689b8

/* Function Stack Size: 0x18 bytes */

bool WCRefineVoiceKeepKeyboard::findVoiceMessageViewInView_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  long lVar3;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  ulong local_d8;
  int local_cc;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  if (local_c8 == 0) {
    local_a9 = 0;
    local_cc = 1;
  }
  else {
    uVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_isEqualToString__0269ccc8,&cf_VoiceMessageCellView);
    if ((uVar1 & 1) == 0) {
      _memset(auStack_120,0,0x40);
      uVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_140 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_140 != 0) {
        lVar3 = *local_110;
        local_148 = 0;
        do {
          do {
            if (*local_110 - lVar3 != 0) {
              _objc_enumerationMutation(*local_110 - lVar3,uVar1);
            }
            local_e0 = *(undefined8 *)(local_118 + local_148 * 8);
            IVar2 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_findVoiceMessageViewInView__026c9780,local_e0);
            if ((IVar2 & 1) != 0) {
              local_a9 = 1;
              local_cc = 1;
              goto LAB_01f68bf0;
            }
            local_148 = local_148 + 1;
          } while (local_148 < local_140);
          local_140 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_148 = 0;
        } while (local_140 != 0);
      }
      local_cc = 0;
LAB_01f68bf0:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_cc == 0) {
        local_a9 = 0;
        local_cc = 1;
      }
    }
    else {
      local_a9 = 1;
      local_cc = 1;
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


// wcr_tableViewIsSwiping: @ 01dbdd1c

/* Function Stack Size: 0x18 bytes */

bool WCRefineSessionStatsLayoutViewController::wcr_tableViewIsSwiping_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  double in_d0;
  ulong local_178;
  ulong local_170;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  double local_e8;
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
  IVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_swipeArmed_026c51d8);
  if ((IVar1 & 1) == 0) {
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_panGestureRecognizer_0269dd98);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_d8 = uVar4;
    if ((uVar4 == 1) || (uVar4 == 2)) {
      uVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_panGestureRecognizer_0269dd98);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_e8 = in_d0;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (8.0 < ABS(local_e8)) {
        local_a9 = 1;
        local_cc = 1;
        goto LAB_01dbe0f8;
      }
    }
    _memset(auStack_130,0,0x40);
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_gestureRecognizers_026ca650);
    _objc_retainAutoreleasedReturnValue();
    local_170 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_170 != 0) {
      lVar3 = *local_120;
      local_178 = 0;
      do {
        do {
          if (*local_120 - lVar3 != 0) {
            _objc_enumerationMutation(*local_120 - lVar3,uVar2);
          }
          uVar4 = *(ulong *)(local_128 + local_178 * 8);
          local_f0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          local_138 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_containsString__0269d0b0,&cf_Swipe);
          if ((((uVar4 & 1) == 0) &&
              (uVar4 = local_138,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_containsString__0269d0b0,&cf_swipe), (uVar4 & 1) == 0)) ||
             ((uVar4 = local_f0,
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_state_026cab20), uVar4 != 1 &&
              (uVar4 = local_f0,
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_state_026cab20), uVar4 != 2)))) {
            local_cc = 0;
          }
          else {
            local_a9 = 1;
            local_cc = 1;
          }
          _objc_storeStrong(&local_138,0);
          if (local_cc != 0) goto LAB_01dbe0bc;
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    local_cc = 0;
LAB_01dbe0bc:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_cc == 0) {
      local_a9 = 0;
      local_cc = 1;
    }
  }
  else {
    local_a9 = 1;
    local_cc = 1;
  }
LAB_01dbe0f8:
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}


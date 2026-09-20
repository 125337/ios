// attachDisabledSegmentTapHintToControl: @ 01e1ed10

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatSettingsViewController::attachDisabledSegmentTapHintToControl_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_158;
  ulong local_150;
  undefined *local_128;
  undefined1 local_119;
  ulong local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  int local_c4;
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
  uVar4 = local_c0;
  puVar3 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UISegmentedControl_026ce290,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar4 & 1) == 0) {
    local_c4 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar4 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_gestureRecognizers_026ca650);
    _objc_retainAutoreleasedReturnValue();
    local_150 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_150 != 0) {
      lVar5 = *local_100;
      local_158 = 0;
      do {
        do {
          if (*local_100 - lVar5 != 0) {
            _objc_enumerationMutation(*local_100 - lVar5,uVar4);
          }
          uVar6 = *(ulong *)(local_108 + local_158 * 8);
          puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
          local_d0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_119 = 0;
          bVar2 = false;
          uVar1 = (uVar6 & 1) != 0;
          if ((bool)uVar1) {
            uVar6 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_view_026cabd8);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = uVar6 == local_c0;
            local_119 = uVar1;
            local_118 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar6);
            uVar1 = local_119;
          }
          local_119 = uVar1;
          if (bVar2) {
            local_c4 = 1;
            goto LAB_01e1efb8;
          }
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_158 = 0;
      } while (local_150 != 0);
    }
    local_c4 = 0;
LAB_01e1efb8:
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if (local_c4 == 0) {
      puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_128 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setCancelsTouchesInView__026ca8b8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addGestureRecognizer__026ca4a8,local_128)
      ;
      _objc_storeStrong(&local_128,0);
      local_c4 = 0;
    }
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


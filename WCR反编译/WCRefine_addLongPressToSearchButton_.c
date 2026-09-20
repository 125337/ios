// WCRefine_addLongPressToSearchButton: @ 004cc7fc

/* Function Stack Size: 0x18 bytes */

void WCRefineMainFrameSearchButton::WCRefine_addLongPressToSearchButton_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_150;
  ulong local_148;
  undefined *local_128;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  ulong local_d0;
  uint local_c4;
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
  if (local_c0 == 0) {
    local_c4 = 1;
  }
  else {
    uVar1 = local_c0;
    FUN_004ca080();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar1;
    if (uVar1 == 0) {
      local_c4 = 1;
    }
    else {
      _memset(auStack_118,0,0x40);
      uVar1 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_gestureRecognizers_026ca650);
      _objc_retainAutoreleasedReturnValue();
      local_148 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_148 != 0) {
        lVar4 = *local_108;
        local_150 = 0;
        do {
          do {
            if (*local_108 - lVar4 != 0) {
              _objc_enumerationMutation(*local_108 - lVar4,uVar1);
            }
            uVar5 = *(ulong *)(local_110 + local_150 * 8);
            puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
            local_d8 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220,PTR_s_class_0269cd60)
            ;
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((uVar5 & 1) != 0) {
              uVar5 = local_d8;
              _objc_getAssociatedObject(local_d8,&DAT_028cac4a);
              _objc_retainAutoreleasedReturnValue();
              local_c4 = (uint)(uVar5 != 0);
              local_120 = uVar5;
              _objc_storeStrong(&local_120,0);
              if (local_c4 != 0) goto LAB_004cca4c;
            }
            local_150 = local_150 + 1;
          } while (local_150 < local_148);
          local_148 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                     0x10);
          local_150 = 0;
        } while (local_148 != 0);
      }
      local_c4 = 0;
LAB_004cca4c:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_c4 == 0) {
        puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_128 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3fe0000000000000,puVar2,PTR_s_setMinimumPressDuration__026ca9c8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x402e000000000000,local_128,PTR_s_setAllowableMovement__0269e520);
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setCancelsTouchesInView__026ca8b8,1);
        puVar2 = local_128;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(puVar2,&DAT_028cac4a,puVar3,1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_addGestureRecognizer__026ca4a8,local_128);
        _objc_storeStrong(&local_128,0);
        local_c4 = 0;
      }
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


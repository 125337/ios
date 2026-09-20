// FUN_002efc88 @ 002efc88

void FUN_002efc88(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong local_158;
  ulong local_150;
  undefined *local_128 [3];
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  undefined4 local_c4;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = param_1;
  if (param_1 == 0) {
    local_c4 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar2 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_gestureRecognizers_026ca650);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_150 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_150 != 0) {
      lVar6 = *local_100;
      local_158 = 0;
      do {
        do {
          if (*local_100 - lVar6 != 0) {
            _objc_enumerationMutation(*local_100 - lVar6,uVar3);
          }
          uVar7 = *(ulong *)(local_108 + local_158 * 8);
          local_d0 = uVar7;
          _objc_getAssociatedObject(uVar7,DAT_026dfd90);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar7);
          if ((uVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_removeGestureRecognizer__026ca808,local_d0);
          }
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_158 = 0;
      } while (local_150 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar2 = local_b0;
    FUN_002f59b4();
    if ((uVar2 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_initWithTarget_action__026ca718,local_b0,
                 PTR_s_wcrefine_handleTripleTap__026a1ea0);
      local_128[0] = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setNumberOfTapsRequired__026ca9e0,3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_128[0],PTR_s_setNumberOfTouchesRequired__0269cbc8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_128[0],PTR_s_setCancelsTouchesInView__026ca8b8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_128[0],PTR_s_setDelaysTouchesBegan__026a1af0,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_128[0],PTR_s_setDelaysTouchesEnded__026a1af8,0);
      puVar4 = local_128[0];
      uVar1 = DAT_026dfd90;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(puVar4,uVar1,puVar5,1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar4 = PTR_WCRefineGestureScreenshotGestureDelegate_026ce528;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineGestureScreenshotGestureDelegate_026ce528,PTR_s_sharedDelegate_0269e528
                );
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_128[0],PTR_s_setDelegate__026ca910);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_addGestureRecognizer__026ca4a8,local_128[0]);
      _objc_storeStrong(local_128,0);
      local_c4 = 0;
    }
    else {
      local_c4 = 1;
    }
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


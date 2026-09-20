// FUN_000abd6c @ 000abd6c

void FUN_000abd6c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_198;
  ulong local_190;
  undefined *local_140;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  ulong local_e8;
  long local_e0;
  byte local_d1;
  int local_d0;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBar_0269e518);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = param_1;
  if (param_1 == 0) {
    local_d0 = 1;
  }
  else {
    FUN_000b627c();
    local_d1 = (byte)param_1;
    local_e0 = 0;
    uVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_gestureRecognizers_026ca650);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e8 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _memset(auStack_130,0,0x40);
    uVar1 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_190 != 0) {
      lVar4 = *local_120;
      local_198 = 0;
      do {
        do {
          if (*local_120 - lVar4 != 0) {
            _objc_enumerationMutation(*local_120 - lVar4,uVar1);
          }
          uVar5 = *(ulong *)(local_128 + local_198 * 8);
          puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
          local_f0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar5 & 1) != 0) {
            uVar5 = local_f0;
            _objc_getAssociatedObject(local_f0,&DAT_028c8080);
            _objc_retainAutoreleasedReturnValue();
            local_138 = uVar5;
            if (uVar5 == 0) {
              local_d0 = 0;
            }
            else {
              _objc_storeStrong(&local_e0,local_f0);
              local_d0 = 3;
            }
            _objc_storeStrong(&local_138,0);
            if (local_d0 != 0) goto LAB_000ac0d8;
          }
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_198 = 0;
      } while (local_190 != 0);
    }
    local_d0 = 0;
LAB_000ac0d8:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((local_d1 & 1) == 0) {
      if (local_e0 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_removeGestureRecognizer__026ca808,local_e0);
        _objc_setAssociatedObject(local_e0,&DAT_028c8080,0,1);
      }
      local_d0 = 1;
    }
    else {
      if (local_e0 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3fe0000000000000,local_e0,PTR_s_setMinimumPressDuration__026ca9c8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x402e000000000000,local_e0,PTR_s_setAllowableMovement__0269e520);
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setCancelsTouchesInView__026ca8b8,1);
        puVar2 = PTR_WCRefineBottomBarLongPressGestureDelegate_026ce250;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineBottomBarLongPressGestureDelegate_026ce250,
                   PTR_s_sharedDelegate_0269e528);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setDelegate__026ca910);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      if (local_e0 == 0) {
        puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_initWithTarget_action__026ca718,local_b0,
                   PTR_s_wcrefine_handleTabBarLongPress__0269e468);
        local_140 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3fe0000000000000,puVar2,PTR_s_setMinimumPressDuration__026ca9c8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x402e000000000000,local_140,PTR_s_setAllowableMovement__0269e520);
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setCancelsTouchesInView__026ca8b8,1);
        puVar2 = PTR_WCRefineBottomBarLongPressGestureDelegate_026ce250;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineBottomBarLongPressGestureDelegate_026ce250,
                   PTR_s_sharedDelegate_0269e528);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setDelegate__026ca910);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_140;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(puVar2,&DAT_028c8080,puVar3,1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_addGestureRecognizer__026ca4a8,local_140);
        _objc_storeStrong(&local_140,0);
      }
      local_d0 = 0;
    }
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


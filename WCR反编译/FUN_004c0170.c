// FUN_004c0170 @ 004c0170

void FUN_004c0170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong local_160;
  ulong local_158;
  undefined *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  int local_d0;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  uVar2 = local_c0;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_d0 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setUserInteractionEnabled__026caad8,1);
    _memset(auStack_118,0,0x40);
    uVar2 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_gestureRecognizers_026ca650);
    _objc_retainAutoreleasedReturnValue();
    local_158 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_158 != 0) {
      lVar4 = *local_108;
      local_160 = 0;
      do {
        do {
          if (*local_108 - lVar4 != 0) {
            _objc_enumerationMutation(*local_108 - lVar4,uVar2);
          }
          lVar5 = *(long *)(local_110 + local_160 * 8);
          local_d8 = lVar5;
          _objc_getAssociatedObject(lVar5,&DAT_028cac18);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (lVar5 != 0) {
            local_d0 = 1;
            goto LAB_004c0408;
          }
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    local_d0 = 0;
LAB_004c0408:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_d0 == 0) {
      puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_initWithTarget_action__026ca718,local_b0,
                 PTR_s_wcrefine_handleLongPress__026a3f00);
      local_120 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fe0000000000000,puVar1,PTR_s_setMinimumPressDuration__026ca9c8);
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402e000000000000,local_120,PTR_s_setAllowableMovement__0269e520);
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setCancelsTouchesInView__026ca8b8,1);
      puVar1 = local_120;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(puVar1,&DAT_028cac18,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addGestureRecognizer__026ca4a8,local_120)
      ;
      _objc_storeStrong(&local_120,0);
      local_d0 = 0;
    }
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


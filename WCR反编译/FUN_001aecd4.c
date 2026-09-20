// FUN_001aecd4 @ 001aecd4

void FUN_001aecd4(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_170;
  ulong local_168;
  undefined *local_130;
  byte local_121;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  int local_d0;
  ulong local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  uVar2 = local_b8;
  FUN_001af934();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar2;
  if (uVar2 == 0) {
    local_d0 = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    uVar2 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_gestureRecognizers_026ca650);
    _objc_retainAutoreleasedReturnValue();
    local_168 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_168 != 0) {
      lVar5 = *local_108;
      local_170 = 0;
      do {
        do {
          if (*local_108 - lVar5 != 0) {
            _objc_enumerationMutation(*local_108 - lVar5,uVar2);
          }
          uVar6 = *(ulong *)(local_110 + local_170 * 8);
          local_121 = 0;
          puVar3 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
          local_d8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
          bVar1 = false;
          if ((uVar6 & 1) != 0) {
            uVar6 = local_d8;
            _objc_getAssociatedObject(local_d8,&DAT_028c8a8e);
            _objc_retainAutoreleasedReturnValue();
            local_121 = 1;
            bVar1 = uVar6 != 0;
            local_120 = uVar6;
          }
          if ((local_121 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_120);
          }
          if (bVar1) {
            local_d0 = 1;
            goto LAB_001aefec;
          }
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    local_d0 = 0;
LAB_001aefec:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_d0 == 0) {
      puVar3 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_initWithTarget_action__026ca718,local_b0,
                 PTR_s_WCRefine_onContactsTopBarSearchB_0269fe50);
      local_130 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fe0000000000000,puVar3,PTR_s_setMinimumPressDuration__026ca9c8);
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402e000000000000,local_130,PTR_s_setAllowableMovement__0269e520);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setCancelsTouchesInView__026ca8b8,1);
      puVar3 = local_130;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(puVar3,&DAT_028c8a8e,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addGestureRecognizer__026ca4a8,local_130)
      ;
      _objc_storeStrong(&local_130,0);
      local_d0 = 0;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


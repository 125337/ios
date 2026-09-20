// FUN_005068ec @ 005068ec

void FUN_005068ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_158;
  ulong local_150;
  undefined *local_130;
  ulong local_128 [3];
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  byte local_c5;
  int local_c4;
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
  if (local_c0 == 0) {
    local_c4 = 1;
  }
  else {
    local_c5 = 0;
    _memset(auStack_110,0,0x40);
    uVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_gestureRecognizers_026ca650);
    _objc_retainAutoreleasedReturnValue();
    local_150 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_150 != 0) {
      lVar4 = *local_100;
      local_158 = 0;
      do {
        do {
          if (*local_100 - lVar4 != 0) {
            _objc_enumerationMutation(*local_100 - lVar4,uVar1);
          }
          uVar5 = *(ulong *)(local_108 + local_158 * 8);
          puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
          local_d0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar5 & 1) != 0) {
            uVar5 = local_d0;
            _objc_getAssociatedObject(local_d0,&DAT_028cafd0);
            _objc_retainAutoreleasedReturnValue();
            if (uVar5 == 0) {
              local_c4 = 0;
            }
            else {
              local_c5 = 1;
              local_c4 = 2;
            }
            local_128[0] = uVar5;
            _objc_storeStrong(local_128,0);
            if (local_c4 != 0) goto LAB_00506b90;
          }
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_158 = 0;
      } while (local_150 != 0);
    }
    local_c4 = 0;
LAB_00506b90:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((local_c5 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_initWithTarget_action__026ca718,local_b0,
                 PTR_s_wcrefine_handleTitleLongPress__026a4610);
      local_130 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02324020,puVar2,PTR_s_setMinimumPressDuration__026ca9c8);
      puVar2 = local_130;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(puVar2,&DAT_028cafd0,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addGestureRecognizer__026ca4a8,local_130)
      ;
      _objc_storeStrong(&local_130,0);
      local_c4 = 0;
    }
    else {
      local_c4 = 1;
    }
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


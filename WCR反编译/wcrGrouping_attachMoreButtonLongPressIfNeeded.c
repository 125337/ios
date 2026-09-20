// wcrGrouping_attachMoreButtonLongPressIfNeeded @ 0035b9f8

/* Function Stack Size: 0x10 bytes */

void WCRGroupingSessionListViewController::wcrGrouping_attachMoreButtonLongPressIfNeeded
               (ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong local_160;
  ulong local_158;
  undefined *local_130;
  undefined1 local_121;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  int local_cc;
  ID local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_getAssociatedObject(param_1,&DAT_028ca0e5);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = param_1;
  if (param_1 == 0) {
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_c0;
    local_c0 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  IVar5 = local_c0;
  FUN_0035be9c();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = IVar5;
  if (IVar5 == 0) {
    local_cc = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    IVar5 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_gestureRecognizers_026ca650);
    _objc_retainAutoreleasedReturnValue();
    local_158 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_158 != 0) {
      lVar8 = *local_108;
      local_160 = 0;
      do {
        do {
          if (*local_108 - lVar8 != 0) {
            _objc_enumerationMutation(*local_108 - lVar8,IVar5);
          }
          uVar9 = *(ulong *)(local_110 + local_160 * 8);
          puVar6 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
          local_d8 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar6);
          local_121 = 0;
          bVar2 = false;
          uVar1 = (uVar9 & 1) != 0;
          if ((bool)uVar1) {
            uVar9 = local_d8;
            _objc_getAssociatedObject(local_d8,&DAT_028ca0e6);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = uVar9 != 0;
            local_121 = uVar1;
            local_120 = uVar9;
            (*(code *)PTR__objc_release_02578630)(uVar9);
            uVar1 = local_121;
          }
          local_121 = uVar1;
          if (bVar2) {
            local_cc = 1;
            goto LAB_0035bcf0;
          }
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    local_cc = 0;
LAB_0035bcf0:
    (*(code *)PTR__objc_release_02578630)(IVar5);
    if (local_cc == 0) {
      puVar6 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_130 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323c98,puVar6,PTR_s_setMinimumPressDuration__026ca9c8);
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402e000000000000,local_130,PTR_s_setAllowableMovement__0269e520);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setCancelsTouchesInView__026ca8b8,1);
      puVar6 = local_130;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(puVar6,&DAT_028ca0e6,puVar7,1);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addGestureRecognizer__026ca4a8,local_130)
      ;
      _objc_setAssociatedObject(local_b0,&DAT_028ca0e7,local_c8,0);
      _objc_storeStrong(&local_130,0);
      local_cc = 0;
    }
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


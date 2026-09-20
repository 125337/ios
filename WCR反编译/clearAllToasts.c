// clearAllToasts @ 01715b1c

/* Function Stack Size: 0x10 bytes */

void ToastManager::clearAllToasts(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  undefined *local_f8 [3];
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar3 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar1 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_b0;
    local_e0 = PTR___NSConcreteStackBlock_02578660;
    local_d8 = 0xc2000000;
    local_d4 = 0;
    local_d0 = FUN_01716104;
    local_c8 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = IVar2;
    _dispatch_async(puVar3,&local_e0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_c0,0);
  }
  else {
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_dismissTimer_026b3950);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar2 != 0) {
      IVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_dismissTimer_026b3950);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setDismissTimer__026b3930,0);
    }
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentToastView_026b3958);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar2 != 0) {
      IVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentToastView_026b3958);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setCurrentToastView__026b3928,0);
    }
    puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_f8[0] = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_f8[0] != (undefined *)0x0) {
      _memset(auStack_140,0,0x40);
      puVar3 = local_f8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_f8[0],PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_1b8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1b8 != (undefined *)0x0) {
        lVar5 = *local_130;
        local_1c0 = (undefined *)0x0;
        do {
          do {
            if (*local_130 - lVar5 != 0) {
              _objc_enumerationMutation(*local_130 - lVar5,puVar3);
            }
            uVar6 = *(ulong *)(local_138 + (long)local_1c0 * 8);
            local_100 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_accessibilityIdentifier_0269ec20);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar6);
            if ((uVar4 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_removeFromSuperview_026ca800);
            }
            local_1c0 = local_1c0 + 1;
          } while (local_1c0 < local_1b8);
          local_1b8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                     0x10);
          local_1c0 = (undefined *)0x0;
        } while (local_1b8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setIsAnimating__026b3938,0);
    _objc_storeStrong(local_f8,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


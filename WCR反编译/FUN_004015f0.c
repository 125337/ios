// FUN_004015f0 @ 004015f0

void FUN_004015f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_218;
  undefined *local_1e8;
  undefined *local_148;
  undefined *local_140;
  undefined *local_110;
  undefined4 local_108;
  undefined1 auStack_f8 [8];
  long local_f0;
  long *local_e8;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (undefined *)0x0;
  _memset(auStack_f8,0,0x40);
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_140 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
  if (local_140 != (undefined *)0x0) {
    lVar5 = *local_e8;
    local_148 = (undefined *)0x0;
    do {
      do {
        if (*local_e8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_e8 - lVar5,puVar2);
        }
        uVar6 = *(ulong *)(local_f0 + (long)local_148 * 8);
        local_b8 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKeyWindow_0269cd70);
        if ((uVar6 & 1) != 0) {
          _objc_storeStrong(&local_b0,local_b8);
          local_108 = 2;
          goto LAB_00401848;
        }
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
      local_148 = (undefined *)0x0;
    } while (local_140 != (undefined *)0x0);
  }
  local_108 = 0;
LAB_00401848:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_b0 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_b0;
    local_b0 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_rootViewController_026ca820);
  _objc_retainAutoreleasedReturnValue();
  local_110 = puVar1;
  while( true ) {
    puVar2 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar1 = local_110;
    if (puVar2 == (undefined *)0x0) break;
    puVar2 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_110;
    local_110 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_topViewController_0269e588);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_1e8 = local_110;
    }
    _objc_storeStrong(&local_110,local_1e8);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = local_110;
  puVar2 = PTR__OBJC_CLASS___UITabBarController_026ce108;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_selectedViewController_0269d610);
    _objc_retainAutoreleasedReturnValue();
    local_218 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_218 = local_110;
    }
    _objc_storeStrong(&local_110,local_218);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = local_110;
  (*(code *)PTR__objc_retain_02578638)();
  local_108 = 1;
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar1);
  return;
}


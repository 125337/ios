// FUN_0053af1c @ 0053af1c

void FUN_0053af1c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_178;
  undefined *local_170;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined4 local_114;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_b8 == (undefined *)0x0) {
    _memset(auStack_110,0,0x40);
    puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_170 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_170 != (undefined *)0x0) {
      lVar3 = *local_100;
      local_178 = (undefined *)0x0;
      do {
        do {
          if (*local_100 - lVar3 != 0) {
            _objc_enumerationMutation(*local_100 - lVar3,puVar2);
          }
          uVar4 = *(ulong *)(local_108 + (long)local_178 * 8);
          local_d0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKeyWindow_0269cd70);
          if ((uVar4 & 1) != 0) {
            _objc_storeStrong(&local_b8,local_d0);
            local_114 = 2;
            goto LAB_0053b208;
          }
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                   0x10);
        local_178 = (undefined *)0x0;
      } while (local_170 != (undefined *)0x0);
    }
    local_114 = 0;
LAB_0053b208:
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_rootViewController_026ca820);
  _objc_retainAutoreleasedReturnValue();
  local_120 = puVar1;
  while( true ) {
    puVar1 = local_120;
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar1 == (undefined *)0x0) break;
    puVar2 = local_120;
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_120;
    local_120 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_120;
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    puVar2 = local_120;
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_114 = 1;
      local_b0 = puVar1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar2;
      local_114 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_128 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_selectedViewController_0269d610);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    local_130 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    puVar2 = local_130;
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = puVar1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar2;
    }
    local_114 = 1;
    _objc_storeStrong(&local_130);
    _objc_storeStrong(&local_128,0);
  }
  _objc_storeStrong(&local_120);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


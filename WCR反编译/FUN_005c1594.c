// FUN_005c1594 @ 005c1594

void FUN_005c1594(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_270;
  ulong local_268;
  undefined *local_218;
  undefined *local_210;
  undefined *local_1e0;
  undefined4 local_1d4;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  ulong local_190;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  ulong local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = (undefined *)0x0;
  _memset(auStack_178,0,0x40);
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_210 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10);
  if (local_210 != (undefined *)0x0) {
    lVar4 = *local_168;
    local_218 = (undefined *)0x0;
    do {
      do {
        if (*local_168 - lVar4 != 0) {
          _objc_enumerationMutation(*local_168 - lVar4,puVar2);
        }
        uVar5 = *(ulong *)(local_170 + (long)local_218 * 8);
        puVar1 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
        local_138 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((uVar5 & 1) != 0) {
          _memset(auStack_1d0,0,0x40);
          uVar5 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_windows_0269dde0);
          _objc_retainAutoreleasedReturnValue();
          local_268 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_268 != 0) {
            lVar6 = *local_1c0;
            local_270 = 0;
            do {
              do {
                if (*local_1c0 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_1c0 - lVar6,uVar5);
                }
                uVar7 = *(ulong *)(local_1c8 + local_270 * 8);
                local_190 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKeyWindow_0269cd70);
                if ((uVar7 & 1) != 0) {
                  _objc_storeStrong(&local_130,local_190);
                  local_1d4 = 4;
                  goto LAB_005c1944;
                }
                local_270 = local_270 + 1;
              } while (local_270 < local_268);
              local_268 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,
                         auStack_128,0x10);
              local_270 = 0;
            } while (local_268 != 0);
          }
          local_1d4 = 0;
LAB_005c1944:
          (*(code *)PTR__objc_release_02578630)(uVar5);
          if (local_130 != (undefined *)0x0) {
            local_1d4 = 2;
            goto LAB_005c19f4;
          }
        }
        local_218 = local_218 + 1;
      } while (local_218 < local_210);
      local_210 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10)
      ;
      local_218 = (undefined *)0x0;
    } while (local_210 != (undefined *)0x0);
  }
  local_1d4 = 0;
LAB_005c19f4:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_130 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_130;
    local_130 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar1 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_rootViewController_026ca820);
  _objc_retainAutoreleasedReturnValue();
  local_1e0 = puVar1;
  while( true ) {
    puVar2 = local_1e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar1 = local_1e0;
    if (puVar2 == (undefined *)0x0) break;
    puVar2 = local_1e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_1e0;
    local_1e0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar1 & 1) != 0) {
    puVar2 = local_1e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_topViewController_0269e588);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_1e0;
    local_1e0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = local_1e0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1d4 = 1;
  _objc_storeStrong(&local_1e0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


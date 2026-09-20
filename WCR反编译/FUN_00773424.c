// FUN_00773424 @ 00773424

void FUN_00773424(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong local_288;
  ulong local_280;
  undefined *local_240;
  undefined *local_238;
  undefined *local_208;
  byte local_1f9;
  undefined *local_1f8;
  byte local_1e9;
  undefined *local_1e8;
  undefined4 local_1dc;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  ulong local_198;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  ulong local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = (undefined *)0x0;
  _memset(auStack_180,0,0x40);
  puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_238 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
  if (local_238 != (undefined *)0x0) {
    lVar6 = *local_170;
    local_240 = (undefined *)0x0;
    do {
      do {
        if (*local_170 - lVar6 != 0) {
          _objc_enumerationMutation(*local_170 - lVar6,puVar3);
        }
        uVar7 = *(ulong *)(local_178 + (long)local_240 * 8);
        local_140 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_activationState_026ca490);
        if (uVar7 == 0) {
          _memset(auStack_1d8,0,0x40);
          uVar7 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_windows_0269dde0);
          _objc_retainAutoreleasedReturnValue();
          local_280 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_280 != 0) {
            lVar8 = *local_1c8;
            local_288 = 0;
            do {
              do {
                if (*local_1c8 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_1c8 - lVar8,uVar7);
                }
                uVar9 = *(ulong *)(local_1d0 + local_288 * 8);
                local_198 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKeyWindow_0269cd70);
                if ((uVar9 & 1) != 0) {
                  _objc_storeStrong(&local_138,local_198);
                  local_1dc = 4;
                  goto LAB_007737a0;
                }
                local_288 = local_288 + 1;
              } while (local_288 < local_280);
              local_280 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,
                         auStack_128,0x10);
              local_288 = 0;
            } while (local_280 != 0);
          }
          local_1dc = 0;
LAB_007737a0:
          (*(code *)PTR__objc_release_02578630)(uVar7);
          if (local_138 != (undefined *)0x0) {
            local_1dc = 2;
            goto LAB_00773854;
          }
        }
        local_240 = local_240 + 1;
      } while (local_240 < local_238);
      local_238 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10)
      ;
      local_240 = (undefined *)0x0;
    } while (local_238 != (undefined *)0x0);
  }
  local_1dc = 0;
LAB_00773854:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (local_138 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_138;
    local_138 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  local_1e9 = 0;
  local_1f9 = 0;
  bVar1 = false;
  if (local_138 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    local_1e9 = 1;
    local_1e8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1f9 = 1;
    local_1f8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = puVar2 != (undefined *)0x0;
  }
  if ((local_1f9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1f8);
  }
  if ((local_1e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1e8);
  }
  if (bVar1) {
    puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_138;
    local_138 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  if (local_138 == (undefined *)0x0) {
    local_130 = (undefined *)0x0;
    local_1dc = 1;
  }
  else {
    puVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_rootViewController_026ca820);
    _objc_retainAutoreleasedReturnValue();
    local_208 = puVar2;
    while( true ) {
      while( true ) {
        while( true ) {
          puVar2 = local_208;
          puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          puVar3 = local_208;
          if (((ulong)puVar2 & 1) == 0) break;
          (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_visibleViewController_0269d460);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_208;
          local_208 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        puVar2 = PTR__OBJC_CLASS___UITabBarController_026ce108;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((ulong)puVar3 & 1) == 0) break;
        puVar3 = local_208;
        (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_selectedViewController_0269d610);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_208;
        local_208 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      puVar2 = local_208;
      (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      local_130 = local_208;
      if (puVar2 == (undefined *)0x0) break;
      puVar3 = local_208;
      (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_208;
      local_208 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1dc = 1;
    _objc_storeStrong(&local_208,0);
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


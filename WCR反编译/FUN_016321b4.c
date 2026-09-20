// FUN_016321b4 @ 016321b4

void FUN_016321b4(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  ulong local_268;
  ulong local_260;
  undefined *local_220;
  undefined *local_218;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  int local_1d4;
  undefined *local_1d0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  undefined *local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  ulong local_140;
  char *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "MainTabBarViewController";
  _objc_getClass();
  local_138 = pcVar1;
  _memset(auStack_180,0,0x40);
  puVar7 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar7);
  local_218 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
  if (local_218 != (undefined *)0x0) {
    lVar4 = *local_170;
    local_220 = (undefined *)0x0;
    do {
      do {
        if (*local_170 - lVar4 != 0) {
          _objc_enumerationMutation(*local_170 - lVar4,puVar2);
        }
        uVar5 = *(ulong *)(local_178 + (long)local_220 * 8);
        puVar7 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
        local_140 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar7);
        if ((uVar5 & 1) != 0) {
          _memset(auStack_1c8,0,0x40);
          uVar5 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_windows_0269dde0);
          _objc_retainAutoreleasedReturnValue();
          local_260 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_260 != 0) {
            lVar6 = *local_1b8;
            local_268 = 0;
            do {
              do {
                if (*local_1b8 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_1b8 - lVar6,uVar5);
                }
                puVar7 = *(undefined **)(local_1c0 + local_268 * 8);
                local_188 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_rootViewController_026ca820);
                _objc_retainAutoreleasedReturnValue();
                local_1d0 = puVar7;
                if ((local_138 == (char *)0x0) ||
                   ((*(code *)PTR__objc_msgSend_02578628)
                              (puVar7,PTR_s_isKindOfClass__0269cd68,local_138), puVar3 = local_1d0,
                   ((ulong)puVar7 & 1) == 0)) {
                  puVar7 = local_1d0;
                  puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60)
                  ;
                  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isKindOfClass__0269cd68,puVar3)
                  ;
                  if (((ulong)puVar7 & 1) != 0) {
                    puVar7 = local_1d0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1d0,PTR_s_topViewController_0269e588);
                    _objc_retainAutoreleasedReturnValue();
                    local_1e0 = puVar7;
                    if ((local_138 == (char *)0x0) ||
                       ((*(code *)PTR__objc_msgSend_02578628)
                                  (puVar7,PTR_s_isKindOfClass__0269cd68,local_138),
                       puVar3 = local_1e0, ((ulong)puVar7 & 1) == 0)) {
                      local_1d4 = 0;
                    }
                    else {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_130 = puVar3;
                      local_1d4 = 1;
                    }
                    _objc_storeStrong(&local_1e0,0);
                    if (local_1d4 != 0) goto LAB_016325d8;
                  }
                  puVar7 = local_1d0;
                  puVar3 = PTR__OBJC_CLASS___UITabBarController_026ce108;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isKindOfClass__0269cd68,puVar3)
                  ;
                  puVar3 = local_1d0;
                  if (((ulong)puVar7 & 1) == 0) {
                    local_1d4 = 0;
                  }
                  else {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_130 = puVar3;
                    local_1d4 = 1;
                  }
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_130 = puVar3;
                  local_1d4 = 1;
                }
LAB_016325d8:
                _objc_storeStrong(&local_1d0,0);
                if (local_1d4 != 0) goto LAB_01632658;
                local_268 = local_268 + 1;
              } while (local_268 < local_260);
              local_260 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,
                         auStack_128,0x10);
              local_268 = 0;
            } while (local_260 != 0);
          }
          local_1d4 = 0;
LAB_01632658:
          (*(code *)PTR__objc_release_02578630)(uVar5);
          if (local_1d4 != 0) goto LAB_016326e0;
        }
        local_220 = local_220 + 1;
      } while (local_220 < local_218);
      local_218 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10)
      ;
      local_220 = (undefined *)0x0;
    } while (local_218 != (undefined *)0x0);
  }
  local_1d4 = 0;
LAB_016326e0:
  (*(code *)PTR__objc_release_02578630)();
  if (local_1d4 == 0) {
    FUN_0162be00();
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_1f0 = puVar2;
    while (local_1f0 != (undefined *)0x0) {
      if ((local_138 != (char *)0x0) &&
         (puVar2 = local_1f0,
         (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_isKindOfClass__0269cd68,local_138),
         puVar7 = local_1f0, ((ulong)puVar2 & 1) != 0)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = puVar7;
        goto LAB_01632854;
      }
      puVar7 = local_1f0;
      puVar2 = PTR__OBJC_CLASS___UITabBarController_026ce108;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
      puVar2 = local_1f0;
      if (((ulong)puVar7 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = puVar2;
        goto LAB_01632854;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_parentViewController_0269e500);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = local_1f0;
      local_1f0 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    local_130 = (undefined *)0x0;
LAB_01632854:
    local_1d4 = 1;
    _objc_storeStrong(&local_1f0);
    _objc_storeStrong(&local_1e8,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


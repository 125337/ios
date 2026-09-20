// FUN_0106de94 @ 0106de94

/* WARNING: Removing unreachable block (ram,0x0106e6b8) */
/* WARNING: Removing unreachable block (ram,0x0106e754) */
/* WARNING: Removing unreachable block (ram,0x0106e778) */
/* WARNING: Removing unreachable block (ram,0x0106e79c) */
/* WARNING: Removing unreachable block (ram,0x0106e7ac) */
/* WARNING: Removing unreachable block (ram,0x0106e7f0) */
/* WARNING: Removing unreachable block (ram,0x0106e83c) */
/* WARNING: Removing unreachable block (ram,0x0106e84c) */
/* WARNING: Removing unreachable block (ram,0x0106e864) */
/* WARNING: Removing unreachable block (ram,0x0106e874) */
/* WARNING: Removing unreachable block (ram,0x0106e888) */
/* WARNING: Removing unreachable block (ram,0x0106e8a4) */
/* WARNING: Removing unreachable block (ram,0x0106e8b4) */
/* WARNING: Removing unreachable block (ram,0x0106e8b8) */
/* WARNING: Removing unreachable block (ram,0x0106e8c8) */
/* WARNING: Removing unreachable block (ram,0x0106e8e4) */
/* WARNING: Removing unreachable block (ram,0x0106e8f8) */
/* WARNING: Removing unreachable block (ram,0x0106e880) */
/* WARNING: Removing unreachable block (ram,0x0106e86c) */
/* WARNING: Removing unreachable block (ram,0x0106e8fc) */
/* WARNING: Removing unreachable block (ram,0x0106e918) */
/* WARNING: Removing unreachable block (ram,0x0106e954) */
/* WARNING: Removing unreachable block (ram,0x0106e958) */
/* WARNING: Removing unreachable block (ram,0x0106e964) */
/* WARNING: Removing unreachable block (ram,0x0106e988) */
/* WARNING: Removing unreachable block (ram,0x0106e980) */
/* WARNING: Removing unreachable block (ram,0x0106e98c) */

void FUN_0106de94(void)

{
  double dVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  cfstringStruct *pcVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  long local_3e0;
  long local_3d0;
  ulong local_398;
  ulong local_390;
  undefined *local_348;
  undefined *local_340;
  ulong local_298;
  byte local_289;
  ulong local_288;
  undefined1 auStack_280 [8];
  long local_278;
  long *local_270;
  ulong local_240;
  cfstringStruct *local_238;
  long local_230;
  long local_228;
  long local_220;
  ulong local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  ulong local_1d0;
  undefined *local_1c8;
  int local_1bc;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar1 = DAT_02323d38;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = PTR_WCRefineHelper_026ce000;
  dVar12 = DAT_02323d38;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_1b8 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if ((((local_1b8 == (undefined *)0x0) ||
       (puVar3 = local_1b8, (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_isHidden_026ca768)
       , ((ulong)puVar3 & 1) != 0)) ||
      ((*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_alpha_026ca4d8), dVar12 <= dVar1)) ||
     (puVar3 = local_1b8, FUN_010796d4(), local_1b0 = local_1b8, ((ulong)puVar3 & 1) != 0)) {
    local_1c8 = (undefined *)0x0;
    _memset(auStack_210,0,0x40);
    puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_340 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_a8,0x10);
    if (local_340 != (undefined *)0x0) {
      lVar9 = *local_200;
      local_348 = (undefined *)0x0;
      do {
        do {
          if (*local_200 - lVar9 != 0) {
            _objc_enumerationMutation(*local_200 - lVar9,puVar4);
          }
          uVar11 = *(ulong *)(local_208 + (long)local_348 * 8);
          local_1d0 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_activationState_026ca490);
          uVar6 = local_1d0;
          if (uVar11 == 0) {
            puVar3 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
            uVar11 = local_1d0;
            if ((uVar6 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_218 = uVar11;
              local_220 = 0;
              local_228 = 0;
              local_230 = 0;
              pcVar7 = &cf_MainTabBarViewController;
              _NSClassFromString();
              local_238 = pcVar7;
              _memset(auStack_280,0,0x40);
              uVar6 = local_218;
              (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_windows_0269dde0);
              _objc_retainAutoreleasedReturnValue();
              local_390 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_390 != 0) {
                lVar10 = *local_270;
                local_398 = 0;
                do {
                  do {
                    if (*local_270 - lVar10 != 0) {
                      _objc_enumerationMutation(*local_270 - lVar10,uVar6);
                    }
                    uVar11 = *(ulong *)(local_278 + local_398 * 8);
                    local_240 = uVar11;
                    (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isHidden_026ca768);
                    local_289 = 0;
                    bVar2 = true;
                    if ((uVar11 & 1) == 0) {
                      (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_alpha_026ca4d8);
                      bVar2 = true;
                      if (dVar1 <= dVar12) {
                        uVar11 = local_240;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_240,PTR_s_rootViewController_026ca820);
                        _objc_retainAutoreleasedReturnValue();
                        local_289 = 1;
                        bVar2 = uVar11 == 0;
                        local_288 = uVar11;
                      }
                    }
                    if ((local_289 & 1) != 0) {
                      (*(code *)PTR__objc_release_02578630)(local_288);
                    }
                    if ((!bVar2) && (uVar11 = local_240, FUN_010796d4(), (uVar11 & 1) == 0)) {
                      if (local_230 == 0) {
                        _objc_storeStrong(&local_230,local_240);
                      }
                      uVar11 = local_240;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_240,PTR_s_rootViewController_026ca820);
                      _objc_retainAutoreleasedReturnValue();
                      local_298 = uVar11;
                      if (local_238 != (cfstringStruct *)0x0) {
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar11,PTR_s_isKindOfClass__0269cd68,local_238);
                        uVar8 = local_298;
                        if ((uVar11 & 1) == 0) {
                          puVar3 = PTR__OBJC_CLASS___UITabBarController_026ce108;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR__OBJC_CLASS___UITabBarController_026ce108,
                                     PTR_s_class_0269cd60);
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (uVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
                          if ((uVar8 & 1) == 0) goto LAB_0106e490;
                        }
                        _objc_storeStrong(&local_228,local_240);
                      }
LAB_0106e490:
                      uVar11 = local_240;
                      (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_isKeyWindow_0269cd70);
                      if ((uVar11 & 1) != 0) {
                        _objc_storeStrong(&local_220,local_240);
                      }
                      _objc_storeStrong(&local_298,0);
                    }
                    local_398 = local_398 + 1;
                  } while (local_398 < local_390);
                  local_390 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,
                             auStack_128,0x10);
                  local_398 = 0;
                } while (local_390 != 0);
              }
              (*(code *)PTR__objc_release_02578630)(uVar6);
              local_3d0 = local_228;
              if (local_228 == 0) {
                local_3e0 = local_220;
                if (local_220 == 0) {
                  local_3e0 = local_230;
                }
                local_3d0 = local_3e0;
              }
              _objc_storeStrong(&local_1c8,local_3d0);
              if (local_1c8 == (undefined *)0x0) {
                local_1bc = 0;
              }
              else {
                local_1bc = 2;
              }
              _objc_storeStrong(&local_230);
              _objc_storeStrong(&local_228,0);
              _objc_storeStrong(&local_220,0);
              _objc_storeStrong(&local_218,0);
              if (local_1bc != 0) goto LAB_0106e68c;
            }
          }
          local_348 = local_348 + 1;
        } while (local_348 < local_340);
        local_340 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_a8,
                   0x10);
        local_348 = (undefined *)0x0;
      } while (local_340 != (undefined *)0x0);
    }
    local_1bc = 0;
LAB_0106e68c:
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar3 = local_1c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = puVar3;
    local_1bc = 1;
    _objc_storeStrong(&local_1c8,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_1bc = 1;
  }
  _objc_storeStrong(&local_1b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_1b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


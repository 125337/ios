// findTopVC @ 00fa0ac0

/* WARNING: Removing unreachable block (ram,0x00fa1150) */
/* WARNING: Removing unreachable block (ram,0x00fa11ec) */
/* WARNING: Removing unreachable block (ram,0x00fa1210) */
/* WARNING: Removing unreachable block (ram,0x00fa1234) */
/* WARNING: Removing unreachable block (ram,0x00fa1244) */
/* WARNING: Removing unreachable block (ram,0x00fa1288) */
/* WARNING: Removing unreachable block (ram,0x00fa12d4) */
/* WARNING: Removing unreachable block (ram,0x00fa12e4) */
/* WARNING: Removing unreachable block (ram,0x00fa12fc) */
/* WARNING: Removing unreachable block (ram,0x00fa130c) */
/* WARNING: Removing unreachable block (ram,0x00fa1334) */
/* WARNING: Removing unreachable block (ram,0x00fa1350) */
/* WARNING: Removing unreachable block (ram,0x00fa135c) */
/* WARNING: Removing unreachable block (ram,0x00fa1360) */
/* WARNING: Removing unreachable block (ram,0x00fa1370) */
/* WARNING: Removing unreachable block (ram,0x00fa138c) */
/* WARNING: Removing unreachable block (ram,0x00fa139c) */
/* WARNING: Removing unreachable block (ram,0x00fa132c) */
/* WARNING: Removing unreachable block (ram,0x00fa1304) */
/* WARNING: Removing unreachable block (ram,0x00fa13a0) */
/* WARNING: Removing unreachable block (ram,0x00fa13bc) */
/* WARNING: Removing unreachable block (ram,0x00fa13f8) */
/* WARNING: Removing unreachable block (ram,0x00fa13fc) */
/* WARNING: Removing unreachable block (ram,0x00fa1404) */
/* WARNING: Removing unreachable block (ram,0x00fa1424) */
/* WARNING: Removing unreachable block (ram,0x00fa141c) */
/* WARNING: Removing unreachable block (ram,0x00fa1428) */
/* Function Stack Size: 0x10 bytes */

ID __thiscall WCRefineHelper::findTopVC(WCRefineHelper *this,ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  double in_d0;
  long local_3d8;
  ulong local_3a0;
  ulong local_398;
  undefined *local_350;
  undefined *local_348;
  ulong local_320;
  ulong local_318;
  ulong local_310;
  ulong local_308;
  ulong local_300 [12];
  ulong local_2a0;
  char *local_298;
  int local_290;
  byte local_289;
  ulong local_288;
  undefined1 auStack_280 [8];
  long local_278;
  long *local_270;
  ulong local_240;
  long local_238;
  long local_230;
  ulong local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  ulong local_1e0;
  undefined *local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  SEL local_1c0;
  ID local_1b8;
  ulong local_1b0;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c8 = 0;
  local_1d0 = 0;
  puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
  local_1c0 = param_2;
  local_1b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _memset(auStack_220,0,0x40);
  puVar2 = local_1d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_348 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_a8,0x10);
  if (local_348 != (undefined *)0x0) {
    lVar8 = *local_210;
    local_350 = (undefined *)0x0;
    do {
      do {
        if (*local_210 - lVar8 != 0) {
          _objc_enumerationMutation(*local_210 - lVar8,puVar2);
        }
        uVar9 = *(ulong *)(local_218 + (long)local_350 * 8);
        local_1e0 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_activationState_026ca490);
        uVar4 = local_1e0;
        if (uVar9 == 0) {
          puVar3 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          uVar9 = local_1e0;
          if ((uVar4 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_228 = uVar9;
            local_230 = 0;
            local_238 = 0;
            _memset(auStack_280,0,0x40);
            uVar4 = local_228;
            (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_windows_0269dde0);
            _objc_retainAutoreleasedReturnValue();
            local_398 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_398 != 0) {
              lVar10 = *local_270;
              local_3a0 = 0;
              do {
                do {
                  if (*local_270 - lVar10 != 0) {
                    _objc_enumerationMutation(*local_270 - lVar10,uVar4);
                  }
                  uVar9 = *(ulong *)(local_278 + local_3a0 * 8);
                  local_240 = uVar9;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isHidden_026ca768);
                  local_289 = 0;
                  bVar1 = true;
                  if ((uVar9 & 1) == 0) {
                    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_alpha_026ca4d8);
                    bVar1 = true;
                    if (DAT_02323d38 <= in_d0) {
                      uVar9 = local_240;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_240,PTR_s_rootViewController_026ca820);
                      _objc_retainAutoreleasedReturnValue();
                      local_289 = 1;
                      bVar1 = uVar9 == 0;
                      local_288 = uVar9;
                    }
                  }
                  if ((local_289 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_288);
                  }
                  if ((!bVar1) &&
                     (IVar5 = local_1b8,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_1b8,PTR_s_wcr_isOverlayUtilityWindow__026acdd0,local_240),
                     (IVar5 & 1) == 0)) {
                    uVar9 = local_240;
                    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_isKeyWindow_0269cd70);
                    if ((uVar9 & 1) != 0) {
                      _objc_storeStrong(&local_230,local_240);
                      local_290 = 4;
                      goto LAB_00fa1008;
                    }
                    if (local_238 == 0) {
                      _objc_storeStrong(&local_238,local_240);
                    }
                    pcVar6 = "MainTabBarViewController";
                    _objc_getClass();
                    uVar9 = local_240;
                    local_298 = pcVar6;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_240,PTR_s_rootViewController_026ca820);
                    _objc_retainAutoreleasedReturnValue();
                    local_2a0 = uVar9;
                    if (local_298 != (char *)0x0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar9,PTR_s_isKindOfClass__0269cd68,local_298);
                      uVar7 = local_2a0;
                      if ((uVar9 & 1) == 0) {
                        puVar3 = PTR__OBJC_CLASS___UITabBarController_026ce108;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___UITabBarController_026ce108,
                                   PTR_s_class_0269cd60);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
                        if ((uVar7 & 1) == 0) goto LAB_00fa0f94;
                      }
                      _objc_storeStrong(&local_238,local_240);
                    }
LAB_00fa0f94:
                    _objc_storeStrong(&local_2a0,0);
                  }
                  local_3a0 = local_3a0 + 1;
                } while (local_3a0 < local_398);
                local_398 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,
                           auStack_128,0x10);
                local_3a0 = 0;
              } while (local_398 != 0);
            }
            local_290 = 0;
LAB_00fa1008:
            (*(code *)PTR__objc_release_02578630)(uVar4);
            if (local_230 == 0) {
              local_3d8 = local_238;
            }
            else {
              local_3d8 = local_230;
            }
            _objc_storeStrong(&local_1d0,local_3d8);
            if (local_1d0 == 0) {
              local_290 = 0;
            }
            else {
              local_290 = 2;
            }
            _objc_storeStrong(&local_238);
            _objc_storeStrong(&local_230,0);
            _objc_storeStrong(&local_228,0);
            if (local_290 != 0) goto LAB_00fa111c;
          }
        }
        local_350 = local_350 + 1;
      } while (local_350 < local_348);
      local_348 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_a8,0x10)
      ;
      local_350 = (undefined *)0x0;
    } while (local_348 != (undefined *)0x0);
  }
  local_290 = 0;
LAB_00fa111c:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_1d8,0);
  uVar9 = local_1d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_rootViewController_026ca820);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_1c8;
  local_1c8 = uVar9;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar4 = local_1c8;
  if (local_1c8 == 0) {
    local_1b0 = 0;
    local_290 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_300[0] = uVar4;
    while( true ) {
      uVar9 = local_300[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_300[0],PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      uVar4 = local_300[0];
      if (uVar9 == 0) break;
      uVar9 = local_300[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_300[0],PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_300[0];
      local_300[0] = uVar9;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar9 = local_300[0];
    if ((uVar4 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UITabBarController_026ce108;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar4 = local_300[0];
      if ((uVar9 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_1b0 = uVar4;
        local_290 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_310 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_selectedViewController_0269d610);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        local_318 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
        uVar9 = local_318;
        if ((uVar4 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_1b0 = uVar9;
          local_290 = 1;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_320 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_visibleViewController_0269d460);
          _objc_retainAutoreleasedReturnValue();
          local_290 = 1;
          local_1b0 = uVar9;
          _objc_storeStrong(&local_320,0);
        }
        _objc_storeStrong(&local_318);
        _objc_storeStrong(&local_310,0);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_308 = uVar9;
      (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_visibleViewController_0269d460);
      _objc_retainAutoreleasedReturnValue();
      local_290 = 1;
      local_1b0 = uVar9;
      _objc_storeStrong(&local_308,0);
    }
    _objc_storeStrong(local_300,0);
  }
  _objc_storeStrong(&local_1d0);
  _objc_storeStrong(&local_1c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_1b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


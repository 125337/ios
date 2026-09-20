// keyAppWindow @ 00fdf6d4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID WCRefineIconNameCaptureSupport::keyAppWindow(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ID IVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong local_370;
  ulong local_368;
  ulong local_330;
  ulong local_328;
  undefined *local_2e8;
  undefined *local_2e0;
  ulong local_2a8;
  undefined1 auStack_2a0 [8];
  long local_298;
  long *local_290;
  ulong local_260;
  undefined4 local_254;
  undefined1 auStack_250 [8];
  long local_248;
  long *local_240;
  ulong local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  ulong local_1c8;
  undefined *local_1c0;
  SEL local_1b8;
  ID local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c0 = (undefined *)0x0;
  local_1b8 = param_2;
  local_1b0 = param_1;
  _memset(auStack_208,0,0x40);
  puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_2e0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_a8,0x10);
  if (local_2e0 != (undefined *)0x0) {
    lVar8 = *local_1f8;
    local_2e8 = (undefined *)0x0;
    do {
      do {
        if (*local_1f8 - lVar8 != 0) {
          _objc_enumerationMutation(*local_1f8 - lVar8,puVar4);
        }
        uVar10 = *(ulong *)(local_200 + (long)local_2e8 * 8);
        local_1c8 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_activationState_026ca490);
        uVar5 = local_1c8;
        if (uVar10 == 0) {
          puVar3 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar5 & 1) != 0) {
            _memset(auStack_250,0,0x40);
            uVar5 = local_1c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_windows_0269dde0);
            _objc_retainAutoreleasedReturnValue();
            local_328 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_328 != 0) {
              lVar9 = *local_240;
              local_330 = 0;
              do {
                do {
                  if (*local_240 - lVar9 != 0) {
                    _objc_enumerationMutation(*local_240 - lVar9,uVar5);
                  }
                  uVar10 = *(ulong *)(local_248 + local_330 * 8);
                  local_210 = uVar10;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKeyWindow_0269cd70);
                  if ((((uVar10 & 1) != 0) &&
                      (IVar6 = local_1b0,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1b0,PTR_s_isCaptureWindow__026ad3d8,local_210),
                      (IVar6 & 1) == 0)) &&
                     (uVar10 = local_210,
                     (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_isHidden_026ca768),
                     (uVar10 & 1) == 0)) {
                    _objc_storeStrong(&local_1c0,local_210);
                    local_254 = 4;
                    goto LAB_00fdfa58;
                  }
                  local_330 = local_330 + 1;
                } while (local_330 < local_328);
                local_328 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,
                           auStack_128,0x10);
                local_330 = 0;
              } while (local_328 != 0);
            }
            local_254 = 0;
LAB_00fdfa58:
            (*(code *)PTR__objc_release_02578630)(uVar5);
            if (local_1c0 != (undefined *)0x0) {
              local_254 = 2;
              goto LAB_00fdfd70;
            }
            _memset(auStack_2a0,0,0x40);
            uVar5 = local_1c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_windows_0269dde0);
            _objc_retainAutoreleasedReturnValue();
            local_368 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_368 != 0) {
              lVar9 = *local_290;
              local_370 = 0;
              do {
                do {
                  if (*local_290 - lVar9 != 0) {
                    _objc_enumerationMutation(*local_290 - lVar9,uVar5);
                  }
                  local_260 = *(ulong *)(local_298 + local_370 * 8);
                  IVar6 = local_1b0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1b0,PTR_s_isCaptureWindow__026ad3d8,local_260);
                  bVar1 = false;
                  bVar2 = false;
                  if ((IVar6 & 1) == 0) {
                    uVar10 = local_260;
                    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_isHidden_026ca768);
                    bVar2 = false;
                    if ((uVar10 & 1) == 0) {
                      local_2a8 = local_260;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_260,PTR_s_rootViewController_026ca820);
                      _objc_retainAutoreleasedReturnValue();
                      bVar1 = true;
                      bVar2 = local_2a8 != 0;
                    }
                  }
                  if (bVar1) {
                    (*(code *)PTR__objc_release_02578630)(local_2a8);
                  }
                  if (bVar2) {
                    _objc_storeStrong(&local_1c0,local_260);
                    local_254 = 6;
                    goto LAB_00fdfcc8;
                  }
                  local_370 = local_370 + 1;
                } while (local_370 < local_368);
                local_368 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,
                           auStack_1a8,0x10);
                local_370 = 0;
              } while (local_368 != 0);
            }
            local_254 = 0;
LAB_00fdfcc8:
            (*(code *)PTR__objc_release_02578630)(uVar5);
            if (local_1c0 != (undefined *)0x0) {
              local_254 = 2;
              goto LAB_00fdfd70;
            }
          }
        }
        local_2e8 = local_2e8 + 1;
      } while (local_2e8 < local_2e0);
      local_2e0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_a8,0x10)
      ;
      local_2e8 = (undefined *)0x0;
    } while (local_2e0 != (undefined *)0x0);
  }
  local_254 = 0;
LAB_00fdfd70:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (local_1c0 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_1c0;
    local_1c0 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  puVar3 = local_1c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_254 = 1;
  _objc_storeStrong(&local_1c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


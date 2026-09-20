// captureCurrentVisiblePage @ 00fe4540

/* Function Stack Size: 0x10 bytes */

ID __thiscall
WCRefineIconNameCaptureSupport::captureCurrentVisiblePage
          (WCRefineIconNameCaptureSupport *this,ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  double in_d0;
  undefined *local_388;
  undefined *local_380;
  ulong local_330;
  ulong local_328;
  undefined *local_2e8;
  undefined *local_2e0;
  undefined1 auStack_2b8 [8];
  long local_2b0;
  long *local_2a8;
  undefined8 local_278;
  ID local_270;
  ID local_268;
  ulong local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  ulong local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  ulong local_1d0;
  undefined *local_1c8;
  ID local_1c0;
  SEL local_1b8;
  ID local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  IVar1 = DAT_028e3058;
  local_1b8 = param_2;
  local_1b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3058,PTR_s_count_0269cfe0);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_1c0 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_1c8 = puVar2;
  _memset(auStack_210,0,0x40);
  puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_2e0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_a8,0x10);
  if (local_2e0 != (undefined *)0x0) {
    lVar4 = *local_200;
    local_2e8 = (undefined *)0x0;
    do {
      do {
        if (*local_200 - lVar4 != 0) {
          _objc_enumerationMutation(*local_200 - lVar4,puVar3);
        }
        uVar5 = *(ulong *)(local_208 + (long)local_2e8 * 8);
        puVar2 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
        local_1d0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((uVar5 & 1) != 0) &&
           (uVar5 = local_1d0,
           (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_activationState_026ca490),
           uVar5 == 0)) {
          _memset(auStack_258,0,0x40);
          uVar5 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_windows_0269dde0);
          _objc_retainAutoreleasedReturnValue();
          local_328 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_328 != 0) {
            lVar6 = *local_248;
            local_330 = 0;
            do {
              do {
                if (*local_248 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_248 - lVar6,uVar5);
                }
                uVar7 = *(ulong *)(local_250 + local_330 * 8);
                local_218 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isHidden_026ca768);
                if ((((uVar7 & 1) == 0) &&
                    ((*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_alpha_026ca4d8),
                    DAT_02323d38 <= in_d0)) &&
                   (IVar1 = local_1b0,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_1b0,PTR_s_isCaptureWindow__026ad3d8,local_218),
                   uVar7 = local_218, (IVar1 & 1) == 0)) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_260 = uVar7;
                  if (uVar7 != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_addObject__0269d180,uVar7)
                    ;
                  }
                  _objc_storeStrong(&local_260,0);
                }
                local_330 = local_330 + 1;
              } while (local_330 < local_328);
              local_328 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,
                         auStack_128,0x10);
              local_330 = 0;
            } while (local_328 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar5);
        }
        local_2e8 = local_2e8 + 1;
      } while (local_2e8 < local_2e0);
      local_2e0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_a8,0x10)
      ;
      local_2e8 = (undefined *)0x0;
    } while (local_2e0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = local_1c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined *)0x0) {
    IVar1 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_keyAppWindow_026ad3e0);
    _objc_retainAutoreleasedReturnValue();
    local_268 = IVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_270 = IVar1;
    if (IVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_addObject__0269d180,IVar1);
    }
    _objc_storeStrong(&local_270);
    _objc_storeStrong(&local_268,0);
  }
  _memset(auStack_2b8,0,0x40);
  puVar2 = local_1c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_380 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b8,auStack_1a8,0x10);
  if (local_380 != (undefined *)0x0) {
    lVar4 = *local_2a8;
    local_388 = (undefined *)0x0;
    do {
      do {
        if (*local_2a8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_2a8 - lVar4,puVar2);
        }
        local_278 = *(undefined8 *)(local_2b0 + (long)local_388 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_layoutIfNeeded_026ca790);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1b0,PTR_s_walkView_visibleIn_depth__026ad480,local_278,local_278,0);
        local_388 = local_388 + 1;
      } while (local_388 < local_380);
      local_380 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b8,auStack_1a8,0x10
                );
      local_388 = (undefined *)0x0;
    } while (local_380 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar1 = DAT_028e3058;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3058,PTR_s_count_0269cfe0);
  if ((IVar1 == local_1c0) && (local_1c0 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  IVar1 = DAT_028e3058;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3058,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_1c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


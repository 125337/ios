// FUN_0035cd34 @ 0035cd34

void FUN_0035cd34(undefined8 param_1)

{
  undefined1 uVar1;
  double dVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  double dVar10;
  undefined *local_3a8;
  undefined *local_3a0;
  ulong local_350;
  ulong local_348;
  undefined *local_2f8;
  undefined *local_2f0;
  undefined1 auStack_2b0 [8];
  long local_2a8;
  long *local_2a0;
  ulong local_270;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  ulong local_228;
  ulong local_220;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  ulong local_1d8;
  undefined *local_1d0;
  int local_1c8;
  undefined1 local_1c1;
  ulong local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar2 = DAT_02323cd0;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = 0;
  dVar10 = DAT_02323cd0;
  _objc_storeStrong(&local_1b8,param_1);
  uVar9 = local_1b8;
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_1c1 = 0;
  bVar3 = false;
  uVar1 = (uVar9 & 1) != 0;
  if ((bool)uVar1) {
    uVar9 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = uVar9 != 0;
    local_1c1 = uVar1;
    local_1c0 = uVar9;
    (*(code *)PTR__objc_release_02578630)(uVar9);
    uVar1 = local_1c1;
  }
  local_1c1 = uVar1;
  if (bVar3) {
    uVar9 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = 1;
    local_1b0 = uVar9;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    local_1d0 = puVar4;
    _memset(auStack_218,0,0x40);
    puVar4 = local_1d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_connectedScenes_026ca590);
    _objc_retainAutoreleasedReturnValue();
    local_2f0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2f0 != (undefined *)0x0) {
      lVar6 = *local_208;
      local_2f8 = (undefined *)0x0;
      do {
        do {
          if (*local_208 - lVar6 != 0) {
            _objc_enumerationMutation(*local_208 - lVar6,puVar4);
          }
          uVar7 = *(ulong *)(local_210 + (long)local_2f8 * 8);
          local_1d8 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_activationState_026ca490);
          uVar9 = local_1d8;
          if (uVar7 == 0) {
            puVar5 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar5);
            uVar7 = local_1d8;
            if ((uVar9 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_220 = uVar7;
              _memset(auStack_268,0,0x40);
              uVar9 = local_220;
              (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_windows_0269dde0);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar9;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)(uVar9);
              local_348 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,
                         auStack_128,0x10);
              if (local_348 != 0) {
                lVar8 = *local_258;
                local_350 = 0;
                do {
                  do {
                    if (*local_258 - lVar8 != 0) {
                      _objc_enumerationMutation(*local_258 - lVar8,uVar7);
                    }
                    uVar9 = *(ulong *)(local_260 + local_350 * 8);
                    puVar5 = PTR__OBJC_CLASS___UIWindow_026cdf68;
                    local_228 = uVar9;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___UIWindow_026cdf68,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar9,PTR_s_isKindOfClass__0269cd68,puVar5);
                    if ((((uVar9 & 1) != 0) &&
                        (uVar9 = local_228,
                        (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_isHidden_026ca768),
                        (uVar9 & 1) == 0)) &&
                       ((*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_alpha_026ca4d8),
                       uVar9 = local_228, dVar2 < dVar10)) {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_1b0 = uVar9;
                      local_1c8 = 1;
                      goto LAB_0035d220;
                    }
                    local_350 = local_350 + 1;
                  } while (local_350 < local_348);
                  local_348 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,
                             auStack_128,0x10);
                  local_350 = 0;
                } while (local_348 != 0);
              }
              local_1c8 = 0;
LAB_0035d220:
              (*(code *)PTR__objc_release_02578630)(uVar7);
              if (local_1c8 == 0) {
                local_1c8 = 0;
              }
              _objc_storeStrong(&local_220,0);
              if (local_1c8 != 0) goto LAB_0035d2c8;
            }
          }
          local_2f8 = local_2f8 + 1;
        } while (local_2f8 < local_2f0);
        local_2f0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_a8,
                   0x10);
        local_2f8 = (undefined *)0x0;
      } while (local_2f0 != (undefined *)0x0);
    }
    local_1c8 = 0;
LAB_0035d2c8:
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (local_1c8 == 0) {
      _memset(auStack_2b0,0,0x40);
      puVar4 = local_1d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_windows_0269dde0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_3a0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_1a8,0x10
                );
      if (local_3a0 != (undefined *)0x0) {
        lVar6 = *local_2a0;
        local_3a8 = (undefined *)0x0;
        do {
          do {
            if (*local_2a0 - lVar6 != 0) {
              _objc_enumerationMutation(*local_2a0 - lVar6,puVar5);
            }
            uVar9 = *(ulong *)(local_2a8 + (long)local_3a8 * 8);
            puVar4 = PTR__OBJC_CLASS___UIWindow_026cdf68;
            local_270 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIWindow_026cdf68,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar4);
            if ((((uVar9 & 1) != 0) &&
                (uVar9 = local_270,
                (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_isHidden_026ca768),
                (uVar9 & 1) == 0)) &&
               ((*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_alpha_026ca4d8),
               uVar9 = local_270, dVar2 < dVar10)) {
              (*(code *)PTR__objc_retain_02578638)();
              local_1b0 = uVar9;
              local_1c8 = 1;
              goto LAB_0035d50c;
            }
            local_3a8 = local_3a8 + 1;
          } while (local_3a8 < local_3a0);
          local_3a0 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_1a8,
                     0x10);
          local_3a8 = (undefined *)0x0;
        } while (local_3a0 != (undefined *)0x0);
      }
      local_1c8 = 0;
LAB_0035d50c:
      (*(code *)PTR__objc_release_02578630)(puVar5);
      if (local_1c8 == 0) {
        local_1b0 = 0;
        local_1c8 = 1;
      }
    }
    _objc_storeStrong(&local_1d0,0);
  }
  _objc_storeStrong(&local_1b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_1b0);
  return;
}


// FUN_0162be00 @ 0162be00

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0162be00(double param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_5a8;
  ulong local_5a0;
  undefined *local_560;
  undefined *local_558;
  undefined *local_510;
  undefined *local_508;
  ulong local_4c0;
  ulong local_4b8;
  undefined *local_470;
  undefined *local_468;
  ulong local_430;
  undefined1 auStack_428 [8];
  long local_420;
  long *local_418;
  ulong local_3e8;
  undefined1 auStack_3e0 [8];
  long local_3d8;
  long *local_3d0;
  ulong local_3a0;
  undefined1 auStack_398 [8];
  long local_390;
  long *local_388;
  ulong local_358;
  undefined1 auStack_350 [8];
  long local_348;
  long *local_340;
  ulong local_310;
  int local_304;
  ulong local_300;
  undefined1 auStack_2f8 [8];
  long local_2f0;
  long *local_2e8;
  ulong local_2b8;
  undefined *local_2b0;
  undefined1 auStack_2a8 [128];
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_2b0 = (undefined *)0x0;
  _memset(auStack_2f8,0,0x40);
  puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_468 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f8,auStack_a8,0x10);
  if (local_468 != (undefined *)0x0) {
    lVar6 = *local_2e8;
    local_470 = (undefined *)0x0;
    do {
      do {
        if (*local_2e8 - lVar6 != 0) {
          _objc_enumerationMutation(*local_2e8 - lVar6,puVar4);
        }
        uVar8 = *(ulong *)(local_2f0 + (long)local_470 * 8);
        puVar3 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
        local_2b8 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
        uVar9 = local_2b8;
        if ((uVar8 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_300 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_activationState_026ca490);
          if (uVar9 == 0) {
            _memset(auStack_350,0,0x40);
            uVar9 = local_300;
            (*(code *)PTR__objc_msgSend_02578628)(local_300,PTR_s_windows_0269dde0);
            _objc_retainAutoreleasedReturnValue();
            local_4b8 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_4b8 != 0) {
              lVar7 = *local_340;
              local_4c0 = 0;
              do {
                do {
                  if (*local_340 - lVar7 != 0) {
                    _objc_enumerationMutation(*local_340 - lVar7,uVar9);
                  }
                  uVar8 = *(ulong *)(local_348 + local_4c0 * 8);
                  local_310 = uVar8;
                  FUN_016328b0();
                  if ((((uVar8 & 1) == 0) &&
                      (uVar8 = local_310,
                      (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_isHidden_026ca768),
                      (uVar8 & 1) == 0)) &&
                     ((*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_alpha_026ca4d8),
                     DAT_02323d38 <= param_1)) {
                    uVar8 = local_310;
                    (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_isKeyWindow_0269cd70);
                    if ((uVar8 & 1) != 0) {
                      _objc_storeStrong(&local_2b0,local_310);
                      local_304 = 4;
                      goto LAB_0162c1f0;
                    }
                    if (local_2b0 == (undefined *)0x0) {
                      _objc_storeStrong(&local_2b0,local_310);
                    }
                  }
                  local_4c0 = local_4c0 + 1;
                } while (local_4c0 < local_4b8);
                local_4b8 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_350,
                           auStack_128,0x10);
                local_4c0 = 0;
              } while (local_4b8 != 0);
            }
            local_304 = 0;
LAB_0162c1f0:
            (*(code *)PTR__objc_release_02578630)(uVar9);
            if (local_2b0 == (undefined *)0x0) {
              local_304 = 0;
            }
            else {
              local_304 = 2;
            }
          }
          else {
            local_304 = 3;
          }
          _objc_storeStrong(&local_300,0);
          if ((local_304 != 0) && (local_304 != 3)) goto LAB_0162c2e0;
        }
        local_470 = local_470 + 1;
      } while (local_470 < local_468);
      local_468 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f8,auStack_a8,0x10)
      ;
      local_470 = (undefined *)0x0;
    } while (local_468 != (undefined *)0x0);
  }
  local_304 = 0;
LAB_0162c2e0:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (local_2b0 == (undefined *)0x0) {
    _memset(auStack_398,0,0x40);
    puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_508 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_398,auStack_1a8,0x10);
    if (local_508 != (undefined *)0x0) {
      lVar6 = *local_388;
      local_510 = (undefined *)0x0;
      do {
        do {
          if (*local_388 - lVar6 != 0) {
            _objc_enumerationMutation(*local_388 - lVar6,puVar4);
          }
          uVar9 = *(ulong *)(local_390 + (long)local_510 * 8);
          local_358 = uVar9;
          FUN_016328b0();
          if (((uVar9 & 1) == 0) &&
             (uVar9 = local_358,
             (*(code *)PTR__objc_msgSend_02578628)(local_358,PTR_s_isHidden_026ca768),
             (uVar9 & 1) == 0)) {
            _objc_storeStrong(&local_2b0,local_358);
            local_304 = 6;
            goto LAB_0162c4e8;
          }
          local_510 = local_510 + 1;
        } while (local_510 < local_508);
        local_508 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_398,auStack_1a8,
                   0x10);
        local_510 = (undefined *)0x0;
      } while (local_508 != (undefined *)0x0);
    }
    local_304 = 0;
LAB_0162c4e8:
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  if (local_2b0 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_2b0;
    local_2b0 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  puVar3 = local_2b0;
  FUN_016328b0();
  if (((ulong)puVar3 & 1) != 0) {
    _memset(auStack_3e0,0,0x40);
    puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_558 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3e0,auStack_228,0x10);
    if (local_558 != (undefined *)0x0) {
      lVar6 = *local_3d0;
      local_560 = (undefined *)0x0;
      do {
        do {
          if (*local_3d0 - lVar6 != 0) {
            _objc_enumerationMutation(*local_3d0 - lVar6,puVar4);
          }
          uVar9 = *(ulong *)(local_3d8 + (long)local_560 * 8);
          puVar3 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
          local_3a0 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar9 & 1) != 0) {
            _memset(auStack_428,0,0x40);
            uVar9 = local_3a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_3a0,PTR_s_windows_0269dde0);
            _objc_retainAutoreleasedReturnValue();
            local_5a0 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_5a0 != 0) {
              lVar7 = *local_418;
              local_5a8 = 0;
              do {
                do {
                  if (*local_418 - lVar7 != 0) {
                    _objc_enumerationMutation(*local_418 - lVar7,uVar9);
                  }
                  uVar8 = *(ulong *)(local_420 + local_5a8 * 8);
                  local_3e8 = uVar8;
                  FUN_016328b0();
                  bVar1 = false;
                  bVar2 = false;
                  if ((uVar8 & 1) == 0) {
                    uVar8 = local_3e8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_3e8,PTR_s_isHidden_026ca768);
                    bVar2 = false;
                    if ((uVar8 & 1) == 0) {
                      local_430 = local_3e8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_3e8,PTR_s_rootViewController_026ca820);
                      _objc_retainAutoreleasedReturnValue();
                      bVar1 = true;
                      bVar2 = local_430 != 0;
                    }
                  }
                  if (bVar1) {
                    (*(code *)PTR__objc_release_02578630)(local_430);
                  }
                  if (bVar2) {
                    _objc_storeStrong(&local_2b0,local_3e8);
                    local_304 = 10;
                    goto LAB_0162c920;
                  }
                  local_5a8 = local_5a8 + 1;
                } while (local_5a8 < local_5a0);
                local_5a0 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_428,
                           auStack_2a8,0x10);
                local_5a8 = 0;
              } while (local_5a0 != 0);
            }
            local_304 = 0;
LAB_0162c920:
            (*(code *)PTR__objc_release_02578630)(uVar9);
          }
          local_560 = local_560 + 1;
        } while (local_560 < local_558);
        local_558 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3e0,auStack_228,
                   0x10);
        local_560 = (undefined *)0x0;
      } while (local_558 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  puVar3 = local_2b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_rootViewController_026ca820);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_016329d0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_304 = 1;
  _objc_storeStrong(&local_2b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar4);
  return;
}


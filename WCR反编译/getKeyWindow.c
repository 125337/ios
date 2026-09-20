// getKeyWindow @ 01d840c4

/* Function Stack Size: 0x10 bytes */

ID __thiscall
WCRefineSearchSettingsViewController::getKeyWindow
          (WCRefineSearchSettingsViewController *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  double in_d0;
  undefined *local_490;
  undefined *local_488;
  undefined *local_450;
  undefined *local_448;
  ulong local_400;
  ulong local_3f8;
  undefined *local_3b0;
  undefined *local_3a8;
  undefined1 auStack_380 [8];
  long local_378;
  long *local_370;
  ulong local_340;
  undefined1 auStack_338 [8];
  long local_330;
  long *local_328;
  ulong local_2f8;
  undefined *local_2f0;
  uint local_2e4;
  undefined1 auStack_2e0 [8];
  long local_2d8;
  long *local_2d0;
  ulong local_2a0;
  ulong local_298;
  undefined1 auStack_290 [8];
  long local_288;
  long *local_280;
  ulong local_250;
  undefined *local_248;
  undefined *local_240;
  SEL local_238;
  ID local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_240 = (undefined *)0x0;
  puVar7 = PTR__OBJC_CLASS___UIApplication_026ce010;
  local_238 = param_2;
  local_230 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_248 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar7);
  _memset(auStack_290,0,0x40);
  puVar7 = local_248;
  (*(code *)PTR__objc_retain_02578638)();
  local_3a8 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_290,auStack_a8,0x10);
  if (local_3a8 != (undefined *)0x0) {
    lVar3 = *local_280;
    local_3b0 = (undefined *)0x0;
    do {
      do {
        if (*local_280 - lVar3 != 0) {
          _objc_enumerationMutation(*local_280 - lVar3,puVar7);
        }
        uVar4 = *(ulong *)(local_288 + (long)local_3b0 * 8);
        puVar1 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
        local_250 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
        uVar6 = local_250;
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_298 = uVar6;
          _memset(auStack_2e0,0,0x40);
          uVar6 = local_298;
          (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_windows_0269dde0);
          _objc_retainAutoreleasedReturnValue();
          local_3f8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_3f8 != 0) {
            lVar5 = *local_2d0;
            local_400 = 0;
            do {
              do {
                if (*local_2d0 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_2d0 - lVar5,uVar6);
                }
                uVar4 = *(ulong *)(local_2d8 + local_400 * 8);
                local_2a0 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKeyWindow_0269cd70);
                if ((uVar4 & 1) != 0) {
                  _objc_storeStrong(&local_240,local_2a0);
                  local_2e4 = 4;
                  goto LAB_01d843e0;
                }
                local_400 = local_400 + 1;
              } while (local_400 < local_3f8);
              local_3f8 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,
                         auStack_128,0x10);
              local_400 = 0;
            } while (local_3f8 != 0);
          }
          local_2e4 = 0;
LAB_01d843e0:
          (*(code *)PTR__objc_release_02578630)(uVar6);
          if (local_240 == (undefined *)0x0) {
            local_2e4 = 0;
          }
          else {
            local_2e4 = 2;
          }
          _objc_storeStrong(&local_298,0);
          if (local_2e4 != 0) goto LAB_01d844a8;
        }
        local_3b0 = local_3b0 + 1;
      } while (local_3b0 < local_3a8);
      local_3a8 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_290,auStack_a8,0x10)
      ;
      local_3b0 = (undefined *)0x0;
    } while (local_3a8 != (undefined *)0x0);
  }
  local_2e4 = 0;
LAB_01d844a8:
  (*(code *)PTR__objc_release_02578630)(puVar7);
  _objc_storeStrong(&local_248,0);
  if (local_240 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_240;
    local_240 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((local_240 == (undefined *)0x0) ||
     (puVar7 = local_240,
     (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_isKeyWindow_0269cd70),
     ((ulong)puVar7 & 1) == 0)) {
    puVar7 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_2f0 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    _memset(auStack_338,0,0x40);
    puVar7 = local_2f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_448 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_338,auStack_1a8,0x10);
    if (local_448 != (undefined *)0x0) {
      lVar3 = *local_328;
      local_450 = (undefined *)0x0;
      do {
        do {
          if (*local_328 - lVar3 != 0) {
            _objc_enumerationMutation(*local_328 - lVar3,puVar7);
          }
          uVar6 = *(ulong *)(local_330 + (long)local_450 * 8);
          local_2f8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKeyWindow_0269cd70);
          if ((uVar6 & 1) != 0) {
            _objc_storeStrong(&local_240,local_2f8);
            local_2e4 = 6;
            goto LAB_01d8473c;
          }
          local_450 = local_450 + 1;
        } while (local_450 < local_448);
        local_448 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_338,auStack_1a8,
                   0x10);
        local_450 = (undefined *)0x0;
      } while (local_448 != (undefined *)0x0);
    }
    local_2e4 = 0;
LAB_01d8473c:
    (*(code *)PTR__objc_release_02578630)(puVar7);
    puVar7 = local_240;
    if (local_240 == (undefined *)0x0) {
      puVar1 = local_2f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_count_0269cfe0);
      puVar7 = (undefined *)0x0;
      if (puVar1 != (undefined *)0x0) {
        _memset(auStack_380,0,0x40);
        puVar7 = local_2f0;
        (*(code *)PTR__objc_retain_02578638)();
        local_488 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_380,auStack_228,
                   0x10);
        if (local_488 != (undefined *)0x0) {
          lVar3 = *local_370;
          local_490 = (undefined *)0x0;
          do {
            do {
              if (*local_370 - lVar3 != 0) {
                _objc_enumerationMutation(*local_370 - lVar3,puVar7);
              }
              uVar6 = *(ulong *)(local_378 + (long)local_490 * 8);
              local_340 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isHidden_026ca768);
              if (((uVar6 & 1) == 0) &&
                 ((*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_alpha_026ca4d8), 0.0 < in_d0
                 )) {
                _objc_storeStrong(&local_240,local_340);
                local_2e4 = 8;
                goto LAB_01d84910;
              }
              local_490 = local_490 + 1;
            } while (local_490 < local_488);
            local_488 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_380,
                       auStack_228,0x10);
            local_490 = (undefined *)0x0;
          } while (local_488 != (undefined *)0x0);
        }
        local_2e4 = 0;
LAB_01d84910:
        (*(code *)PTR__objc_release_02578630)(puVar7);
        puVar7 = (undefined *)(ulong)local_2e4;
      }
    }
    _objc_storeStrong(puVar7,&local_2f0,0);
  }
  puVar7 = local_240;
  (*(code *)PTR__objc_retain_02578638)();
  local_2e4 = 1;
  _objc_storeStrong(&local_240,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// FUN_00fc6168 @ 00fc6168

void FUN_00fc6168(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_4b8;
  undefined *local_490;
  undefined *local_488;
  undefined *local_450;
  undefined *local_448;
  ulong local_408;
  ulong local_400;
  undefined *local_3c0;
  undefined *local_3b8;
  bool local_381;
  ulong local_380;
  ulong local_378;
  uint local_36c;
  ulong local_368;
  undefined1 auStack_360 [8];
  long local_358;
  long *local_350;
  ulong local_320;
  undefined1 auStack_318 [8];
  long local_310;
  long *local_308;
  ulong local_2d8;
  undefined1 auStack_2d0 [8];
  long local_2c8;
  long *local_2c0;
  ulong local_290;
  undefined1 auStack_288 [8];
  long local_280;
  long *local_278;
  ulong local_248;
  undefined *local_240;
  char *local_238;
  ulong local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "NewMainFrameViewController";
  _objc_getClass();
  local_238 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_230 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_240 = puVar2;
    _memset(auStack_288,0,0x40);
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_3b8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_a8,0x10);
    if (local_3b8 != (undefined *)0x0) {
      lVar4 = *local_278;
      local_3c0 = (undefined *)0x0;
      do {
        do {
          if (*local_278 - lVar4 != 0) {
            _objc_enumerationMutation(*local_278 - lVar4,puVar3);
          }
          uVar7 = *(ulong *)(local_280 + (long)local_3c0 * 8);
          puVar2 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
          local_248 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar7 & 1) != 0) {
            _memset(auStack_2d0,0,0x40);
            uVar7 = local_248;
            (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_windows_0269dde0);
            _objc_retainAutoreleasedReturnValue();
            local_400 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_400 != 0) {
              lVar5 = *local_2c0;
              local_408 = 0;
              do {
                do {
                  if (*local_2c0 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_2c0 - lVar5,uVar7);
                  }
                  uVar6 = *(ulong *)(local_2c8 + local_408 * 8);
                  local_290 = uVar6;
                  if ((uVar6 != 0) &&
                     ((*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isHidden_026ca768),
                     (uVar6 & 1) == 0)) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_240,PTR_s_addObject__0269d180,local_290);
                  }
                  local_408 = local_408 + 1;
                } while (local_408 < local_400);
                local_400 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,
                           auStack_128,0x10);
                local_408 = 0;
              } while (local_400 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar7);
          }
          local_3c0 = local_3c0 + 1;
        } while (local_3c0 < local_3b8);
        local_3b8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_a8,
                   0x10);
        local_3c0 = (undefined *)0x0;
      } while (local_3b8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = local_240;
    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      _memset(auStack_318,0,0x40);
      puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_448 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,auStack_1a8,0x10
                );
      if (local_448 != (undefined *)0x0) {
        lVar4 = *local_308;
        local_450 = (undefined *)0x0;
        do {
          do {
            if (*local_308 - lVar4 != 0) {
              _objc_enumerationMutation(*local_308 - lVar4,puVar3);
            }
            uVar7 = *(ulong *)(local_310 + (long)local_450 * 8);
            local_2d8 = uVar7;
            if ((uVar7 != 0) &&
               ((*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isHidden_026ca768),
               (uVar7 & 1) == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_addObject__0269d180,local_2d8);
            }
            local_450 = local_450 + 1;
          } while (local_450 < local_448);
          local_448 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,auStack_1a8,
                     0x10);
          local_450 = (undefined *)0x0;
        } while (local_448 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    _memset(auStack_360,0,0x40);
    puVar2 = local_240;
    (*(code *)PTR__objc_retain_02578638)();
    local_488 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_360,auStack_228,0x10);
    if (local_488 != (undefined *)0x0) {
      lVar4 = *local_350;
      local_490 = (undefined *)0x0;
      do {
        do {
          if (*local_350 - lVar4 != 0) {
            _objc_enumerationMutation(*local_350 - lVar4,puVar2);
          }
          uVar6 = *(ulong *)(local_358 + (long)local_490 * 8);
          local_320 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_rootViewController_026ca820);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          FUN_00fc6ae0();
          _objc_retainAutoreleasedReturnValue();
          local_368 = uVar7;
          (*(code *)PTR__objc_release_02578630)(uVar6);
          if (local_368 == 0) {
            local_36c = 9;
          }
          else {
            uVar7 = local_368;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_368,PTR_s_respondsToSelector__026ca818,PTR_s_viewIfLoaded_026a1fc8);
            local_381 = (uVar7 & 1) == 0;
            if (local_381) {
              local_4b8 = 0;
            }
            else {
              local_4b8 = local_368;
              (*(code *)PTR__objc_msgSend_02578628)(local_368,PTR_s_viewIfLoaded_026a1fc8);
              _objc_retainAutoreleasedReturnValue();
              local_380 = local_4b8;
            }
            local_381 = !local_381;
            (*(code *)PTR__objc_retain_02578638)();
            local_378 = local_4b8;
            if (local_381) {
              (*(code *)PTR__objc_release_02578630)(local_380);
            }
            uVar6 = local_378;
            (*(code *)PTR__objc_msgSend_02578628)(local_378,PTR_s_window_026cabf0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            uVar7 = local_368;
            if (uVar6 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_230 = uVar7;
            }
            local_36c = (uint)(uVar6 != 0);
            _objc_storeStrong(&local_378,0);
          }
          _objc_storeStrong(&local_368,0);
          if ((local_36c != 0) && (local_36c != 9)) goto LAB_00fc6a5c;
          local_490 = local_490 + 1;
        } while (local_490 < local_488);
        local_488 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_360,auStack_228,
                   0x10);
        local_490 = (undefined *)0x0;
      } while (local_488 != (undefined *)0x0);
    }
    local_36c = 0;
LAB_00fc6a5c:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_36c == 0) {
      local_230 = 0;
      local_36c = 1;
    }
    _objc_storeStrong(&local_240,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_230);
  return;
}


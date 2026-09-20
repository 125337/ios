// crashFileNamesForRange: @ 00929ccc

/* Function Stack Size: 0x18 bytes */

ID WCRefineCrashMonitorViewController::crashFileNamesForRange_
             (ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_540;
  undefined *local_538;
  undefined *local_4e8;
  undefined *local_4e0;
  undefined *local_490;
  undefined *local_488;
  undefined *local_428;
  undefined *local_420;
  undefined *local_3f8;
  ID local_3d8;
  undefined1 auStack_3d0 [8];
  long local_3c8;
  long *local_3c0;
  undefined8 local_390;
  undefined *local_388;
  long local_380;
  undefined1 auStack_378 [8];
  long local_370;
  long *local_368;
  undefined8 local_338;
  undefined *local_330;
  undefined1 auStack_328 [8];
  long local_320;
  long *local_318;
  undefined8 local_2e8;
  undefined *local_2e0;
  ID local_2d8;
  ID local_2d0;
  byte local_2c1;
  ID local_2c0;
  undefined1 auStack_2b8 [8];
  long local_2b0;
  long *local_2a8;
  ulong local_278;
  undefined *local_270;
  undefined *local_268;
  undefined4 local_260;
  byte local_259;
  undefined *local_258;
  ID local_250;
  long_long local_248;
  SEL local_240;
  ID local_238;
  undefined *local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_248 = param_3;
  local_240 = param_2;
  local_238 = param_1;
  _WCRefineCrashReporterLogDirectory();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_250 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_259 = 0;
  local_258 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_250,&local_259);
  if ((((ulong)puVar2 & 1) == 0) || ((local_259 & 1) == 0)) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_260 = 1;
    local_230 = puVar2;
  }
  else {
    puVar2 = local_258;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_258,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_250,0);
    _objc_retainAutoreleasedReturnValue();
    local_3f8 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_3f8 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_268 = local_3f8;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_270 = puVar2;
    _memset(auStack_2b8,0,0x40);
    puVar2 = local_268;
    (*(code *)PTR__objc_retain_02578638)();
    local_420 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b8,auStack_a8,0x10);
    if (local_420 != (undefined *)0x0) {
      lVar6 = *local_2a8;
      local_428 = (undefined *)0x0;
      do {
        do {
          if (*local_2a8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_2a8 - lVar6,puVar2);
          }
          uVar7 = *(ulong *)(local_2b0 + (long)local_428 * 8);
          local_278 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_hasPrefix__0269d320,&cf_crash_);
          local_2c1 = 0;
          bVar1 = false;
          if ((uVar7 & 1) != 0) {
            uVar7 = local_278;
            (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_hasSuffix__0269d018,&cf__log);
            bVar1 = false;
            if ((uVar7 & 1) != 0) {
              IVar3 = local_238;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_238,PTR_s_dateKeyFromCrashFileName__026aa6b8,local_278);
              _objc_retainAutoreleasedReturnValue();
              local_2c1 = 1;
              bVar1 = IVar3 != 0;
              local_2c0 = IVar3;
            }
          }
          if ((local_2c1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_2c0);
          }
          if (bVar1) {
            (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_addObject__0269d180,local_278);
          }
          local_428 = local_428 + 1;
        } while (local_428 < local_420);
        local_420 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b8,auStack_a8,
                   0x10);
        local_428 = (undefined *)0x0;
      } while (local_420 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_270,PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_025810e0);
    puVar2 = local_270;
    (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_260 = 1;
      local_230 = puVar2;
    }
    else {
      IVar4 = local_238;
      (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_todayDateKey_026aa6c0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_238;
      local_2d0 = IVar4;
      if (local_248 == 4) {
        puVar2 = local_270;
        (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_copy_0269d150);
        local_260 = 1;
        local_230 = puVar2;
      }
      else if (local_248 == 0) {
        puVar2 = local_270;
        (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_dateKeyFromCrashFileName__026aa6b8);
        _objc_retainAutoreleasedReturnValue();
        local_2d8 = IVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (local_2d8 == 0) {
          puVar2 = *(undefined **)PTR____NSArray0___02578280;
          (*(code *)PTR__objc_retain_02578638)();
          local_260 = 1;
          local_230 = puVar2;
        }
        else {
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_2e0 = puVar2;
          _memset(auStack_328,0,0x40);
          puVar2 = local_270;
          (*(code *)PTR__objc_retain_02578638)();
          local_488 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_328,auStack_128,
                     0x10);
          if (local_488 != (undefined *)0x0) {
            lVar6 = *local_318;
            local_490 = (undefined *)0x0;
            do {
              do {
                if (*local_318 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_318 - lVar6,puVar2);
                }
                local_2e8 = *(undefined8 *)(local_320 + (long)local_490 * 8);
                IVar3 = local_238;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_238,PTR_s_dateKeyFromCrashFileName__026aa6b8,local_2e8);
                _objc_retainAutoreleasedReturnValue();
                IVar4 = IVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(IVar3);
                if ((IVar4 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2e0,PTR_s_addObject__0269d180,local_2e8);
                }
                local_490 = local_490 + 1;
              } while (local_490 < local_488);
              local_488 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_328,
                         auStack_128,0x10);
              local_490 = (undefined *)0x0;
            } while (local_488 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_2e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_copy_0269d150);
          local_260 = 1;
          local_230 = puVar2;
          _objc_storeStrong(&local_2e0,0);
        }
        _objc_storeStrong(&local_2d8,0);
      }
      else if (local_248 == 1) {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_330 = puVar2;
        _memset(auStack_378,0,0x40);
        puVar2 = local_270;
        (*(code *)PTR__objc_retain_02578638)();
        local_4e0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,auStack_1a8,
                   0x10);
        if (local_4e0 != (undefined *)0x0) {
          lVar6 = *local_368;
          local_4e8 = (undefined *)0x0;
          do {
            do {
              if (*local_368 - lVar6 != 0) {
                _objc_enumerationMutation(*local_368 - lVar6,puVar2);
              }
              local_338 = *(undefined8 *)(local_370 + (long)local_4e8 * 8);
              IVar3 = local_238;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_238,PTR_s_dateKeyFromCrashFileName__026aa6b8,local_338);
              _objc_retainAutoreleasedReturnValue();
              IVar4 = IVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(IVar3);
              if ((IVar4 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_330,PTR_s_addObject__0269d180,local_338)
                ;
              }
              local_4e8 = local_4e8 + 1;
            } while (local_4e8 < local_4e0);
            local_4e0 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,
                       auStack_1a8,0x10);
            local_4e8 = (undefined *)0x0;
          } while (local_4e0 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_330;
        (*(code *)PTR__objc_msgSend_02578628)(local_330,PTR_s_copy_0269d150);
        local_260 = 1;
        local_230 = puVar2;
        _objc_storeStrong(&local_330,0);
      }
      else {
        iVar5 = 2;
        if (local_248 != 2) {
          iVar5 = 6;
        }
        local_380 = (long)iVar5;
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_388 = puVar2;
        _memset(auStack_3d0,0,0x40);
        puVar2 = local_270;
        (*(code *)PTR__objc_retain_02578638)();
        local_538 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3d0,auStack_228,
                   0x10);
        if (local_538 != (undefined *)0x0) {
          lVar6 = *local_3c0;
          local_540 = (undefined *)0x0;
          do {
            do {
              if (*local_3c0 - lVar6 != 0) {
                _objc_enumerationMutation(*local_3c0 - lVar6,puVar2);
              }
              local_390 = *(undefined8 *)(local_3c8 + (long)local_540 * 8);
              IVar3 = local_238;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_238,PTR_s_dateKeyFromCrashFileName__026aa6b8,local_390);
              _objc_retainAutoreleasedReturnValue();
              IVar4 = local_238;
              local_3d8 = IVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_238,PTR_s_calendarDaysFromDateKey_toTodayK_026aa6c8,IVar3,local_2d0);
              if ((-1 < (long)IVar4) && ((long)IVar4 <= local_380)) {
                (*(code *)PTR__objc_msgSend_02578628)(local_388,PTR_s_addObject__0269d180,local_390)
                ;
              }
              _objc_storeStrong(&local_3d8,0);
              local_540 = local_540 + 1;
            } while (local_540 < local_538);
            local_538 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3d0,
                       auStack_228,0x10);
            local_540 = (undefined *)0x0;
          } while (local_538 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_388;
        (*(code *)PTR__objc_msgSend_02578628)(local_388,PTR_s_copy_0269d150);
        local_260 = 1;
        local_230 = puVar2;
        _objc_storeStrong(&local_388,0);
      }
      _objc_storeStrong(&local_2d0,0);
    }
    _objc_storeStrong(&local_270);
    _objc_storeStrong(&local_268,0);
  }
  _objc_storeStrong(&local_258);
  _objc_storeStrong(&local_250,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_230;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// FUN_01dfbfb4 @ 01dfbfb4

void FUN_01dfbfb4(void)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *local_4d0;
  cfstringStruct *local_4a0;
  cfstringStruct *local_498;
  cfstringStruct *local_468;
  cfstringStruct *local_430;
  undefined *local_3e8;
  undefined *local_3e0;
  undefined *local_3c8;
  undefined *local_380;
  undefined *local_378;
  undefined *local_360;
  bool local_341;
  cfstringStruct *local_340;
  cfstringStruct *local_330;
  undefined1 auStack_328 [8];
  long local_320;
  long *local_318;
  cfstringStruct *local_2e8;
  undefined *local_2e0;
  bool local_2d1;
  cfstringStruct *local_2d0;
  cfstringStruct *local_2c8;
  bool local_2b9;
  cfstringStruct *local_2b8;
  cfstringStruct *local_2b0;
  cfstringStruct *local_2a8;
  cfstringStruct *local_2a0;
  cfstringStruct *local_298;
  cfstringStruct *local_290;
  cfstringStruct *local_288;
  undefined1 auStack_280 [8];
  long local_278;
  long *local_270;
  undefined8 local_240;
  byte local_231;
  cfstringStruct *local_230;
  byte local_221;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  ulong local_1e0;
  byte local_1d2;
  byte local_1d1;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  undefined *local_1c0;
  int local_1b4;
  undefined *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_1b0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_boolForKey__0269f3d8,&cf_WCRSuperFloatBallFloatBallDirectoryMigrated);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = &cf_WCRefine_SuperFloat_Icons;
    local_1c0 = puVar2;
    FUN_01dfcf28();
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = &cf_WCRefine_SuperFloat_FloatBall;
    local_1c8 = pcVar3;
    FUN_01dfcf28();
    _objc_retainAutoreleasedReturnValue();
    local_1d1 = 0;
    puVar2 = local_1c0;
    local_1d0 = pcVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1c0,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_1c8,&local_1d1);
    if ((((ulong)puVar2 & 1) != 0) && ((local_1d1 & 1) != 0)) {
      local_1d2 = 0;
      _memset(auStack_220,0,0x40);
      puVar2 = local_1c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1c0,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_1c8,0);
      _objc_retainAutoreleasedReturnValue();
      local_360 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_360 = *(undefined **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_378 = local_360;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_360,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_a8,
                 0x10);
      if (local_378 != (undefined *)0x0) {
        lVar7 = *local_210;
        local_380 = (undefined *)0x0;
        do {
          do {
            if (*local_210 - lVar7 != 0) {
              _objc_enumerationMutation(*local_210 - lVar7,local_360);
            }
            local_1e0 = *(ulong *)(local_218 + (long)local_380 * 8);
            local_221 = 0;
            pcVar3 = local_1c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c8,PTR_s_stringByAppendingPathComponent__026cab30,local_1e0);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = local_1c0;
            local_230 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c0,PTR_s_fileExistsAtPath_isDirectory__026ca638,pcVar3,&local_221);
            if (((((ulong)puVar2 & 1) == 0) || ((local_221 & 1) == 0)) ||
               (uVar4 = local_1e0,
               (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_hasPrefix__0269d320,&cf__),
               (uVar4 & 1) != 0)) {
              local_1b4 = 0;
            }
            else {
              local_1d2 = 1;
              local_1b4 = 2;
            }
            _objc_storeStrong(&local_230,0);
            if (local_1b4 != 0) goto LAB_01dfc350;
            local_380 = local_380 + 1;
          } while (local_380 < local_378);
          local_378 = local_360;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_360,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,
                     auStack_a8,0x10);
          local_380 = (undefined *)0x0;
        } while (local_378 != (undefined *)0x0);
      }
      local_1b4 = 0;
LAB_01dfc350:
      (*(code *)PTR__objc_release_02578630)(local_360);
      if ((local_1d2 & 1) == 0) {
        local_231 = 0;
        puVar5 = local_1c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c0,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_1d0,&local_231);
        puVar2 = local_1c0;
        if (((ulong)puVar5 & 1) == 0) {
          pcVar3 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1d0,PTR_s_stringByDeletingLastPathComponen_0269fb90);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_createDirectoryAtPath_withInterm_0269e230,pcVar3,1,0);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1c0,PTR_s_moveItemAtPath_toPath_error__0269f940,local_1c8,local_1d0,0);
        }
        else if ((local_231 & 1) != 0) {
          _memset(auStack_280,0,0x40);
          puVar2 = local_1c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1c0,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_1c8,0);
          _objc_retainAutoreleasedReturnValue();
          local_3c8 = puVar2;
          if (puVar2 == (undefined *)0x0) {
            local_3c8 = *(undefined **)PTR____NSArray0___02578280;
          }
          (*(code *)PTR__objc_retain_02578638)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_3e0 = local_3c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3c8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,
                     auStack_128,0x10);
          if (local_3e0 != (undefined *)0x0) {
            lVar7 = *local_270;
            local_3e8 = (undefined *)0x0;
            do {
              do {
                if (*local_270 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_270 - lVar7,local_3c8);
                }
                local_240 = *(undefined8 *)(local_278 + (long)local_3e8 * 8);
                pcVar3 = local_1c8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1c8,PTR_s_stringByAppendingPathComponent__026cab30,local_240);
                _objc_retainAutoreleasedReturnValue();
                pcVar8 = local_1d0;
                local_288 = pcVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1d0,PTR_s_stringByAppendingPathComponent__026cab30,local_240);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = local_1c0;
                local_290 = pcVar8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1c0,PTR_s_fileExistsAtPath__026ca630,pcVar8);
                if (((ulong)puVar2 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1c0,PTR_s_moveItemAtPath_toPath_error__0269f940,local_288,
                             local_290,0);
                }
                _objc_storeStrong(&local_290);
                _objc_storeStrong(&local_288,0);
                local_3e8 = local_3e8 + 1;
              } while (local_3e8 < local_3e0);
              local_3e0 = local_3c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_3c8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,
                         auStack_128,0x10);
              local_3e8 = (undefined *)0x0;
            } while (local_3e0 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(local_3c8);
        }
      }
    }
    pcVar8 = (cfstringStruct *)PTR_WCRSuperFloatProfileStore_026cee48;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_mutableCurrentProfile_026b1888);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = &cf_WCRefine_SuperFloat_Icons;
    local_298 = pcVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (&cf_WCRefine_SuperFloat_Icons,PTR_s_stringByAppendingString__0269d398);
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = &cf_WCRefine_SuperFloat_FloatBall;
    local_2a0 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (&cf_WCRefine_SuperFloat_FloatBall,PTR_s_stringByAppendingString__0269d398,&cf__);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_298;
    local_2a8 = pcVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_298,PTR_s_objectForKeyedSubscript__0269d098,&cf_ballIconPath);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_2b9 = false;
    bVar1 = ((ulong)pcVar8 & 1) == 0;
    if (bVar1) {
      local_430 = &cf___;
    }
    else {
      local_430 = local_298;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_298,PTR_s_objectForKeyedSubscript__0269d098,&cf_ballIconPath);
      _objc_retainAutoreleasedReturnValue();
      local_2b8 = local_430;
    }
    local_2b9 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_2b0 = local_430;
    if ((local_2b9 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_2b8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar6 = local_2b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_hasPrefix__0269d320,local_2a0);
    pcVar8 = local_2a8;
    pcVar3 = local_2b0;
    if (((ulong)pcVar6 & 1) != 0) {
      pcVar6 = local_2a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_substringFromIndex__0269d120,pcVar6);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_stringByAppendingString__0269d398);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_298,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar8,&cf_ballIconPath);
      (*(code *)PTR__objc_release_02578630)(pcVar8);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    pcVar3 = local_298;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_298,PTR_s_objectForKeyedSubscript__0269d098,&cf_ballIconTopped);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    pcVar8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_2d1 = false;
    bVar1 = ((ulong)pcVar8 & 1) == 0;
    if (bVar1) {
      local_468 = *(cfstringStruct **)PTR____NSArray0___02578280;
    }
    else {
      local_468 = local_298;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_298,PTR_s_objectForKeyedSubscript__0269d098,&cf_ballIconTopped);
      _objc_retainAutoreleasedReturnValue();
      local_2d0 = local_468;
    }
    local_2d1 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_2c8 = local_468;
    if ((local_2d1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_2d0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    pcVar3 = local_2c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    local_2e0 = puVar2;
    _memset(auStack_328,0,0x40);
    pcVar3 = local_2c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_498 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_328,auStack_1a8,0x10);
    if (local_498 != (cfstringStruct *)0x0) {
      lVar7 = *local_318;
      local_4a0 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_318 - lVar7 != 0) {
            _objc_enumerationMutation(*local_318 - lVar7,pcVar3);
          }
          pcVar8 = *(cfstringStruct **)(local_320 + (long)local_4a0 * 8);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_2e8 = pcVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
          puVar2 = local_2e0;
          if (((ulong)pcVar8 & 1) != 0) {
            pcVar6 = local_2e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_hasPrefix__0269d320,local_2a0);
            local_4d0 = local_2a8;
            pcVar8 = local_2e8;
            local_341 = ((ulong)pcVar6 & 1) == 0;
            if (local_341) {
              local_4d0 = local_2e8;
            }
            else {
              pcVar6 = local_2a0;
              (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_length_0269cca0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar8,PTR_s_substringFromIndex__0269d120,pcVar6);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_4d0,PTR_s_stringByAppendingString__0269d398);
              _objc_retainAutoreleasedReturnValue();
              local_340 = local_4d0;
              local_330 = pcVar8;
            }
            local_341 = !local_341;
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180,local_4d0);
            if (local_341) {
              (*(code *)PTR__objc_release_02578630)(local_340);
              (*(code *)PTR__objc_release_02578630)(local_330);
            }
          }
          local_4a0 = (cfstringStruct *)((long)&local_4a0->field0_0x0 + 1);
        } while (local_4a0 < local_498);
        local_498 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_328,auStack_1a8,
                   0x10);
        local_4a0 = (cfstringStruct *)0x0;
      } while (local_498 != (cfstringStruct *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_298,PTR_s_setObject_forKeyedSubscript__0269d248,local_2e0,&cf_ballIconTopped);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_saveCurrentProfile__026b1890,local_298);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1b0,PTR_s_setBool_forKey__026a9618,1,
               &cf_WCRSuperFloatBallFloatBallDirectoryMigrated);
    _objc_storeStrong(&local_2e0);
    _objc_storeStrong(&local_2c8,0);
    _objc_storeStrong(&local_2b0,0);
    _objc_storeStrong(&local_2a8,0);
    _objc_storeStrong(&local_2a0,0);
    _objc_storeStrong(&local_298,0);
    _objc_storeStrong(&local_1d0,0);
    _objc_storeStrong(&local_1c8,0);
    _objc_storeStrong(&local_1c0,0);
    local_1b4 = 0;
  }
  else {
    local_1b4 = 1;
  }
  _objc_storeStrong(&local_1b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


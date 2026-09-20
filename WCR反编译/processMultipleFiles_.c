// processMultipleFiles: @ 01d6b704

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenshotFrameLibraryViewController::processMultipleFiles_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ID IVar10;
  long lVar11;
  ulong uVar12;
  undefined *local_548;
  undefined *local_540;
  undefined *local_500;
  undefined *local_4c0;
  undefined *local_4b8;
  ulong local_3f0;
  ulong local_3e8;
  ulong local_398;
  ulong local_390;
  ulong local_388;
  ulong local_380;
  undefined1 auStack_378 [8];
  long local_370;
  long *local_368;
  ulong local_338;
  long local_330;
  byte local_321;
  undefined *local_320;
  undefined *local_318;
  undefined1 auStack_310 [8];
  long local_308;
  long *local_300;
  undefined8 local_2d0;
  ulong local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  byte local_2a9;
  undefined *local_2a8;
  undefined *local_2a0;
  ulong local_298;
  ulong local_290;
  ulong local_288;
  undefined4 local_280;
  byte local_279;
  undefined1 auStack_278 [8];
  long local_270;
  long *local_268;
  ulong local_238;
  undefined *local_230;
  undefined *local_228;
  undefined *local_220;
  undefined *local_218;
  undefined *local_210;
  undefined *local_208;
  ulong local_200;
  SEL local_1f8;
  ID local_1f0;
  undefined1 auStack_1e8 [128];
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_200 = 0;
  local_1f8 = param_2;
  local_1f0 = param_1;
  _objc_storeStrong(&local_200,param_3);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_208 = puVar2;
  _NSTemporaryDirectory();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSUUID_026ce668;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringByAppendingPathComponent__026cab30);
  _objc_retainAutoreleasedReturnValue();
  local_210 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_208,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_210,1,0);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_218 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_220 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_228 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_230 = puVar3;
  _memset(auStack_278,0,0x40);
  uVar9 = local_200;
  (*(code *)PTR__objc_retain_02578638)();
  local_3e8 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,auStack_a8,0x10);
  if (local_3e8 != 0) {
    lVar11 = *local_268;
    local_3f0 = 0;
    do {
      do {
        uVar12 = local_3e8;
        if (*local_268 - lVar11 != 0) {
          uVar12 = uVar9;
          _objc_enumerationMutation(*local_268 - lVar11);
        }
        local_238 = *(ulong *)(local_270 + local_3f0 * 8);
        _objc_autoreleasePoolPush();
        puVar2 = local_208;
        local_279 = 0;
        uVar6 = local_238;
        (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_path_0269d4d8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_fileExistsAtPath_isDirectory__026ca638,uVar6,&local_279);
        (*(code *)PTR__objc_release_02578630)(uVar6);
        IVar10 = local_1f0;
        if ((local_279 & 1) == 0) {
          uVar6 = local_238;
          (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_pathExtension_0269e090);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_288 = uVar7;
          (*(code *)PTR__objc_release_02578630)(uVar6);
          uVar6 = local_238;
          (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_290 = uVar7;
          (*(code *)PTR__objc_release_02578630)(uVar6);
          uVar6 = local_238;
          (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          local_298 = uVar6;
          FUN_01d6b61c();
          if ((uVar6 & 1) == 0) {
            puVar2 = local_210;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_210,PTR_s_stringByAppendingPathComponent__026cab30,local_298);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
            local_2a0 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSData_026ce1d0,
                       PTR_s_dataWithContentsOfURL_options_er_026ac470,local_238,1,0);
            _objc_retainAutoreleasedReturnValue();
            local_2a9 = 0;
            local_2a8 = puVar3;
            if ((puVar3 != (undefined *)0x0) &&
               ((*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0),
               puVar3 != (undefined *)0x0)) {
              puVar2 = local_2a8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2a8,PTR_s_writeToFile_atomically__0269f928,local_2a0,1);
              local_2a9 = (byte)puVar2;
            }
            puVar2 = local_208;
            if ((local_2a9 & 1) == 0) {
              local_2b8 = 0;
              uVar6 = local_238;
              (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_path_0269d4d8);
              _objc_retainAutoreleasedReturnValue();
              local_2c0 = local_2b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_copyItemAtPath_toPath_error__026a1758,uVar6,local_2a0,
                         &local_2c0);
              _objc_storeStrong(&local_2b8,local_2c0);
              local_2a9 = (byte)puVar2;
              (*(code *)PTR__objc_release_02578630)(uVar6);
              _objc_storeStrong(&local_2b8,0);
            }
            if ((local_2a9 & 1) != 0) {
              uVar6 = local_288;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_288,PTR_s_isEqualToString__0269ccc8,&cf_png);
              if ((uVar6 & 1) == 0) {
                uVar6 = local_288;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_288,PTR_s_isEqualToString__0269ccc8,&cf_cfg);
                if ((uVar6 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_228,PTR_s_setObject_forKeyedSubscript__0269d248,local_2a0,
                             local_290);
                }
              }
              else {
                uVar7 = local_290;
                (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_hasSuffix__0269d018,&cf__dark)
                ;
                uVar6 = local_290;
                if ((uVar7 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_218,PTR_s_setObject_forKeyedSubscript__0269d248,local_2a0,
                             local_290);
                }
                else {
                  uVar7 = local_290;
                  (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_length_0269cca0);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar6,PTR_s_substringToIndex__0269d6c0,uVar7 - 5);
                  _objc_retainAutoreleasedReturnValue();
                  local_2c8 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_220,PTR_s_setObject_forKeyedSubscript__0269d248,local_2a0,uVar6);
                  _objc_storeStrong(&local_2c8,0);
                }
              }
            }
            _objc_storeStrong(&local_2a8);
            _objc_storeStrong(&local_2a0,0);
            local_280 = 0;
          }
          else {
            local_280 = 3;
          }
          _objc_storeStrong(&local_298);
          _objc_storeStrong(&local_290,0);
          _objc_storeStrong(&local_288,0);
        }
        else {
          uVar6 = local_238;
          (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_path_0269d4d8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar10,PTR_s_findFramePairsInDirectory_pairs__026a77a0,uVar6,local_230);
          (*(code *)PTR__objc_release_02578630)(uVar6);
          local_280 = 3;
        }
        _objc_autoreleasePoolPop(uVar12);
        local_3f0 = local_3f0 + 1;
      } while (local_3f0 < local_3e8);
      local_3e8 = uVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,auStack_a8,0x10);
      local_3f0 = 0;
    } while (local_3e8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar9);
  _memset(auStack_310,0,0x40);
  puVar2 = local_218;
  (*(code *)PTR__objc_retain_02578638)();
  local_4b8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_310,auStack_128,0x10);
  if (local_4b8 != (undefined *)0x0) {
    lVar11 = *local_300;
    local_4c0 = (undefined *)0x0;
    do {
      do {
        if (*local_300 - lVar11 != 0) {
          _objc_enumerationMutation(*local_300 - lVar11,puVar2);
        }
        local_2d0 = *(undefined8 *)(local_308 + (long)local_4c0 * 8);
        puVar3 = local_228;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_228,PTR_s_objectForKeyedSubscript__0269d098,local_2d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (puVar3 != (undefined *)0x0) {
          puVar4 = local_220;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_220,PTR_s_objectForKeyedSubscript__0269d098,local_2d0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_230;
          local_168 = &cf_png;
          puVar5 = local_218;
          local_318 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_218,PTR_s_objectForKeyedSubscript__0269d098,local_2d0);
          _objc_retainAutoreleasedReturnValue();
          local_160 = &cf_darkPng;
          local_321 = 0;
          bVar1 = local_318 == (undefined *)0x0;
          local_148 = puVar5;
          if (bVar1) {
            local_500 = PTR__OBJC_CLASS___NSNull_026ce0e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
            _objc_retainAutoreleasedReturnValue();
            local_320 = local_500;
          }
          else {
            local_500 = local_318;
          }
          local_140 = local_500;
          local_158 = &cf_cfg;
          puVar4 = local_228;
          local_321 = bVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_228,PTR_s_objectForKeyedSubscript__0269d098,local_2d0);
          _objc_retainAutoreleasedReturnValue();
          local_150 = &cf_name;
          local_130 = local_2d0;
          puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_138 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_148,&local_168,4);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar8);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          if ((local_321 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_320);
          }
          (*(code *)PTR__objc_release_02578630)(puVar5);
          _objc_storeStrong(&local_318,0);
        }
        local_4c0 = local_4c0 + 1;
      } while (local_4c0 < local_4b8);
      local_4b8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_310,auStack_128,0x10
                );
      local_4c0 = (undefined *)0x0;
    } while (local_4b8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_230;
  (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_showToast__026b3a18,&cf__g_b0R9SMv);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_208,PTR_s_removeItemAtPath_error__0269f910,local_210,0);
    local_280 = 1;
  }
  else {
    local_330 = 0;
    _memset(auStack_378,0,0x40);
    puVar2 = local_230;
    (*(code *)PTR__objc_retain_02578638)();
    local_540 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,auStack_1e8,0x10);
    if (local_540 != (undefined *)0x0) {
      lVar11 = *local_368;
      local_548 = (undefined *)0x0;
      do {
        do {
          if (*local_368 - lVar11 != 0) {
            _objc_enumerationMutation(*local_368 - lVar11,puVar2);
          }
          uVar12 = *(ulong *)(local_370 + (long)local_548 * 8);
          local_338 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar12,PTR_s_objectForKeyedSubscript__0269d098,&cf_png);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = local_338;
          local_380 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_338,PTR_s_objectForKeyedSubscript__0269d098,&cf_darkPng);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSNull_026ce0e8;
          local_388 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar9 & 1) != 0) {
            _objc_storeStrong(&local_388,0);
          }
          uVar9 = local_338;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_338,PTR_s_objectForKeyedSubscript__0269d098,&cf_cfg);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = local_338;
          local_390 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_338,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          IVar10 = local_1f0;
          local_398 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f0,PTR_s_importFrameWithPNG_darkPng_cfg_n_026a77a8,local_380,local_388,
                     local_390,uVar12);
          if ((IVar10 & 1) != 0) {
            local_330 = local_330 + 1;
          }
          _objc_storeStrong(&local_398);
          _objc_storeStrong(&local_390,0);
          _objc_storeStrong(&local_388,0);
          _objc_storeStrong(&local_380,0);
          local_548 = local_548 + 1;
        } while (local_548 < local_540);
        local_540 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,auStack_1e8,
                   0x10);
        local_548 = (undefined *)0x0;
      } while (local_540 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_208,PTR_s_removeItemAtPath_error__0269f910,local_210,0);
    IVar10 = local_1f0;
    if (local_330 < 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_showToast__026b3a18,&cf__eQ1Y_);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_bR_eQ);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar10,PTR_s_showToast__026b3a18);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_loadFrames_026b63c0);
    }
    local_280 = 0;
  }
  _objc_storeStrong(&local_230);
  _objc_storeStrong(&local_228,0);
  _objc_storeStrong(&local_220,0);
  _objc_storeStrong(&local_218,0);
  _objc_storeStrong(&local_210,0);
  _objc_storeStrong(&local_208,0);
  _objc_storeStrong(&local_200,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


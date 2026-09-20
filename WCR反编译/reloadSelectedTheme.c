// reloadSelectedTheme @ 015c7ea8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineWechatThemeStore::reloadSelectedTheme(WCRefineWechatThemeStore *this,ID param_1,SEL param_2)

{
  undefined1 uVar1;
  byte bVar2;
  bool bVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 in_d0;
  uint local_9a0;
  uint local_99c;
  undefined *local_980;
  undefined *local_978;
  undefined *local_950;
  ulong local_940;
  undefined *local_8e0;
  undefined *local_8d8;
  ulong local_8b0;
  undefined *local_840;
  undefined *local_838;
  ulong local_810;
  undefined *local_7b0;
  undefined *local_7a8;
  uint local_71c;
  undefined *local_700;
  undefined *local_6f8;
  ID local_6a8;
  ID local_688;
  cfstringStruct *local_678;
  ulong local_660;
  undefined *local_658;
  undefined1 auStack_650 [8];
  long local_648;
  long *local_640;
  long local_610;
  undefined *local_608;
  ulong local_600;
  ulong local_5f8;
  ulong local_5f0;
  ulong local_5e8;
  ulong local_5e0;
  ulong local_5d8;
  ID local_5d0;
  undefined1 local_5c1;
  undefined *local_5c0;
  undefined1 auStack_5b8 [8];
  long local_5b0;
  long *local_5a8;
  long local_578;
  ulong local_570;
  ulong local_568;
  ulong local_560;
  ulong local_558;
  ulong local_550;
  ulong local_548;
  undefined1 local_539;
  undefined *local_538;
  undefined1 auStack_530 [8];
  long local_528;
  long *local_520;
  long local_4f0;
  ulong local_4e8;
  ulong local_4e0;
  ulong local_4d8;
  ulong local_4d0;
  ulong local_4c8;
  ulong local_4c0;
  ulong local_4b8;
  undefined1 auStack_4b0 [8];
  long local_4a8;
  long *local_4a0;
  ulong local_470;
  undefined8 local_468;
  undefined *local_460;
  undefined *local_458;
  undefined *local_450;
  undefined *local_448;
  undefined *local_440;
  undefined *local_438;
  undefined *local_430;
  undefined *local_428;
  undefined4 local_420;
  undefined4 local_41c;
  code *local_418;
  undefined *local_410;
  ID local_408;
  byte local_3f9;
  ulong local_3f8;
  byte local_3e9;
  ulong local_3e8;
  undefined1 auStack_3e0 [8];
  long local_3d8;
  long *local_3d0;
  ulong local_3a0;
  undefined *local_398;
  undefined *local_390;
  undefined *local_388;
  undefined *local_380 [2];
  undefined4 local_370;
  byte local_369;
  undefined *local_368;
  byte local_35a;
  bool local_359;
  ID local_358;
  byte local_349;
  ID local_348;
  ID local_340;
  bool local_331;
  cfstringStruct *local_330;
  cfstringStruct *local_328;
  byte local_319;
  cfstringStruct *local_318;
  SEL local_310;
  ID local_308;
  ulong local_300;
  ulong local_2f8;
  undefined1 auStack_2f0 [128];
  ulong local_270;
  ulong local_268;
  undefined1 auStack_260 [128];
  ulong local_1e0;
  ulong local_1d8;
  undefined1 auStack_1d0 [128];
  undefined1 auStack_150 [128];
  undefined1 auStack_d0 [128];
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar4 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_310 = param_2;
  local_308 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_318 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_wechatThemeBeautifyEnabled_026aeb58);
  local_319 = (byte)pcVar4;
  local_331 = false;
  bVar3 = ((ulong)pcVar4 & 1) == 0;
  if (bVar3) {
    local_678 = &::cf___;
  }
  else {
    local_678 = local_318;
    (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_wechatThemeBeautifySelectedTheme_026b0e60)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_330 = local_678;
  }
  local_331 = !bVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_328 = local_678;
  if ((local_331 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_330);
  }
  pcVar4 = local_328;
  (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_length_0269cca0);
  local_349 = 0;
  local_359 = false;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_688 = 0;
  }
  else {
    local_688 = local_308;
    (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_repositoryPath_026aeb48);
    _objc_retainAutoreleasedReturnValue();
    local_349 = 1;
    local_348 = local_688;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_358 = local_688;
  }
  local_359 = pcVar4 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_340 = local_688;
  if ((local_359 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_358);
  }
  if ((local_349 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_348);
  }
  local_35a = 0;
  local_369 = 0;
  bVar2 = 0;
  if ((local_319 & 1) != 0) {
    IVar5 = local_340;
    (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_length_0269cca0);
    bVar2 = 0;
    if (IVar5 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_369 = 1;
      local_368 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar2 = 0;
      if (((ulong)puVar6 & 1) != 0) {
        bVar2 = local_35a;
      }
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_setEnabled__026ca938,bVar2 & 1);
  if ((local_369 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_368);
  }
  IVar5 = local_308;
  (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_isEnabled_026a0ef0);
  if ((IVar5 & 1) == 0) {
    local_6a8 = 0;
  }
  else {
    local_6a8 = local_340;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_setSelectedThemePath__026b0e68,local_6a8);
  IVar5 = local_308;
  (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_imageCache_026b0e70);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_308,PTR_s_setLastBubbleDarkMode__026b0e10,0xffffffffffffffff);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_308,PTR_s_reloadSelectedBubblePack__026b0e78,local_319 & 1);
  IVar5 = local_308;
  (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_isEnabled_026a0ef0);
  puVar6 = PTR____NSDictionary0___02578288;
  if ((IVar5 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_308,PTR_s_setPngPaths__026b0e80,*(undefined8 *)PTR____NSDictionary0___02578288)
    ;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_308,PTR_s_setSvgPaths__026b0e88,*(undefined8 *)puVar6);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_308,PTR_s_setCssPaths__026b0e90,*(undefined8 *)puVar6);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_308,PTR_s_setXmlNamePaths__026b0e98,*(undefined8 *)puVar6);
    puVar6 = PTR____NSArray0___02578280;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_308,PTR_s_setCssFilePaths__026b0ea0,*(undefined8 *)PTR____NSArray0___02578280);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_308,PTR_s_setXmlPaths__026b0ea8,*(undefined8 *)puVar6);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_308,PTR_s_setCarCatalogs__026b0eb0,*(undefined8 *)puVar6);
    local_370 = 1;
  }
  else {
    _CFAbsoluteTimeGetCurrent();
    puVar6 = PTR__OBJC_CLASS___NSSet_026ce150;
    local_50 = &cf_png;
    local_48 = &cf_svg;
    local_40 = &cf_css;
    local_38 = &cf_xml;
    local_30 = &cf_car;
    puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,5
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setWithArray__0269d9a0);
    _objc_retainAutoreleasedReturnValue();
    local_380[0] = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    puVar6 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath_isDirectory__026a8f30,
               local_340,1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_388 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_390 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_398 = puVar6;
    _memset(auStack_3e0,0,0x40);
    puVar6 = local_390;
    (*(code *)PTR__objc_retain_02578638)();
    local_6f8 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3e0,auStack_d0,0x10);
    if (local_6f8 != (undefined *)0x0) {
      lVar10 = *local_3d0;
      local_700 = (undefined *)0x0;
      do {
        do {
          if (*local_3d0 - lVar10 != 0) {
            _objc_enumerationMutation(*local_3d0 - lVar10,puVar6);
          }
          uVar12 = *(ulong *)(local_3d8 + (long)local_700 * 8);
          local_3a0 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_hasDirectoryPath_026b0ec0);
          puVar7 = local_380[0];
          local_3e9 = 0;
          local_3f9 = 0;
          local_71c = 0;
          if ((uVar12 & 1) == 0) {
            uVar12 = local_3a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_3a0,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            local_3e9 = 1;
            local_3e8 = uVar12;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_3f9 = 1;
            local_3f8 = uVar12;
            (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_containsObject__0269cbb8);
            local_71c = (uint)puVar7;
          }
          if ((local_3f9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_3f8);
          }
          if ((local_3e9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_3e8);
          }
          if ((local_71c & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_398,PTR_s_addObject__0269d180,local_3a0);
          }
          local_700 = local_700 + 1;
        } while (local_700 < local_6f8);
        local_6f8 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3e0,auStack_d0,
                   0x10);
        local_700 = (undefined *)0x0;
      } while (local_6f8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar6);
    IVar5 = local_340;
    puVar6 = local_398;
    local_428 = PTR___NSConcreteGlobalBlock_02578658;
    local_420 = 0xd0800000;
    local_41c = 0;
    local_418 = FUN_015c9ecc;
    local_410 = &DAT_02587218;
    (*(code *)PTR__objc_retain_02578638)();
    local_408 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_sortUsingComparator__0269d168,&local_428);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_430 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_438 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_440 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_448 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_450 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_458 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    local_460 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    local_468 = in_d0;
    _memset(auStack_4b0,0,0x40);
    puVar6 = local_398;
    (*(code *)PTR__objc_retain_02578638)();
    local_7a8 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4b0,auStack_150,0x10);
    if (local_7a8 != (undefined *)0x0) {
      lVar10 = *local_4a0;
      local_7b0 = (undefined *)0x0;
      do {
        do {
          if (*local_4a0 - lVar10 != 0) {
            _objc_enumerationMutation(*local_4a0 - lVar10,puVar6);
          }
          uVar13 = *(ulong *)(local_4a8 + (long)local_7b0 * 8);
          local_470 = uVar13;
          (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_pathExtension_0269e090);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar13;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_4b8 = uVar12;
          (*(code *)PTR__objc_release_02578630)(uVar13);
          uVar12 = local_4b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_4b8,PTR_s_isEqualToString__0269ccc8,&cf_xml);
          puVar7 = local_458;
          if ((uVar12 & 1) == 0) {
            uVar12 = local_4b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_4b8,PTR_s_isEqualToString__0269ccc8,&cf_css)
            ;
            puVar7 = local_450;
            if ((uVar12 & 1) == 0) {
              uVar12 = local_4b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_4b8,PTR_s_isEqualToString__0269ccc8,&cf_car);
              if ((uVar12 & 1) == 0) {
                uVar12 = local_470;
                (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_path_0269d4d8);
                _objc_retainAutoreleasedReturnValue();
                IVar5 = local_340;
                (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_length_0269cca0);
                local_5e0 = IVar5 + 1;
                uVar13 = local_470;
                (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_path_0269d4d8);
                _objc_retainAutoreleasedReturnValue();
                uVar8 = uVar13;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar13);
                local_940 = uVar8;
                if (local_5e0 < uVar8) {
                  local_940 = local_5e0;
                }
                local_5f0 = local_940;
                uVar13 = uVar12;
                local_5e8 = uVar8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar12,PTR_s_substringFromIndex__0269d120,local_940);
                _objc_retainAutoreleasedReturnValue();
                local_5d8 = uVar13;
                (*(code *)PTR__objc_release_02578630)(uVar12);
                uVar12 = local_470;
                (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_lastPathComponent_026ca780);
                _objc_retainAutoreleasedReturnValue();
                uVar13 = uVar12;
                FUN_015ca2a4();
                _objc_retainAutoreleasedReturnValue();
                local_5f8 = uVar13;
                (*(code *)PTR__objc_release_02578630)(uVar12);
                uVar12 = local_5d8;
                FUN_015ca2a4();
                _objc_retainAutoreleasedReturnValue();
                uVar13 = local_4b8;
                local_600 = uVar12;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_4b8,PTR_s_isEqualToString__0269ccc8,&cf_png);
                if ((uVar13 & 1) == 0) {
                  local_950 = local_438;
                }
                else {
                  local_950 = local_430;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_608 = local_950;
                _memset(auStack_650,0,0x40);
                local_300 = local_5f8;
                local_2f8 = local_600;
                puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70
                           ,&local_300,2);
                _objc_retainAutoreleasedReturnValue();
                local_978 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)();
                if (local_978 != (undefined *)0x0) {
                  lVar11 = *local_640;
                  local_980 = (undefined *)0x0;
                  do {
                    do {
                      if (*local_640 - lVar11 != 0) {
                        _objc_enumerationMutation(*local_640 - lVar11,puVar7);
                      }
                      lVar14 = *(long *)(local_648 + (long)local_980 * 8);
                      local_610 = lVar14;
                      (*(code *)PTR__objc_msgSend_02578628)(lVar14,PTR_s_length_0269cca0);
                      if (lVar14 != 0) {
                        puVar9 = local_608;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_608,PTR_s_objectForKeyedSubscript__0269d098,local_610);
                        _objc_retainAutoreleasedReturnValue();
                        bVar3 = false;
                        local_99c = 1;
                        local_658 = puVar9;
                        if (puVar9 != (undefined *)0x0) {
                          uVar12 = local_4b8;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_4b8,PTR_s_isEqualToString__0269ccc8,&cf_png);
                          IVar5 = local_308;
                          local_9a0 = 0;
                          bVar3 = (uVar12 & 1) != 0;
                          if (bVar3) {
                            local_660 = local_470;
                            (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_path_0269d4d8);
                            _objc_retainAutoreleasedReturnValue();
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_468,IVar5,PTR_s_pngPath_isBetterThan_forScale__026b0ed0
                                       ,local_660,local_658);
                            local_9a0 = (uint)IVar5;
                          }
                          local_99c = local_9a0;
                        }
                        if (bVar3) {
                          (*(code *)PTR__objc_release_02578630)(local_660);
                        }
                        if ((local_99c & 1) != 0) {
                          uVar12 = local_470;
                          (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_path_0269d4d8);
                          _objc_retainAutoreleasedReturnValue();
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_608,PTR_s_setObject_forKeyedSubscript__0269d248,uVar12,
                                     local_610);
                          (*(code *)PTR__objc_release_02578630)(uVar12);
                        }
                        _objc_storeStrong(&local_658,0);
                      }
                      local_980 = local_980 + 1;
                    } while (local_980 < local_978);
                    local_978 = puVar7;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_650,
                               auStack_2f0,0x10);
                    local_980 = (undefined *)0x0;
                  } while (local_978 != (undefined *)0x0);
                }
                (*(code *)PTR__objc_release_02578630)(puVar7);
                _objc_storeStrong(&local_608);
                _objc_storeStrong(&local_600,0);
                _objc_storeStrong(&local_5f8,0);
                _objc_storeStrong(&local_5d8,0);
                local_370 = 0;
              }
              else {
                IVar5 = local_308;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_308,PTR_s_catalogAtURL__026b0ec8,local_470);
                _objc_retainAutoreleasedReturnValue();
                local_5d0 = IVar5;
                if (IVar5 != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_460,PTR_s_addObject__0269d180,IVar5);
                }
                local_370 = 5;
                _objc_storeStrong(&local_5d0,0);
              }
            }
            else {
              uVar12 = local_470;
              (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_path_0269d4d8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(uVar12);
              uVar12 = local_470;
              (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_path_0269d4d8);
              _objc_retainAutoreleasedReturnValue();
              IVar5 = local_340;
              (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_length_0269cca0);
              local_550 = IVar5 + 1;
              uVar13 = local_470;
              (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_path_0269d4d8);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar13;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar13);
              local_8b0 = uVar8;
              if (local_550 < uVar8) {
                local_8b0 = local_550;
              }
              local_560 = local_8b0;
              uVar13 = uVar12;
              local_558 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar12,PTR_s_substringFromIndex__0269d120,local_8b0);
              _objc_retainAutoreleasedReturnValue();
              local_548 = uVar13;
              (*(code *)PTR__objc_release_02578630)(uVar12);
              uVar12 = local_470;
              (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_lastPathComponent_026ca780);
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar12;
              FUN_015ca2a4();
              _objc_retainAutoreleasedReturnValue();
              local_568 = uVar13;
              (*(code *)PTR__objc_release_02578630)(uVar12);
              uVar12 = local_548;
              FUN_015ca2a4();
              _objc_retainAutoreleasedReturnValue();
              local_570 = uVar12;
              _memset(auStack_5b8,0,0x40);
              local_270 = local_568;
              local_268 = local_570;
              puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_270,2);
              _objc_retainAutoreleasedReturnValue();
              local_8d8 = puVar7;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_8d8 != (undefined *)0x0) {
                lVar11 = *local_5a8;
                local_8e0 = (undefined *)0x0;
                do {
                  do {
                    if (*local_5a8 - lVar11 != 0) {
                      _objc_enumerationMutation(*local_5a8 - lVar11,puVar7);
                    }
                    lVar14 = *(long *)(local_5b0 + (long)local_8e0 * 8);
                    local_578 = lVar14;
                    (*(code *)PTR__objc_msgSend_02578628)(lVar14,PTR_s_length_0269cca0);
                    local_5c1 = 0;
                    bVar3 = false;
                    uVar1 = lVar14 != 0;
                    if ((bool)uVar1) {
                      puVar9 = local_440;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_440,PTR_s_objectForKeyedSubscript__0269d098,local_578);
                      _objc_retainAutoreleasedReturnValue();
                      bVar3 = puVar9 == (undefined *)0x0;
                      local_5c1 = uVar1;
                      local_5c0 = puVar9;
                      (*(code *)PTR__objc_release_02578630)(puVar9);
                      uVar1 = local_5c1;
                    }
                    local_5c1 = uVar1;
                    if (bVar3) {
                      uVar12 = local_470;
                      (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_path_0269d4d8);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_440,PTR_s_setObject_forKeyedSubscript__0269d248,uVar12,
                                 local_578);
                      (*(code *)PTR__objc_release_02578630)(uVar12);
                    }
                    local_8e0 = local_8e0 + 1;
                  } while (local_8e0 < local_8d8);
                  local_8d8 = puVar7;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_5b8,
                             auStack_260,0x10);
                  local_8e0 = (undefined *)0x0;
                } while (local_8d8 != (undefined *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(puVar7);
              local_370 = 5;
              _objc_storeStrong(&local_570);
              _objc_storeStrong(&local_568,0);
              _objc_storeStrong(&local_548,0);
            }
          }
          else {
            uVar12 = local_470;
            (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_path_0269d4d8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(uVar12);
            uVar12 = local_470;
            (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_path_0269d4d8);
            _objc_retainAutoreleasedReturnValue();
            IVar5 = local_340;
            (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_length_0269cca0);
            local_4c8 = IVar5 + 1;
            uVar13 = local_470;
            (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_path_0269d4d8);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar13;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar13);
            local_810 = uVar8;
            if (local_4c8 < uVar8) {
              local_810 = local_4c8;
            }
            local_4d8 = local_810;
            uVar13 = uVar12;
            local_4d0 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar12,PTR_s_substringFromIndex__0269d120,local_810);
            _objc_retainAutoreleasedReturnValue();
            local_4c0 = uVar13;
            (*(code *)PTR__objc_release_02578630)(uVar12);
            uVar12 = local_470;
            (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_lastPathComponent_026ca780);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar12;
            FUN_015ca2a4();
            _objc_retainAutoreleasedReturnValue();
            local_4e0 = uVar13;
            (*(code *)PTR__objc_release_02578630)(uVar12);
            uVar12 = local_4c0;
            FUN_015ca2a4();
            _objc_retainAutoreleasedReturnValue();
            local_4e8 = uVar12;
            _memset(auStack_530,0,0x40);
            local_1e0 = local_4e0;
            local_1d8 = local_4e8;
            puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_1e0,2);
            _objc_retainAutoreleasedReturnValue();
            local_838 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_838 != (undefined *)0x0) {
              lVar11 = *local_520;
              local_840 = (undefined *)0x0;
              do {
                do {
                  if (*local_520 - lVar11 != 0) {
                    _objc_enumerationMutation(*local_520 - lVar11,puVar7);
                  }
                  lVar14 = *(long *)(local_528 + (long)local_840 * 8);
                  local_4f0 = lVar14;
                  (*(code *)PTR__objc_msgSend_02578628)(lVar14,PTR_s_length_0269cca0);
                  local_539 = 0;
                  bVar3 = false;
                  uVar1 = lVar14 != 0;
                  if ((bool)uVar1) {
                    puVar9 = local_448;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_448,PTR_s_objectForKeyedSubscript__0269d098,local_4f0);
                    _objc_retainAutoreleasedReturnValue();
                    bVar3 = puVar9 == (undefined *)0x0;
                    local_539 = uVar1;
                    local_538 = puVar9;
                    (*(code *)PTR__objc_release_02578630)(puVar9);
                    uVar1 = local_539;
                  }
                  local_539 = uVar1;
                  if (bVar3) {
                    uVar12 = local_470;
                    (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_path_0269d4d8);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_448,PTR_s_setObject_forKeyedSubscript__0269d248,uVar12,
                               local_4f0);
                    (*(code *)PTR__objc_release_02578630)(uVar12);
                  }
                  local_840 = local_840 + 1;
                } while (local_840 < local_838);
                local_838 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_530,
                           auStack_1d0,0x10);
                local_840 = (undefined *)0x0;
              } while (local_838 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar7);
            local_370 = 5;
            _objc_storeStrong(&local_4e8);
            _objc_storeStrong(&local_4e0,0);
            _objc_storeStrong(&local_4c0,0);
          }
          _objc_storeStrong(&local_4b8,0);
          local_7b0 = local_7b0 + 1;
        } while (local_7b0 < local_7a8);
        local_7a8 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4b0,auStack_150,
                   0x10);
        local_7b0 = (undefined *)0x0;
      } while (local_7a8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_setPngPaths__026b0e80,local_430);
    (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_setSvgPaths__026b0e88,local_438);
    (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_setCssPaths__026b0e90,local_440);
    (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_setXmlNamePaths__026b0e98,local_448);
    (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_setCssFilePaths__026b0ea0,local_450);
    (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_setXmlPaths__026b0ea8,local_458);
    (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_setCarCatalogs__026b0eb0,local_460);
    _objc_storeStrong(&local_460);
    _objc_storeStrong(&local_458,0);
    _objc_storeStrong(&local_450,0);
    _objc_storeStrong(&local_448,0);
    _objc_storeStrong(&local_440,0);
    _objc_storeStrong(&local_438,0);
    _objc_storeStrong(&local_430,0);
    _objc_storeStrong(&local_408,0);
    _objc_storeStrong(&local_398,0);
    _objc_storeStrong(&local_390,0);
    _objc_storeStrong(&local_388,0);
    _objc_storeStrong(local_380,0);
    local_370 = 0;
  }
  _objc_storeStrong(&local_340);
  _objc_storeStrong(&local_328,0);
  _objc_storeStrong(&local_318,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


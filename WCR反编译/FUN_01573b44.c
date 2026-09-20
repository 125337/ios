// FUN_01573b44 @ 01573b44

byte FUN_01573b44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  cfstringStruct *pcVar9;
  char *pcVar10;
  dispatch_time_t dVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 *puVar16;
  uint local_77c;
  undefined *local_738;
  undefined *local_730;
  undefined *local_6f8;
  undefined *local_6f0;
  undefined *local_6b8;
  undefined *local_6b0;
  undefined *local_648;
  undefined *local_640;
  cfstringStruct *local_618;
  ulong local_5d8;
  ulong local_5d0;
  undefined *local_5a0;
  undefined4 local_598;
  undefined4 local_594;
  code *local_590;
  undefined *local_588;
  char *local_580;
  ulong local_578;
  byte local_569;
  ulong local_568;
  ulong local_560;
  char *local_558;
  cfstringStruct *local_550;
  char *local_548;
  cfstringStruct *local_540;
  cfstringStruct *local_538;
  char *local_530;
  ulong local_528;
  undefined *local_520;
  char *local_518;
  undefined *local_510;
  undefined *local_508;
  undefined8 local_500;
  undefined1 auStack_4f8 [8];
  long local_4f0;
  long *local_4e8;
  undefined8 local_4b8;
  undefined1 auStack_4b0 [8];
  long local_4a8;
  long *local_4a0;
  undefined8 local_470;
  undefined1 auStack_468 [8];
  long local_460;
  long *local_458;
  undefined8 local_428;
  long local_420;
  undefined *local_418;
  undefined *local_410;
  undefined *local_408;
  ulong local_400;
  undefined1 auStack_3f8 [8];
  long local_3f0;
  long *local_3e8;
  undefined8 local_3b8;
  ulong local_3b0;
  cfstringStruct *local_3a8;
  undefined *local_3a0;
  ulong local_398;
  int local_38c;
  long local_388;
  undefined1 auStack_380 [8];
  long local_378;
  long *local_370;
  long local_340;
  ulong local_338;
  ulong local_330;
  ulong local_328;
  undefined8 local_320;
  ulong local_318;
  byte local_309;
  undefined1 auStack_308 [128];
  undefined1 auStack_288 [128];
  undefined1 auStack_208 [128];
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_318 = 0;
  _objc_storeStrong(&local_318,param_1);
  local_320 = 0;
  _objc_storeStrong(&local_320,param_2);
  uVar2 = local_318;
  FUN_01566074(local_318,&cf_contentObj);
  _objc_retainAutoreleasedReturnValue();
  local_328 = uVar2;
  FUN_01566074(uVar2,&cf_mediaList);
  _objc_retainAutoreleasedReturnValue();
  local_338 = 0;
  local_330 = uVar2;
  _memset(auStack_380,0,0x40);
  uVar2 = local_330;
  (*(code *)PTR__objc_retain_02578638)();
  local_5d0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_380,auStack_a8,0x10);
  if (local_5d0 != 0) {
    lVar12 = *local_370;
    local_5d8 = 0;
    do {
      do {
        if (*local_370 - lVar12 != 0) {
          _objc_enumerationMutation(*local_370 - lVar12,uVar2);
        }
        lVar13 = *(long *)(local_378 + local_5d8 * 8);
        local_340 = lVar13;
        FUN_01566074(lVar13,&cf_type);
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar13;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar13);
        local_388 = lVar15;
        if ((lVar15 == 2) || (lVar15 == 5)) {
          _objc_storeStrong(0,&local_338,local_340);
          local_38c = 2;
          goto LAB_01573d78;
        }
        local_5d8 = local_5d8 + 1;
      } while (local_5d8 < local_5d0);
      local_5d0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_380,auStack_a8,0x10);
      local_5d8 = 0;
    } while (local_5d0 != 0);
  }
  local_38c = 0;
LAB_01573d78:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_338 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_b0ReN);
    local_309 = 0;
    local_38c = 1;
  }
  else {
    uVar2 = local_338;
    FUN_01566074(local_338,&cf_type);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_398 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_3a0 = puVar4;
    if (local_398 - 2 == 0) {
      local_618 = &cf_pathForSightData;
      _NSSelectorFromString(0);
    }
    else {
      local_618 = &cf_pathForData;
      _NSSelectorFromString(local_398 - 2);
    }
    local_3a8 = local_618;
    uVar2 = local_338;
    FUN_01533df4(local_338,local_618);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_3b0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((uVar2 & 1) != 0) &&
       (uVar2 = local_3b0, (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_length_0269cca0),
       uVar2 != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_3a0,PTR_s_addObject__0269d180,local_3b0);
    }
    _memset(auStack_3f8,0,0x40);
    local_148 = &cf_pathForExistData;
    local_140 = &cf_pathForHdData;
    local_138 = &cf_pathForSightData;
    local_130 = &cf_pathForData;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_148,
               4);
    _objc_retainAutoreleasedReturnValue();
    local_640 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_640 != (undefined *)0x0) {
      lVar12 = *local_3e8;
      local_648 = (undefined *)0x0;
      do {
        do {
          if (*local_3e8 - lVar12 != 0) {
            _objc_enumerationMutation(*local_3e8 - lVar12,puVar4);
          }
          uVar2 = local_338;
          uVar14 = *(undefined8 *)(local_3f0 + (long)local_648 * 8);
          local_3b8 = uVar14;
          _NSSelectorFromString(uVar14);
          FUN_01533df4(uVar2,uVar14);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_400 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
          if ((((uVar2 & 1) != 0) &&
              (uVar2 = local_400,
              (*(code *)PTR__objc_msgSend_02578628)(local_400,PTR_s_length_0269cca0), uVar2 != 0))
             && (puVar5 = local_3a0,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_3a0,PTR_s_containsObject__0269cbb8,local_400),
                ((ulong)puVar5 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_3a0,PTR_s_addObject__0269d180,local_400);
          }
          _objc_storeStrong(&local_400,0);
          local_648 = local_648 + 1;
        } while (local_648 < local_640);
        local_640 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3f8,auStack_128,
                   0x10);
        local_648 = (undefined *)0x0;
      } while (local_640 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_168 = &cf__mp4;
    local_160 = &cf__mov;
    local_158 = &cf__m4v;
    local_150 = &cf___;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_168)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_188 = &cf__1_temp;
    local_180 = &cf__2_temp;
    local_178 = &cf__temp;
    local_170 = &cf___;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_408 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_188,
               4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_410 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_420 = 0;
    local_418 = puVar4;
    _memset(auStack_468,0,0x40);
    puVar4 = local_3a0;
    (*(code *)PTR__objc_retain_02578638)();
    local_6b0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_468,auStack_208,0x10);
    if (local_6b0 != (undefined *)0x0) {
      lVar12 = *local_458;
      local_6b8 = (undefined *)0x0;
      do {
        do {
          if (*local_458 - lVar12 != 0) {
            _objc_enumerationMutation(*local_458 - lVar12,puVar4);
          }
          local_428 = *(undefined8 *)(local_460 + (long)local_6b8 * 8);
          _memset(auStack_4b0,0,0x40);
          puVar5 = local_410;
          (*(code *)PTR__objc_retain_02578638)();
          local_6f0 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4b0,auStack_288,
                     0x10);
          if (local_6f0 != (undefined *)0x0) {
            lVar15 = *local_4a0;
            local_6f8 = (undefined *)0x0;
            do {
              do {
                if (*local_4a0 - lVar15 != 0) {
                  _objc_enumerationMutation(*local_4a0 - lVar15,puVar5);
                }
                local_470 = *(undefined8 *)(local_4a8 + (long)local_6f8 * 8);
                _memset(auStack_4f8,0,0x40);
                puVar1 = local_408;
                (*(code *)PTR__objc_retain_02578638)();
                local_730 = puVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4f8,
                           auStack_308,0x10);
                if (local_730 != (undefined *)0x0) {
                  lVar13 = *local_4e8;
                  local_738 = (undefined *)0x0;
                  do {
                    do {
                      if (*local_4e8 - lVar13 != 0) {
                        _objc_enumerationMutation(*local_4e8 - lVar13,puVar1);
                      }
                      local_4b8 = *(undefined8 *)(local_4f0 + (long)local_738 * 8);
                      uVar14 = local_428;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_428,PTR_s_stringByAppendingFormat__026a2088,&cf_____);
                      _objc_retainAutoreleasedReturnValue();
                      puVar6 = local_418;
                      local_500 = uVar14;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_418,PTR_s_fileExistsAtPath__026ca630,uVar14);
                      if (((ulong)puVar6 & 1) == 0) {
                        local_38c = 0xb;
                      }
                      else {
                        puVar6 = local_418;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_418,PTR_s_attributesOfItemAtPath_error__0269db08,local_500,
                                   0);
                        _objc_retainAutoreleasedReturnValue();
                        local_508 = puVar6;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar6,PTR_s_objectForKeyedSubscript__0269d098,
                                   *(undefined8 *)PTR__NSFileSize_02578028);
                        _objc_retainAutoreleasedReturnValue();
                        puVar7 = puVar6;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        (*(code *)PTR__objc_release_02578630)(puVar6);
                        puVar16 = puVar7 + -0x7d000;
                        local_510 = puVar7;
                        if (puVar7 < (undefined *)0x7d000 || puVar16 == (undefined1 *)0x0) {
                          local_38c = 0;
                        }
                        else {
                          _objc_storeStrong(puVar16,&local_420,local_500);
                          puVar16 = (undefined1 *)((long)&MACH_HEADER.cpusubtype + 2);
                          local_38c = 10;
                        }
                        _objc_storeStrong(puVar16,&local_508,0);
                      }
                      _objc_storeStrong(&local_500,0);
                      if ((local_38c != 0) && (local_38c != 0xb)) goto LAB_015746a0;
                      local_738 = local_738 + 1;
                    } while (local_738 < local_730);
                    local_730 = puVar1;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4f8,
                               auStack_308,0x10);
                    local_738 = (undefined *)0x0;
                  } while (local_730 != (undefined *)0x0);
                }
                local_38c = 0;
LAB_015746a0:
                (*(code *)PTR__objc_release_02578630)(puVar1);
                lVar13 = local_420;
                (*(code *)PTR__objc_msgSend_02578628)(local_420,PTR_s_length_0269cca0);
                if (lVar13 != 0) {
                  local_38c = 8;
                  goto LAB_0157475c;
                }
                local_6f8 = local_6f8 + 1;
              } while (local_6f8 < local_6f0);
              local_6f0 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4b0,
                         auStack_288,0x10);
              local_6f8 = (undefined *)0x0;
            } while (local_6f0 != (undefined *)0x0);
          }
          local_38c = 0;
LAB_0157475c:
          (*(code *)PTR__objc_release_02578630)(puVar5);
          lVar15 = local_420;
          (*(code *)PTR__objc_msgSend_02578628)(local_420,PTR_s_length_0269cca0);
          if (lVar15 != 0) {
            local_38c = 6;
            goto LAB_01574818;
          }
          local_6b8 = local_6b8 + 1;
        } while (local_6b8 < local_6b0);
        local_6b0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_468,auStack_208,
                   0x10);
        local_6b8 = (undefined *)0x0;
      } while (local_6b0 != (undefined *)0x0);
    }
    local_38c = 0;
LAB_01574818:
    (*(code *)PTR__objc_release_02578630)(puVar4);
    lVar12 = local_420;
    (*(code *)PTR__objc_msgSend_02578628)(local_420,PTR_s_length_0269cca0);
    if (lVar12 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf___gN__b);
      local_309 = 0;
      local_38c = 1;
    }
    else {
      pcVar8 = "SightDraft";
      _objc_getClass();
      local_518 = pcVar8;
      if (pcVar8 == (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_I_zNS_u);
        local_309 = 0;
        local_38c = 1;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_420);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_338;
        local_520 = puVar4;
        FUN_01533df4(local_338,PTR_s_thumbImage_026a5a60);
        _objc_retainAutoreleasedReturnValue();
        local_530 = (char *)0x0;
        pcVar9 = &cf_draftWithVideoURL_thumbImage_;
        local_528 = uVar2;
        _NSSelectorFromString();
        pcVar8 = local_518;
        local_538 = pcVar9;
        (*(code *)PTR__objc_msgSend_02578628)(local_518,PTR_s_respondsToSelector__026ca818,pcVar9);
        if (((ulong)pcVar8 & 1) != 0) {
          pcVar10 = local_518;
          (*(code *)PTR__objc_msgSend_02578628)(local_518,local_538,local_520,local_528);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = local_530;
          local_530 = pcVar10;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
        }
        if (local_530 == (char *)0x0) {
          pcVar9 = &cf_draftWithVideoURL_;
          _NSSelectorFromString();
          pcVar8 = local_518;
          local_540 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)(local_518,PTR_s_respondsToSelector__026ca818,pcVar9)
          ;
          if (((ulong)pcVar8 & 1) != 0) {
            pcVar10 = local_518;
            (*(code *)PTR__objc_msgSend_02578628)(local_518,local_540,local_520);
            _objc_retainAutoreleasedReturnValue();
            pcVar8 = local_530;
            local_530 = pcVar10;
            (*(code *)PTR__objc_release_02578630)(pcVar8);
          }
        }
        if (local_530 == (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_I_z1Y_);
          local_309 = 0;
          local_38c = 1;
        }
        else {
          FUN_01577278(local_530);
          pcVar8 = "WCNewCommitViewController";
          _objc_getClass();
          pcVar9 = &cf_initWithSightDraft_;
          local_548 = pcVar8;
          _NSSelectorFromString();
          local_550 = pcVar9;
          if ((local_548 == (char *)0x0) ||
             (pcVar8 = local_548,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_548,PTR_s_instancesRespondToSelector__0269da90,pcVar9),
             ((ulong)pcVar8 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lSNS_u);
            local_309 = 0;
            local_38c = 1;
          }
          else {
            pcVar8 = local_548;
            _objc_alloc();
            pcVar10 = pcVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_558 = pcVar10;
            (*(code *)PTR__objc_release_02578630)(pcVar8);
            pcVar8 = local_558;
            puVar4 = PTR__OBJC_CLASS___UIViewController_026cdf80;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_isKindOfClass__0269cd68,puVar4);
            if (((ulong)pcVar8 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R__u1Y_);
              local_309 = 0;
              local_38c = 1;
            }
            else {
              FUN_01577320(local_558);
              _WCRefineMarkMomentsForwardEditor(local_558,local_318);
              uVar2 = local_318;
              FUN_01533eb8(local_318,&cf_contentDesc);
              _objc_retainAutoreleasedReturnValue();
              local_560 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
              if (uVar2 == 0) {
                uVar3 = local_328;
                FUN_01533eb8(local_328,&cf_desc);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = local_560;
                local_560 = uVar3;
                (*(code *)PTR__objc_release_02578630)(uVar2);
              }
              uVar2 = local_560;
              (*(code *)PTR__objc_msgSend_02578628)(local_560,PTR_s_lowercaseString_0269d9c0);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = local_560;
              local_568 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)(local_560,PTR_s_length_0269cca0);
              local_77c = 1;
              if (uVar3 != 0) {
                uVar2 = local_568;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_568,PTR_s_isEqualToString__0269ccc8,&cf_sight);
                local_77c = (uint)uVar2;
              }
              local_569 = (byte)local_77c & 1;
              if ((local_77c & 1) == 0) {
                dVar11 = _dispatch_time(0,300000000);
                puVar4 = PTR___dispatch_main_q_02578680;
                _objc_retainAutoreleaseReturnValue();
                _objc_retainAutoreleasedReturnValue();
                pcVar8 = local_558;
                local_5a0 = PTR___NSConcreteStackBlock_02578660;
                local_598 = 0xc2000000;
                local_594 = 0;
                local_590 = FUN_015774bc;
                local_588 = &DAT_0257a7a0;
                (*(code *)PTR__objc_retain_02578638)();
                uVar2 = local_560;
                local_580 = pcVar8;
                (*(code *)PTR__objc_retain_02578638)();
                local_578 = uVar2;
                _dispatch_after(dVar11,puVar4,&local_5a0);
                (*(code *)PTR__objc_release_02578630)(puVar4);
                _objc_storeStrong(&local_578);
                _objc_storeStrong(&local_580,0);
              }
              FUN_01572904(local_320,local_558);
              local_309 = 1;
              local_38c = 1;
              _objc_storeStrong(&local_568);
              _objc_storeStrong(&local_560,0);
            }
            _objc_storeStrong(&local_558,0);
          }
        }
        _objc_storeStrong(&local_530);
        _objc_storeStrong(&local_528,0);
        _objc_storeStrong(&local_520,0);
      }
    }
    _objc_storeStrong(&local_420);
    _objc_storeStrong(&local_418,0);
    _objc_storeStrong(&local_410,0);
    _objc_storeStrong(&local_408,0);
    _objc_storeStrong(&local_3b0,0);
    _objc_storeStrong(&local_3a0,0);
  }
  _objc_storeStrong(&local_338);
  _objc_storeStrong(&local_330,0);
  _objc_storeStrong(&local_328,0);
  _objc_storeStrong(&local_320,0);
  _objc_storeStrong(&local_318,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_309 & 1;
}


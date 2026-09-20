// FUN_00284980 @ 00284980

void FUN_00284980(double param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  cfstringStruct *pcVar11;
  double local_a60;
  cfstringStruct *local_8b8;
  cfstringStruct *local_8a0;
  cfstringStruct *local_7e8;
  cfstringStruct *local_7c8;
  cfstringStruct *local_798;
  cfstringStruct *local_790;
  uint local_740;
  undefined *local_6f8;
  undefined *local_6f0;
  cfstringStruct *local_6a8;
  cfstringStruct *local_650;
  cfstringStruct *local_648;
  double local_5f0;
  uint local_5d4;
  undefined *local_5b0;
  undefined4 local_5a8;
  undefined4 local_5a4;
  code *local_5a0;
  undefined *local_598;
  undefined *local_590;
  byte local_588;
  double local_580;
  undefined *local_578;
  undefined1 local_569;
  undefined *local_568;
  undefined4 local_560;
  undefined4 local_55c;
  code *local_558;
  undefined *local_550;
  cfstringStruct *local_548;
  undefined1 local_539;
  undefined *local_538;
  undefined4 local_530;
  undefined4 local_52c;
  code *local_528;
  undefined *local_520;
  cfstringStruct *local_518;
  cfstringStruct *local_510;
  cfstringStruct *local_508;
  undefined1 local_4f9;
  undefined *local_4f8;
  undefined4 local_4f0;
  undefined4 local_4ec;
  code *local_4e8;
  undefined *local_4e0;
  cfstringStruct *local_4d8;
  cfstringStruct *local_4d0;
  cfstringStruct *local_4c8;
  undefined1 local_4b9;
  undefined *local_4b8;
  undefined4 local_4b0;
  undefined4 local_4ac;
  code *local_4a8;
  undefined *local_4a0;
  cfstringStruct *local_498;
  cfstringStruct *local_490;
  cfstringStruct *local_488;
  undefined1 local_47a;
  undefined1 local_479;
  undefined *local_478;
  undefined4 local_470;
  undefined4 local_46c;
  code *local_468;
  undefined *local_460;
  cfstringStruct *local_458;
  cfstringStruct *local_450;
  cfstringStruct *local_448;
  cfstringStruct *local_440;
  undefined1 auStack_438 [8];
  long local_430;
  long *local_428;
  cfstringStruct *local_3f8;
  cfstringStruct *local_3f0;
  undefined *local_3e8;
  byte local_3d9;
  undefined *local_3d8;
  cfstringStruct *local_3d0;
  undefined8 local_3c8;
  undefined1 auStack_3c0 [8];
  long local_3b8;
  long *local_3b0;
  undefined8 local_380;
  byte local_372;
  byte local_371;
  cfstringStruct *local_370;
  cfstringStruct *local_368;
  byte local_359;
  cfstringStruct *local_358;
  byte local_349;
  undefined1 auStack_348 [8];
  long local_340;
  long *local_338;
  ulong local_308;
  byte local_2f9;
  cfstringStruct *local_2f8;
  undefined *local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  code *local_2e0;
  undefined *local_2d8;
  cfstringStruct *local_2d0;
  double local_2c8;
  byte local_2b9;
  undefined *local_2b8;
  byte local_2a9;
  cfstringStruct *local_2a8;
  int local_2a0;
  double local_290;
  cfstringStruct *local_288;
  cfstringStruct *local_280;
  cfstringStruct *local_278;
  cfstringStruct *local_270;
  undefined **local_268;
  cfstringStruct *local_260;
  cfstringStruct *local_258;
  cfstringStruct *local_250;
  undefined **local_248;
  cfstringStruct *local_240;
  cfstringStruct *local_238;
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  undefined **local_220;
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  undefined **local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  undefined **local_1c8;
  cfstringStruct *local_1c0;
  undefined1 auStack_1b8 [128];
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_a60 = DAT_02323e88;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_288 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_288,param_2);
  local_290 = param_1;
  if (local_288 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gS0RSQ_);
    local_2a0 = 1;
  }
  else {
    pcVar2 = local_288;
    FUN_00276030();
    _objc_retainAutoreleasedReturnValue();
    local_2a9 = pcVar2 != (cfstringStruct *)0x0;
    local_2b9 = 0;
    local_5d4 = 0;
    local_2a8 = pcVar2;
    if ((bool)local_2a9) {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_2b9 = 1;
      local_2b8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_5d4 = (uint)puVar3;
    }
    if ((local_2b9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_2b8);
    }
    if ((local_5d4 & 1) == 0) {
      pcVar2 = local_288;
      FUN_0027b798();
      _objc_retainAutoreleasedReturnValue();
      local_2f9 = 0;
      local_2f8 = pcVar2;
      if ((local_2a9 & 1) == 0) {
        _memset(auStack_348,0,0x40);
        pcVar2 = local_2f8;
        (*(code *)PTR__objc_retain_02578638)();
        local_648 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_348,auStack_a8,
                   0x10);
        if (local_648 != (cfstringStruct *)0x0) {
          lVar8 = *local_338;
          local_650 = (cfstringStruct *)0x0;
          do {
            do {
              if (*local_338 - lVar8 != 0) {
                _objc_enumerationMutation(*local_338 - lVar8,pcVar2);
              }
              uVar9 = *(ulong *)(local_340 + (long)local_650 * 8);
              local_308 = uVar9;
              FUN_00286a38();
              if ((uVar9 & 1) != 0) {
                local_2f9 = 1;
                local_2a0 = 2;
                goto LAB_00284e20;
              }
              local_650 = (cfstringStruct *)((long)&local_650->field0_0x0 + 1);
            } while (local_650 < local_648);
            local_648 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_348,auStack_a8
                       ,0x10);
            local_650 = (cfstringStruct *)0x0;
          } while (local_648 != (cfstringStruct *)0x0);
        }
        local_2a0 = 0;
LAB_00284e20:
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      local_359 = 0;
      local_349 = true;
      if ((local_2a9 & 1) == 0) {
        pcVar2 = local_288;
        FUN_00286c50();
        _objc_retainAutoreleasedReturnValue();
        local_359 = 1;
        local_358 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_349 = pcVar2 != (cfstringStruct *)0x0;
      }
      if ((local_359 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_358);
      }
      local_371 = 0;
      bVar1 = local_2a8 == (cfstringStruct *)0x0;
      if (bVar1) {
        local_6a8 = local_2f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_370 = local_6a8;
      }
      else {
        local_6a8 = local_2a8;
      }
      local_371 = bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_368 = local_6a8;
      if ((local_371 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_370);
      }
      local_372 = 0;
      if (local_368 != (cfstringStruct *)0x0) {
        pcVar2 = local_368;
        FUN_0028717c();
        _objc_retainAutoreleasedReturnValue();
        pcVar11 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        if (pcVar11 == (cfstringStruct *)0x0) {
          _memset(auStack_3c0,0,0x40);
          local_138 = &cf_coverPath;
          local_130 = &cf_thumbPath;
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_138,2);
          _objc_retainAutoreleasedReturnValue();
          local_6f0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_6f0 != (undefined *)0x0) {
            lVar8 = *local_3b0;
            local_6f8 = (undefined *)0x0;
            do {
              do {
                if (*local_3b0 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_3b0 - lVar8,puVar3);
                }
                uVar10 = *(undefined8 *)(local_3b8 + (long)local_6f8 * 8);
                local_380 = uVar10;
                _NSSelectorFromString();
                pcVar2 = local_368;
                local_3c8 = uVar10;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_368,PTR_s_respondsToSelector__026ca818,uVar10);
                if (((ulong)pcVar2 & 1) != 0) {
                  pcVar2 = local_368;
                  (*(code *)PTR__objc_msgSend_02578628)(local_368,local_3c8);
                  _objc_retainAutoreleasedReturnValue();
                  local_3d9 = 0;
                  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_3d0 = pcVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar5)
                  ;
                  local_740 = 0;
                  if (((ulong)pcVar2 & 1) != 0) {
                    puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSFileManager_026ce158,
                               PTR_s_defaultManager_026ca5f0);
                    _objc_retainAutoreleasedReturnValue();
                    local_3d9 = 1;
                    local_3d8 = puVar5;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    local_740 = (uint)puVar5;
                  }
                  if ((local_3d9 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_3d8);
                  }
                  if ((local_740 & 1) == 0) {
                    local_2a0 = 0;
                  }
                  else {
                    local_372 = 1;
                    local_2a0 = 4;
                  }
                  _objc_storeStrong(&local_3d0,0);
                  if (local_2a0 != 0) goto LAB_00285434;
                }
                local_6f8 = local_6f8 + 1;
              } while (local_6f8 < local_6f0);
              local_6f0 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3c0,
                         auStack_128,0x10);
              local_6f8 = (undefined *)0x0;
            } while (local_6f0 != (undefined *)0x0);
          }
          local_2a0 = 0;
LAB_00285434:
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        else {
          local_372 = 1;
        }
      }
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_3e8 = puVar3;
      if ((local_2a9 & 1) != 0) {
        pcVar2 = local_2a8;
        FUN_0028796c();
        _objc_retainAutoreleasedReturnValue();
        local_3f0 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
        if (pcVar2 == (cfstringStruct *)0x0) {
          pcVar2 = local_2a8;
          FUN_00289698(0);
          _objc_retainAutoreleasedReturnValue();
          local_488 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_quality);
          _objc_retainAutoreleasedReturnValue();
          local_8a0 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_8a0 = &cf___;
          }
          local_1f0 = local_8a0;
          pcVar11 = local_488;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_488,PTR_s_objectForKeyedSubscript__0269d098,&cf_size);
          _objc_retainAutoreleasedReturnValue();
          local_8b8 = pcVar11;
          if (pcVar11 == (cfstringStruct *)0x0) {
            local_8b8 = &cf___;
          }
          local_1e8 = local_8b8;
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_1f0,2);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = &cf_N_;
          FUN_00288f10();
          _objc_retainAutoreleasedReturnValue();
          local_490 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(pcVar11);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          pcVar2 = local_288;
          puVar3 = local_3e8;
          local_210 = &cf_title;
          local_200 = local_490;
          local_208 = &cf_handler;
          ppuVar7 = &local_4b8;
          local_4b8 = PTR___NSConcreteStackBlock_02578660;
          local_4b0 = 0xc2000000;
          local_4ac = 0;
          local_4a8 = FUN_0028a03c;
          local_4a0 = &DAT_02578c20;
          (*(code *)PTR__objc_retain_02578638)();
          local_498 = pcVar2;
          local_4b9 = 1;
          _objc_retainBlock();
          puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_1f8 = ppuVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_200,&local_210,2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
          local_4b9 = 0;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(ppuVar7);
          _objc_storeStrong(&local_498);
          _objc_storeStrong(&local_490,0);
          _objc_storeStrong(&local_488,0);
        }
        else {
          _memset(auStack_438,0,0x40);
          pcVar2 = local_3f0;
          (*(code *)PTR__objc_retain_02578638)();
          local_790 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_438,auStack_1b8,
                     0x10);
          if (local_790 != (cfstringStruct *)0x0) {
            lVar8 = *local_428;
            local_798 = (cfstringStruct *)0x0;
            do {
              do {
                if (*local_428 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_428 - lVar8,pcVar2);
                }
                pcVar11 = *(cfstringStruct **)(local_430 + (long)local_798 * 8);
                local_3f8 = pcVar11;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar11,PTR_s_objectForKeyedSubscript__0269d098,&cf_quality);
                _objc_retainAutoreleasedReturnValue();
                local_7c8 = pcVar11;
                if (pcVar11 == (cfstringStruct *)0x0) {
                  local_7c8 = &cf_N_;
                }
                pcVar6 = local_3f8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_3f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_size);
                _objc_retainAutoreleasedReturnValue();
                local_7e8 = pcVar6;
                if (pcVar6 == (cfstringStruct *)0x0) {
                  local_7e8 = &cf___;
                }
                local_1c0 = local_7e8;
                puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70
                           ,&local_1c0,1);
                _objc_retainAutoreleasedReturnValue();
                FUN_00288f10();
                _objc_retainAutoreleasedReturnValue();
                local_440 = local_7c8;
                (*(code *)PTR__objc_release_02578630)(puVar3);
                (*(code *)PTR__objc_release_02578630)(pcVar6);
                (*(code *)PTR__objc_release_02578630)(pcVar11);
                pcVar11 = local_3f8;
                (*(code *)PTR__objc_retain_02578638)();
                pcVar6 = local_288;
                puVar3 = local_3e8;
                local_448 = pcVar11;
                local_1e0 = &cf_title;
                local_1d0 = local_440;
                local_1d8 = &cf_handler;
                ppuVar7 = &local_478;
                local_478 = PTR___NSConcreteStackBlock_02578660;
                local_470 = 0xc2000000;
                local_46c = 0;
                local_468 = FUN_00289398;
                local_460 = &DAT_02578e60;
                (*(code *)PTR__objc_retain_02578638)();
                pcVar11 = local_448;
                local_458 = pcVar6;
                local_47a = 1;
                (*(code *)PTR__objc_retain_02578638)();
                local_450 = pcVar11;
                local_479 = 1;
                _objc_retainBlock();
                puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_1c8 = ppuVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_1d0,&local_1e0,2);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
                local_479 = 0;
                local_47a = 0;
                (*(code *)PTR__objc_release_02578630)(puVar5);
                (*(code *)PTR__objc_release_02578630)(ppuVar7);
                _objc_storeStrong(&local_450);
                _objc_storeStrong(&local_458,0);
                _objc_storeStrong(&local_448,0);
                _objc_storeStrong(&local_440,0);
                local_798 = (cfstringStruct *)((long)&local_798->field0_0x0 + 1);
              } while (local_798 < local_790);
              local_790 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_438,
                         auStack_1b8,0x10);
              local_798 = (cfstringStruct *)0x0;
            } while (local_790 != (cfstringStruct *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        _objc_storeStrong(&local_3f0,0);
      }
      if ((local_349 & 1) != 0) {
        pcVar2 = local_288;
        FUN_0028a188(local_288,local_2a8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_4c8 = pcVar2;
        local_218 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_218,1);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = &cf_ScS;
        FUN_00288f10();
        _objc_retainAutoreleasedReturnValue();
        local_4d0 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar2 = local_288;
        puVar3 = local_3e8;
        local_238 = &cf_title;
        local_228 = local_4d0;
        local_230 = &cf_handler;
        ppuVar7 = &local_4f8;
        local_4f8 = PTR___NSConcreteStackBlock_02578660;
        local_4f0 = 0xc2000000;
        local_4ec = 0;
        local_4e8 = FUN_0028ae64;
        local_4e0 = &DAT_02578c20;
        (*(code *)PTR__objc_retain_02578638)();
        local_4d8 = pcVar2;
        local_4f9 = 1;
        _objc_retainBlock();
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_220 = ppuVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_228,&local_238,2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
        local_4f9 = 0;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(ppuVar7);
        _objc_storeStrong(&local_4d8);
        _objc_storeStrong(&local_4d0,0);
        _objc_storeStrong(&local_4c8,0);
      }
      if ((local_372 & 1) != 0) {
        pcVar2 = local_368;
        FUN_0028b0f8();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_508 = pcVar2;
        local_240 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_240,1);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = &cf_cS_b;
        FUN_00288f10();
        _objc_retainAutoreleasedReturnValue();
        local_510 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar2 = local_288;
        puVar3 = local_3e8;
        local_260 = &cf_title;
        local_250 = local_510;
        local_258 = &cf_handler;
        ppuVar7 = &local_538;
        local_538 = PTR___NSConcreteStackBlock_02578660;
        local_530 = 0xc2000000;
        local_52c = 0;
        local_528 = FUN_0028b2c8;
        local_520 = &DAT_02578c20;
        (*(code *)PTR__objc_retain_02578638)();
        local_518 = pcVar2;
        local_539 = 1;
        _objc_retainBlock();
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_248 = ppuVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_250,&local_260,2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
        local_539 = 0;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(ppuVar7);
        _objc_storeStrong(&local_518);
        _objc_storeStrong(&local_510,0);
        _objc_storeStrong(&local_508,0);
      }
      pcVar2 = local_288;
      puVar3 = local_3e8;
      if ((local_2f9 & 1) != 0) {
        local_280 = &cf_title;
        local_270 = &cf_N_VGr;
        local_278 = &cf_handler;
        ppuVar7 = &local_568;
        local_568 = PTR___NSConcreteStackBlock_02578660;
        local_560 = 0xc2000000;
        local_55c = 0;
        local_558 = FUN_0028bb50;
        local_550 = &DAT_02578c20;
        (*(code *)PTR__objc_retain_02578638)();
        local_548 = pcVar2;
        local_569 = 1;
        _objc_retainBlock();
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_268 = ppuVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_270,&local_280,2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
        local_569 = 0;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(ppuVar7);
        _objc_storeStrong(&local_548,0);
      }
      puVar3 = local_3e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_3e8,PTR_s_count_0269cfe0);
      if (puVar3 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRQ_eSN_Dn);
        local_2a0 = 1;
      }
      else {
        puVar3 = local_3e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_3e8,PTR_s_copy_0269d150);
        if (local_290 <= 0.0) {
        }
        else {
          local_a60 = local_290;
        }
        local_580 = local_a60;
        local_578 = puVar3;
        dVar4 = _dispatch_time(0,(long)(local_a60 * 1000000000.0));
        puVar3 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = local_578;
        local_5b0 = PTR___NSConcreteStackBlock_02578660;
        local_5a8 = 0xc2000000;
        local_5a4 = 0;
        local_5a0 = FUN_0028c4c0;
        local_598 = &DAT_0257b488;
        local_588 = local_2a9 & 1;
        (*(code *)PTR__objc_retain_02578638)();
        local_590 = puVar5;
        _dispatch_after(dVar4,puVar3,&local_5b0);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_storeStrong(&local_590);
        _objc_storeStrong(&local_578,0);
        local_2a0 = 0;
      }
      _objc_storeStrong(&local_3e8);
      _objc_storeStrong(&local_368,0);
      _objc_storeStrong(&local_2f8,0);
    }
    else {
      if (local_290 <= 0.0) {
        local_5f0 = local_a60;
      }
      else {
        local_5f0 = local_290;
      }
      local_2c8 = local_5f0;
      dVar4 = _dispatch_time(0,(long)(local_5f0 * 1000000000.0));
      puVar3 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_288;
      local_2f0 = PTR___NSConcreteStackBlock_02578660;
      local_2e8 = 0xc2000000;
      local_2e4 = 0;
      local_2e0 = FUN_002868e0;
      local_2d8 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_2d0 = pcVar2;
      _dispatch_after(dVar4,puVar3,&local_2f0);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_2a0 = 1;
      _objc_storeStrong(&local_2d0,0);
    }
    _objc_storeStrong(&local_2a8,0);
  }
  _objc_storeStrong(&local_288,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


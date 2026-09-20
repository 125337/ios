// FUN_005b7010 @ 005b7010

void FUN_005b7010(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  ulong local_4d0;
  ulong local_4c8;
  ulong local_420;
  ulong local_418;
  ulong local_398;
  ulong local_390;
  ulong local_388;
  undefined *local_380;
  undefined4 local_378;
  undefined4 local_374;
  code *local_370;
  undefined *local_368;
  cfstringStruct *local_360;
  cfstringStruct *local_358;
  ulong local_350;
  undefined **local_348;
  undefined *local_340;
  undefined4 local_338;
  undefined4 local_334;
  code *local_330;
  undefined *local_328;
  cfstringStruct *local_320;
  cfstringStruct *local_318;
  ulong local_310;
  undefined **local_308;
  undefined *local_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  code *local_2f0;
  undefined *local_2e8;
  cfstringStruct *local_2e0;
  cfstringStruct *local_2d8;
  ulong local_2d0;
  undefined **local_2c8;
  undefined *local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  code *local_2b0;
  undefined *local_2a8;
  cfstringStruct *local_2a0;
  cfstringStruct *local_298;
  ulong local_290;
  undefined **local_288;
  undefined *local_280;
  undefined4 local_278;
  undefined4 local_274;
  code *local_270;
  undefined *local_268;
  cfstringStruct *local_260;
  cfstringStruct *local_258;
  ulong local_250;
  undefined **local_248;
  ulong local_240;
  undefined1 auStack_238 [8];
  long local_230;
  long *local_228;
  ulong local_1f8;
  byte local_1ed;
  byte local_1ec;
  byte local_1eb;
  byte local_1ea;
  byte local_1e9;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  ulong local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  ulong local_178;
  byte local_169;
  ulong local_168;
  ulong local_160;
  int local_158;
  undefined1 local_141;
  undefined8 local_140;
  undefined8 local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_141 = SUB81(puVar3,0);
  if (((ulong)puVar3 & 1) == 0) {
    (*DAT_028cb718)(local_130,local_138,local_140);
    local_158 = 1;
  }
  else {
    uVar4 = local_130;
    _objc_getAssociatedObject(local_130,&DAT_028cb78d);
    _objc_retainAutoreleasedReturnValue();
    local_160 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_boolValue_026ca540);
    if ((uVar4 & 1) == 0) {
      uVar4 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_valueForKey__0269d128,&cf__buttonTitleList);
      _objc_retainAutoreleasedReturnValue();
      local_169 = 0;
      local_168 = uVar4;
      if ((uVar4 != 0) &&
         ((*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_count_0269cfe0), uVar4 != 0)) {
        _memset(auStack_1b8,0,0x40);
        uVar4 = local_168;
        (*(code *)PTR__objc_retain_02578638)();
        local_418 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10
                  );
        if (local_418 != 0) {
          lVar8 = *local_1a8;
          local_420 = 0;
          do {
            do {
              if (*local_1a8 - lVar8 != 0) {
                _objc_enumerationMutation(*local_1a8 - lVar8,uVar4);
              }
              uVar9 = *(ulong *)(local_1b0 + local_420 * 8);
              local_1c0 = 0;
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_178 = uVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar2);
              if ((uVar9 & 1) == 0) {
                uVar9 = local_178;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_178,PTR_s_respondsToSelector__026ca818,PTR_s_title_0269d250);
                if ((uVar9 & 1) != 0) {
                  uVar5 = local_178;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_178,PTR_s_performSelector__026ca7b8,PTR_s_title_0269d250);
                  _objc_retainAutoreleasedReturnValue();
                  uVar9 = local_1c0;
                  local_1c0 = uVar5;
                  (*(code *)PTR__objc_release_02578630)(uVar9);
                }
              }
              else {
                _objc_storeStrong(&local_1c0,local_178);
              }
              uVar9 = local_1c0;
              if (local_1c0 == 0) {
LAB_005b750c:
                local_158 = 0;
              }
              else {
                puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar2);
                if (((uVar9 & 1) == 0) ||
                   ((uVar9 = local_1c0,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1c0,PTR_s_isEqualToString__0269ccc8,&cf_n_CgP),
                    (uVar9 & 1) == 0 &&
                    (uVar9 = local_1c0,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1c0,PTR_s_isEqualToString__0269ccc8,&cf_b), (uVar9 & 1) == 0)))
                   ) goto LAB_005b750c;
                local_169 = 1;
                local_158 = 2;
              }
              _objc_storeStrong(&local_1c0,0);
              if (local_158 != 0) goto LAB_005b75a0;
              local_420 = local_420 + 1;
            } while (local_420 < local_418);
            local_418 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                       0x10);
            local_420 = 0;
          } while (local_418 != 0);
        }
        local_158 = 0;
LAB_005b75a0:
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      if ((local_169 & 1) != 0) {
        pcVar6 = &cf_WCActionSheet;
        _NSClassFromString();
        local_1d0 = (cfstringStruct *)0x0;
        local_1c8 = pcVar6;
        if (pcVar6 != (cfstringStruct *)0x0) {
          _objc_getAssociatedObject(pcVar6,&DAT_028cb77d);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_1d0;
          local_1d0 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
        if (local_1d0 != (cfstringStruct *)0x0) {
          pcVar6 = &cf_WCActionSheet;
          _NSClassFromString();
          local_1e0 = (cfstringStruct *)0x0;
          local_1d8 = pcVar6;
          if (pcVar6 != (cfstringStruct *)0x0) {
            _objc_getAssociatedObject(pcVar6,&DAT_028cb77e);
            _objc_retainAutoreleasedReturnValue();
            pcVar1 = local_1e0;
            local_1e0 = pcVar6;
            (*(code *)PTR__objc_release_02578630)(pcVar1);
          }
          pcVar6 = local_1d0;
          (*(code *)PTR__objc_retain_02578638)();
          local_1e8 = pcVar6;
          local_1e9 = 0;
          local_1ea = 0;
          local_1eb = 0;
          local_1ec = 0;
          local_1ed = 0;
          _memset(auStack_238,0,0x40);
          uVar4 = local_168;
          (*(code *)PTR__objc_retain_02578638)();
          local_4c8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_128,
                     0x10);
          if (local_4c8 != 0) {
            lVar8 = *local_228;
            local_4d0 = 0;
            do {
              do {
                if (*local_228 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_228 - lVar8,uVar4);
                }
                uVar9 = *(ulong *)(local_230 + local_4d0 * 8);
                local_240 = 0;
                puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_1f8 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar2);
                if ((uVar9 & 1) == 0) {
                  uVar9 = local_1f8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1f8,PTR_s_respondsToSelector__026ca818,PTR_s_title_0269d250);
                  if ((uVar9 & 1) != 0) {
                    uVar5 = local_1f8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1f8,PTR_s_performSelector__026ca7b8,PTR_s_title_0269d250);
                    _objc_retainAutoreleasedReturnValue();
                    uVar9 = local_240;
                    local_240 = uVar5;
                    (*(code *)PTR__objc_release_02578630)(uVar9);
                  }
                }
                else {
                  _objc_storeStrong(&local_240,local_1f8);
                }
                if (local_240 != 0) {
                  uVar9 = local_240;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_240,PTR_s_isEqualToString__0269ccc8,&cf_lS);
                  if ((((uVar9 & 1) == 0) &&
                      (uVar9 = local_240,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_240,PTR_s_isEqualToString__0269ccc8,&cf_lSgSW),
                      (uVar9 & 1) == 0)) &&
                     (uVar9 = local_240,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_240,PTR_s_isEqualToString__0269ccc8,&cf_lgSW),
                     (uVar9 & 1) == 0)) {
                    uVar9 = local_240;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_240,PTR_s_isEqualToString__0269ccc8,&cf_lSJ_Y);
                    if ((((uVar9 & 1) == 0) &&
                        (uVar9 = local_240,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_240,PTR_s_isEqualToString__0269ccc8,&cf_lS_YS),
                        (uVar9 & 1) == 0)) &&
                       ((uVar9 = local_240,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_240,PTR_s_isEqualToString__0269ccc8,&cf_lS0RO),
                        (uVar9 & 1) == 0 &&
                        (uVar9 = local_240,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_240,PTR_s_isEqualToString__0269ccc8,&cf_lSO),
                        (uVar9 & 1) == 0)))) {
                      uVar9 = local_240;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_240,PTR_s_isEqualToString__0269ccc8,&cf_O__S_OlS);
                      if (((uVar9 & 1) == 0) &&
                         (uVar9 = local_240,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_240,PTR_s_isEqualToString__0269ccc8,&cf_O__lS),
                         (uVar9 & 1) == 0)) {
                        uVar9 = local_240;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_240,PTR_s_isEqualToString__0269ccc8,&cf_Rd);
                        if (((uVar9 & 1) == 0) &&
                           (uVar9 = local_240,
                           (*(code *)PTR__objc_msgSend_02578628)
                                     (local_240,PTR_s_isEqualToString__0269ccc8,&cf_Rddky),
                           (uVar9 & 1) == 0)) {
                          uVar9 = local_240;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_240,PTR_s_isEqualToString__0269ccc8,&cf__O_);
                          if ((uVar9 & 1) != 0) {
                            local_1ed = 1;
                          }
                        }
                        else {
                          local_1ec = 1;
                        }
                      }
                      else {
                        local_1eb = 1;
                      }
                    }
                    else {
                      local_1ea = 1;
                    }
                  }
                  else {
                    local_1e9 = 1;
                  }
                }
                _objc_storeStrong(&local_240,0);
                local_4d0 = local_4d0 + 1;
              } while (local_4d0 < local_4c8);
              local_4c8 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,
                         auStack_128,0x10);
              local_4d0 = 0;
            } while (local_4c8 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar4);
          pcVar6 = local_1e0;
          if ((local_1ed & 1) == 0) {
            ppuVar7 = &local_280;
            local_280 = PTR___NSConcreteStackBlock_02578660;
            local_278 = 0xc2000000;
            local_274 = 0;
            local_270 = FUN_005d6c94;
            local_268 = &DAT_0257d818;
            local_250 = local_130;
            (*(code *)PTR__objc_retain_02578638)();
            pcVar1 = local_1e8;
            local_260 = pcVar6;
            (*(code *)PTR__objc_retain_02578638)();
            local_258 = pcVar1;
            _objc_retainBlock();
            uVar4 = local_130;
            local_248 = ppuVar7;
            _objc_retainBlock();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf__O_);
            (*(code *)PTR__objc_release_02578630)(ppuVar7);
            _objc_storeStrong(&local_248);
            _objc_storeStrong(&local_258,0);
            _objc_storeStrong(&local_260,0);
          }
          pcVar6 = local_1e0;
          if ((local_1e9 & 1) == 0) {
            ppuVar7 = &local_2c0;
            local_2c0 = PTR___NSConcreteStackBlock_02578660;
            local_2b8 = 0xc2000000;
            local_2b4 = 0;
            local_2b0 = FUN_005d6e7c;
            local_2a8 = &DAT_0257d818;
            local_290 = local_130;
            (*(code *)PTR__objc_retain_02578638)();
            pcVar1 = local_1e8;
            local_2a0 = pcVar6;
            (*(code *)PTR__objc_retain_02578638)();
            local_298 = pcVar1;
            _objc_retainBlock();
            uVar4 = local_130;
            local_288 = ppuVar7;
            _objc_retainBlock();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf_lgSW);
            (*(code *)PTR__objc_release_02578630)(ppuVar7);
            _objc_storeStrong(&local_288);
            _objc_storeStrong(&local_298,0);
            _objc_storeStrong(&local_2a0,0);
          }
          pcVar6 = local_1e0;
          if ((local_1ea & 1) == 0) {
            ppuVar7 = &local_300;
            local_300 = PTR___NSConcreteStackBlock_02578660;
            local_2f8 = 0xc2000000;
            local_2f4 = 0;
            local_2f0 = FUN_005d705c;
            local_2e8 = &DAT_0257d818;
            local_2d0 = local_130;
            (*(code *)PTR__objc_retain_02578638)();
            pcVar1 = local_1e8;
            local_2e0 = pcVar6;
            (*(code *)PTR__objc_retain_02578638)();
            local_2d8 = pcVar1;
            _objc_retainBlock();
            uVar4 = local_130;
            local_2c8 = ppuVar7;
            _objc_retainBlock();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf_lSO);
            (*(code *)PTR__objc_release_02578630)(ppuVar7);
            _objc_storeStrong(&local_2c8);
            _objc_storeStrong(&local_2d8,0);
            _objc_storeStrong(&local_2e0,0);
          }
          pcVar6 = local_1e0;
          if ((local_1eb & 1) == 0) {
            ppuVar7 = &local_340;
            local_340 = PTR___NSConcreteStackBlock_02578660;
            local_338 = 0xc2000000;
            local_334 = 0;
            local_330 = FUN_005d7234;
            local_328 = &DAT_0257d818;
            local_310 = local_130;
            (*(code *)PTR__objc_retain_02578638)();
            pcVar1 = local_1e8;
            local_320 = pcVar6;
            (*(code *)PTR__objc_retain_02578638)();
            local_318 = pcVar1;
            _objc_retainBlock();
            uVar4 = local_130;
            local_308 = ppuVar7;
            _objc_retainBlock();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf_O__lS);
            (*(code *)PTR__objc_release_02578630)(ppuVar7);
            _objc_storeStrong(&local_308);
            _objc_storeStrong(&local_318,0);
            _objc_storeStrong(&local_320,0);
          }
          pcVar6 = local_1e0;
          if ((local_1ec & 1) == 0) {
            ppuVar7 = &local_380;
            local_380 = PTR___NSConcreteStackBlock_02578660;
            local_378 = 0xc2000000;
            local_374 = 0;
            local_370 = FUN_005d7414;
            local_368 = &DAT_0257d818;
            local_350 = local_130;
            (*(code *)PTR__objc_retain_02578638)();
            pcVar1 = local_1e8;
            local_360 = pcVar6;
            (*(code *)PTR__objc_retain_02578638)();
            local_358 = pcVar1;
            _objc_retainBlock();
            uVar4 = local_130;
            local_348 = ppuVar7;
            _objc_retainBlock();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf_Rddky);
            (*(code *)PTR__objc_release_02578630)(ppuVar7);
            local_388 = uVar4;
            if ((-1 < (long)uVar4) &&
               (uVar9 = local_168,
               (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0), uVar4 < uVar9)
               ) {
              uVar9 = local_168;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_168,PTR_s_objectAtIndexedSubscript__0269cc78,local_388);
              _objc_retainAutoreleasedReturnValue();
              pcVar6 = &cf_WCActionSheetItem;
              local_390 = uVar9;
              _NSClassFromString();
              (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,pcVar6);
              uVar4 = local_130;
              puVar2 = PTR_s_WCRefine_deleteButtonIndex_026a5bf8;
              if ((uVar9 & 1) != 0) {
                puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithLongLong__0269d808,
                           local_388);
                _objc_retainAutoreleasedReturnValue();
                _objc_setAssociatedObject(uVar4,puVar2,puVar3,1);
                (*(code *)PTR__objc_release_02578630)(puVar3);
              }
              _objc_storeStrong(&local_390,0);
            }
            _objc_storeStrong(&local_348);
            _objc_storeStrong(&local_358,0);
            _objc_storeStrong(&local_360,0);
          }
          uVar4 = local_130;
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar4,&DAT_028cb78d,puVar2,1);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          _objc_storeStrong(&local_1e8);
          _objc_storeStrong(&local_1e0,0);
        }
        _objc_storeStrong(&local_1d0,0);
      }
      (*DAT_028cb718)(local_130,local_138,local_140);
      uVar4 = local_130;
      _objc_getAssociatedObject(local_130,PTR_s_WCRefine_deleteButtonIndex_026a5bf8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR___dispatch_main_q_02578680;
      local_398 = uVar4;
      if (uVar4 != 0) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_async();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        _objc_setAssociatedObject(local_130,PTR_s_WCRefine_deleteButtonIndex_026a5bf8,0,1);
      }
      _objc_storeStrong(&local_398);
      _objc_storeStrong(&local_168,0);
      local_158 = 0;
    }
    else {
      (*DAT_028cb718)(local_130,local_138,local_140);
      local_158 = 1;
    }
    _objc_storeStrong(&local_160,0);
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


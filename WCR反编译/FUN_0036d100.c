// FUN_0036d100 @ 0036d100

void FUN_0036d100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined *local_988;
  undefined *local_980;
  uint local_90c;
  undefined *local_4e0;
  undefined *local_4d8;
  undefined *local_4c0;
  ulong local_4a0;
  uint local_444;
  undefined *local_420;
  undefined4 local_418;
  undefined4 local_414;
  code *local_410;
  undefined *local_408;
  ulong local_400;
  long local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined *local_3e0;
  cfstringStruct *local_3d8;
  byte local_3c9;
  undefined *local_3c8;
  undefined *local_3c0;
  undefined4 local_3b8;
  undefined4 local_3b4;
  code *local_3b0;
  undefined *local_3a8;
  ulong local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined *local_388;
  undefined4 local_380;
  undefined4 local_37c;
  code *local_378;
  undefined *local_370;
  ulong local_368;
  undefined *local_360;
  undefined4 local_358;
  undefined4 local_354;
  code *local_350;
  undefined *local_348;
  ulong local_340;
  undefined *local_338;
  undefined4 local_330;
  undefined4 local_32c;
  code *local_328;
  undefined *local_320;
  ulong local_318;
  undefined *local_310;
  undefined4 local_308;
  undefined4 local_304;
  code *local_300;
  undefined *local_2f8;
  ulong local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined *local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  code *local_2c8;
  undefined *local_2c0;
  long local_2b8;
  undefined *local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  code *local_2a0;
  undefined *local_298;
  long local_290;
  undefined8 local_288;
  ulong local_280;
  long local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined *local_258;
  undefined *local_250;
  undefined4 local_248;
  undefined4 local_244;
  code *local_240;
  undefined *local_238;
  undefined8 local_230;
  ulong local_228;
  undefined8 local_220;
  undefined *local_218;
  undefined4 local_210;
  undefined4 local_20c;
  code *local_208;
  undefined *local_200;
  undefined8 local_1f8;
  ulong local_1f0;
  undefined *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  code *local_1d8;
  undefined *local_1d0;
  undefined8 local_1c8;
  ulong local_1c0;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  code *local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  ulong local_190;
  ulong local_188;
  ulong local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  ulong local_138;
  undefined *local_130;
  mach_header *local_128;
  undefined *local_120;
  byte local_111;
  ulong local_110;
  byte local_101;
  ulong local_100;
  ulong local_f8;
  undefined4 local_f0;
  byte local_e9;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  ulong local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_6);
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_7);
  local_e9 = 0;
  local_444 = 1;
  if ((local_b0 != 0) && (local_444 = 1, local_c0 != 0)) {
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 1;
    local_e8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_444 = (uint)puVar5 ^ 1;
  }
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  if ((local_444 & 1) == 0) {
    uVar6 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    local_101 = 0;
    local_111 = 0;
    local_4a0 = uVar6;
    if (uVar6 == 0) {
      local_4a0 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_session_0269d000);
      _objc_retainAutoreleasedReturnValue();
      local_101 = 1;
      local_100 = local_4a0;
      FUN_00366324();
      _objc_retainAutoreleasedReturnValue();
      local_110 = local_4a0;
    }
    local_111 = uVar6 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = local_4a0;
    if ((local_111 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_110);
    }
    if ((local_101 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_100);
    }
    (*(code *)PTR__objc_release_02578630)(uVar6);
    uVar6 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
    if (uVar6 == 0) {
      local_f0 = 1;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_128 = (mach_header *)0x7fffffffffffffff;
      puVar7 = PTR_WCRefineBottomBarLongPressActionSelector_026ce258;
      local_120 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineBottomBarLongPressActionSelector_026ce258,
                 PTR_s_configuredEntriesForListKind__0269ea68,3);
      _objc_retainAutoreleasedReturnValue();
      local_130 = puVar7;
      _memset(auStack_178,0,0x40);
      if (local_130 == (undefined *)0x0) {
        local_4c0 = *(undefined **)PTR____NSArray0___02578280;
      }
      else {
        local_4c0 = local_130;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_4d8 = local_4c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_4c0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,
                 0x10);
      if (local_4d8 != (undefined *)0x0) {
        lVar9 = *local_168;
        local_4e0 = (undefined *)0x0;
        do {
          do {
            if (*local_168 - lVar9 != 0) {
              _objc_enumerationMutation(*local_168 - lVar9,local_4c0);
            }
            uVar10 = *(ulong *)(local_170 + (long)local_4e0 * 8);
            local_138 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar10,PTR_s_objectForKeyedSubscript__0269d098,&cf_value);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = local_138;
            local_180 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = local_180;
            local_188 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_isEqualToString__0269ccc8,&cf_pin)
            ;
            if ((uVar10 & 1) != 0) {
              uVar6 = local_c0;
              FUN_003b7a54();
              pcVar1 = &cf_Smn_v;
              if ((uVar6 & 1) == 0) {
                pcVar1 = &cf_n_vJ_Y;
              }
              _objc_storeStrong(&local_188,pcVar1);
              goto LAB_0036d83c;
            }
            uVar6 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_180,PTR_s_isEqualToString__0269ccc8,&cf_star);
            if (((uVar6 & 1) != 0) &&
               (uVar6 = local_f8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_f8,PTR_s_hasSuffix__0269d018,&cf__chatroom), (uVar6 & 1) != 0)) {
              local_f0 = 3;
              goto LAB_0036e8c4;
            }
            uVar6 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_180,PTR_s_isEqualToString__0269ccc8,&cf_star);
            if ((uVar6 & 1) == 0) {
              uVar6 = local_180;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_180,PTR_s_isEqualToString__0269ccc8,&cf_mute);
              if ((uVar6 & 1) != 0) {
                uVar6 = local_c0;
                FUN_003b7ba0();
                pcVar1 = &cf_SmMQSbpb;
                if ((uVar6 & 1) == 0) {
                  pcVar1 = &cf_mo_MQSbpb;
                }
                _objc_storeStrong(&local_188,pcVar1);
                goto LAB_0036d83c;
              }
              uVar6 = local_180;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_180,PTR_s_isEqualToString__0269ccc8,&cf_group);
              if ((uVar6 & 1) == 0) {
                uVar6 = local_180;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_180,PTR_s_isEqualToString__0269ccc8,&cf_superpin);
                if (((uVar6 & 1) == 0) || (uVar6 = local_c0, FUN_003b7a54(), (uVar6 & 1) != 0)) {
                  uVar6 = local_180;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_180,PTR_s_isEqualToString__0269ccc8,&cf_superpin);
                  if ((uVar6 & 1) != 0) {
                    uVar6 = local_f8;
                    FUN_003b7c38();
                    pcVar1 = &cf_Smv_Nv;
                    if ((uVar6 & 1) == 0) {
                      pcVar1 = &cf__Nv_Nv;
                    }
                    _objc_storeStrong(&local_188,pcVar1);
                  }
                  goto LAB_0036d83c;
                }
                local_f0 = 3;
              }
              else {
                puVar5 = PTR_WCRefineConfig_026cdf58;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(puVar5);
                if (((ulong)puVar7 & 1) != 0) {
                  _objc_storeStrong(&local_188,&cf_mR0RR_);
                  goto LAB_0036d83c;
                }
                local_f0 = 3;
              }
            }
            else {
              uVar6 = local_c0;
              FUN_003b7b24();
              pcVar1 = &cf_Smfh;
              if ((uVar6 & 1) == 0) {
                pcVar1 = &cf__Nfh;
              }
              _objc_storeStrong(&local_188,pcVar1);
LAB_0036d83c:
              uVar6 = local_188;
              puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
              uVar10 = local_180;
              if ((uVar6 & 1) != 0) {
                puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar5);
                if ((uVar10 & 1) != 0) {
                  uVar6 = local_188;
                  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
                  if ((uVar6 == 0) ||
                     (uVar6 = local_180,
                     (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0),
                     uVar6 == 0)) {
                    local_f0 = 3;
                  }
                  else {
                    uVar10 = local_180;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_180,PTR_s_isEqualToString__0269ccc8,&cf_open);
                    uVar2 = local_b8;
                    puVar7 = local_120;
                    uVar6 = local_188;
                    puVar5 = PTR_WCRGroupingSheetAction_026ce5f0;
                    if ((uVar10 & 1) == 0) {
                      uVar10 = local_180;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_180,PTR_s_isEqualToString__0269ccc8,&cf_remark);
                      uVar2 = local_b8;
                      puVar7 = local_120;
                      uVar6 = local_188;
                      puVar5 = PTR_WCRGroupingSheetAction_026ce5f0;
                      if ((uVar10 & 1) == 0) {
                        uVar10 = local_180;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_180,PTR_s_isEqualToString__0269ccc8,&cf_pin);
                        uVar2 = local_b8;
                        puVar7 = local_120;
                        uVar6 = local_188;
                        puVar5 = PTR_WCRGroupingSheetAction_026ce5f0;
                        if ((uVar10 & 1) == 0) {
                          uVar10 = local_180;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_180,PTR_s_isEqualToString__0269ccc8,&cf_mute);
                          uVar2 = local_b8;
                          puVar7 = local_120;
                          uVar6 = local_188;
                          puVar5 = PTR_WCRGroupingSheetAction_026ce5f0;
                          if ((uVar10 & 1) == 0) {
                            uVar10 = local_180;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_180,PTR_s_isEqualToString__0269ccc8,&cf_group);
                            lVar4 = local_b0;
                            uVar6 = local_188;
                            puVar5 = PTR_WCRGroupingSheetAction_026ce5f0;
                            if ((uVar10 & 1) == 0) {
                              uVar10 = local_180;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_180,PTR_s_isEqualToString__0269ccc8,&cf_settings);
                              lVar4 = local_b0;
                              puVar7 = local_120;
                              uVar6 = local_188;
                              puVar5 = PTR_WCRGroupingSheetAction_026ce5f0;
                              if ((uVar10 & 1) == 0) {
                                uVar8 = local_180;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_180,PTR_s_isEqualToString__0269ccc8,&cf_star);
                                uVar10 = local_c0;
                                puVar7 = local_120;
                                uVar6 = local_188;
                                puVar5 = PTR_WCRGroupingSheetAction_026ce5f0;
                                if ((uVar8 & 1) == 0) {
                                  uVar8 = local_180;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_180,PTR_s_isEqualToString__0269ccc8,&cf_avatar);
                                  uVar10 = local_c0;
                                  puVar7 = local_120;
                                  uVar6 = local_188;
                                  puVar5 = PTR_WCRGroupingSheetAction_026ce5f0;
                                  if ((uVar8 & 1) == 0) {
                                    uVar8 = local_180;
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_180,PTR_s_isEqualToString__0269ccc8,
                                               &cf_avatar_frame);
                                    uVar10 = local_c0;
                                    puVar7 = local_120;
                                    uVar6 = local_188;
                                    puVar5 = PTR_WCRGroupingSheetAction_026ce5f0;
                                    if ((uVar8 & 1) == 0) {
                                      uVar8 = local_180;
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_180,PTR_s_isEqualToString__0269ccc8,
                                                 &cf_nameplate);
                                      uVar10 = local_c0;
                                      puVar7 = local_120;
                                      uVar6 = local_188;
                                      puVar5 = PTR_WCRGroupingSheetAction_026ce5f0;
                                      if ((uVar8 & 1) == 0) {
                                        uVar8 = local_180;
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (local_180,PTR_s_isEqualToString__0269ccc8,
                                                   &cf_superpin);
                                        uVar10 = local_c0;
                                        puVar7 = local_120;
                                        uVar6 = local_188;
                                        puVar5 = PTR_WCRGroupingSheetAction_026ce5f0;
                                        if ((uVar8 & 1) != 0) {
                                          local_3c0 = PTR___NSConcreteStackBlock_02578660;
                                          local_3b8 = 0xc2000000;
                                          local_3b4 = 0;
                                          local_3b0 = FUN_003b9744;
                                          local_3a8 = &DAT_0257cb48;
                                          (*(code *)PTR__objc_retain_02578638)();
                                          uVar3 = local_b8;
                                          local_3a0 = uVar10;
                                          (*(code *)PTR__objc_retain_02578638)();
                                          uVar2 = local_e0;
                                          local_398 = uVar3;
                                          (*(code *)PTR__objc_retain_02578638)();
                                          local_390 = uVar2;
                                          (*(code *)PTR__objc_msgSend_02578628)
                                                    (puVar5,
                                                  PTR_s_actionWithTitle_destructive_hand_026a2db8,
                                                  uVar6,0,&local_3c0);
                                          _objc_retainAutoreleasedReturnValue();
                                          (*(code *)PTR__objc_msgSend_02578628)
                                                    (puVar7,PTR_s_addObject__0269d180);
                                          (*(code *)PTR__objc_release_02578630)(puVar5);
                                          _objc_storeStrong(&local_390);
                                          _objc_storeStrong(&local_398,0);
                                          _objc_storeStrong(&local_3a0,0);
                                        }
                                      }
                                      else {
                                        local_388 = PTR___NSConcreteStackBlock_02578660;
                                        local_380 = 0xc2000000;
                                        local_37c = 0;
                                        local_378 = FUN_003b965c;
                                        local_370 = &DAT_0257a800;
                                        (*(code *)PTR__objc_retain_02578638)();
                                        local_368 = uVar10;
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (puVar5,
                                                  PTR_s_actionWithTitle_destructive_hand_026a2db8,
                                                  uVar6,0,&local_388);
                                        _objc_retainAutoreleasedReturnValue();
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (puVar7,PTR_s_addObject__0269d180);
                                        (*(code *)PTR__objc_release_02578630)(puVar5);
                                        _objc_storeStrong(&local_368,0);
                                      }
                                    }
                                    else {
                                      local_360 = PTR___NSConcreteStackBlock_02578660;
                                      local_358 = 0xc2000000;
                                      local_354 = 0;
                                      local_350 = FUN_003b9574;
                                      local_348 = &DAT_0257a800;
                                      (*(code *)PTR__objc_retain_02578638)();
                                      local_340 = uVar10;
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (puVar5,
                                                 PTR_s_actionWithTitle_destructive_hand_026a2db8,
                                                 uVar6,0,&local_360);
                                      _objc_retainAutoreleasedReturnValue();
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (puVar7,PTR_s_addObject__0269d180);
                                      (*(code *)PTR__objc_release_02578630)(puVar5);
                                      _objc_storeStrong(&local_340,0);
                                    }
                                  }
                                  else {
                                    local_338 = PTR___NSConcreteStackBlock_02578660;
                                    local_330 = 0xc2000000;
                                    local_32c = 0;
                                    local_328 = FUN_003b948c;
                                    local_320 = &DAT_0257a800;
                                    (*(code *)PTR__objc_retain_02578638)();
                                    local_318 = uVar10;
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (puVar5,
                                               PTR_s_actionWithTitle_destructive_hand_026a2db8,uVar6
                                               ,0,&local_338);
                                    _objc_retainAutoreleasedReturnValue();
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (puVar7,PTR_s_addObject__0269d180);
                                    (*(code *)PTR__objc_release_02578630)(puVar5);
                                    _objc_storeStrong(&local_318,0);
                                  }
                                }
                                else {
                                  local_310 = PTR___NSConcreteStackBlock_02578660;
                                  local_308 = 0xc2000000;
                                  local_304 = 0;
                                  local_300 = FUN_003b8f08;
                                  local_2f8 = &DAT_0257cb48;
                                  (*(code *)PTR__objc_retain_02578638)();
                                  uVar3 = local_b8;
                                  local_2f0 = uVar10;
                                  (*(code *)PTR__objc_retain_02578638)();
                                  uVar2 = local_e0;
                                  local_2e8 = uVar3;
                                  (*(code *)PTR__objc_retain_02578638)();
                                  local_2e0 = uVar2;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (puVar5,PTR_s_actionWithTitle_destructive_hand_026a2db8,
                                             uVar6,0,&local_310);
                                  _objc_retainAutoreleasedReturnValue();
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (puVar7,PTR_s_addObject__0269d180);
                                  (*(code *)PTR__objc_release_02578630)(puVar5);
                                  _objc_storeStrong(&local_2e0);
                                  _objc_storeStrong(&local_2e8,0);
                                  _objc_storeStrong(&local_2f0,0);
                                }
                              }
                              else {
                                local_2d8 = PTR___NSConcreteStackBlock_02578660;
                                local_2d0 = 0xc2000000;
                                local_2cc = 0;
                                local_2c8 = FUN_003b8d3c;
                                local_2c0 = &DAT_0257a800;
                                (*(code *)PTR__objc_retain_02578638)();
                                local_2b8 = lVar4;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (puVar5,PTR_s_actionWithTitle_destructive_hand_026a2db8,
                                           uVar6,0,&local_2d8);
                                _objc_retainAutoreleasedReturnValue();
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (puVar7,PTR_s_addObject__0269d180);
                                (*(code *)PTR__objc_release_02578630)(puVar5);
                                _objc_storeStrong(&local_2b8,0);
                              }
                            }
                            else {
                              local_2b0 = PTR___NSConcreteStackBlock_02578660;
                              local_2a8 = 0xc2000000;
                              local_2a4 = 0;
                              local_2a0 = FUN_003b89e8;
                              local_298 = &DAT_0257cb78;
                              (*(code *)PTR__objc_retain_02578638)();
                              uVar2 = local_b8;
                              local_290 = lVar4;
                              (*(code *)PTR__objc_retain_02578638)();
                              uVar10 = local_c0;
                              local_288 = uVar2;
                              (*(code *)PTR__objc_retain_02578638)();
                              lVar4 = local_c8;
                              local_280 = uVar10;
                              (*(code *)PTR__objc_retain_02578638)();
                              uVar2 = local_d0;
                              local_278 = lVar4;
                              (*(code *)PTR__objc_retain_02578638)();
                              uVar3 = local_d8;
                              local_270 = uVar2;
                              (*(code *)PTR__objc_retain_02578638)();
                              uVar2 = local_e0;
                              local_268 = uVar3;
                              (*(code *)PTR__objc_retain_02578638)();
                              local_260 = uVar2;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (puVar5,PTR_s_actionWithTitle_destructive_hand_026a2db8,
                                         uVar6,0,&local_2b0);
                              _objc_retainAutoreleasedReturnValue();
                              local_258 = puVar5;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (puVar5,PTR_s_setImageName__0269fb18,&cf_folder);
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_120,PTR_s_addObject__0269d180,local_258);
                              _objc_storeStrong(&local_258);
                              _objc_storeStrong(&local_260,0);
                              _objc_storeStrong(&local_268,0);
                              _objc_storeStrong(&local_270,0);
                              _objc_storeStrong(&local_278,0);
                              _objc_storeStrong(&local_280,0);
                              _objc_storeStrong(&local_288,0);
                              _objc_storeStrong(&local_290,0);
                            }
                          }
                          else {
                            local_250 = PTR___NSConcreteStackBlock_02578660;
                            local_248 = 0xc2000000;
                            local_244 = 0;
                            local_240 = FUN_003b874c;
                            local_238 = &DAT_0257cb48;
                            (*(code *)PTR__objc_retain_02578638)();
                            uVar10 = local_c0;
                            local_230 = uVar2;
                            (*(code *)PTR__objc_retain_02578638)();
                            uVar2 = local_e0;
                            local_228 = uVar10;
                            (*(code *)PTR__objc_retain_02578638)();
                            local_220 = uVar2;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (puVar5,PTR_s_actionWithTitle_destructive_hand_026a2db8,uVar6,
                                       0,&local_250);
                            _objc_retainAutoreleasedReturnValue();
                            (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addObject__0269d180);
                            (*(code *)PTR__objc_release_02578630)(puVar5);
                            _objc_storeStrong(&local_220);
                            _objc_storeStrong(&local_228,0);
                            _objc_storeStrong(&local_230,0);
                          }
                        }
                        else {
                          local_218 = PTR___NSConcreteStackBlock_02578660;
                          local_210 = 0xc2000000;
                          local_20c = 0;
                          local_208 = FUN_003b80e8;
                          local_200 = &DAT_0257a7a0;
                          (*(code *)PTR__objc_retain_02578638)();
                          uVar10 = local_c0;
                          local_1f8 = uVar2;
                          (*(code *)PTR__objc_retain_02578638)();
                          local_1f0 = uVar10;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (puVar5,PTR_s_actionWithTitle_destructive_hand_026a2db8,uVar6,0,
                                     &local_218);
                          _objc_retainAutoreleasedReturnValue();
                          (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addObject__0269d180);
                          (*(code *)PTR__objc_release_02578630)(puVar5);
                          puVar5 = local_120;
                          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_count_0269cfe0);
                          local_128 = (mach_header *)(puVar5 + -1);
                          _objc_storeStrong(&local_1f0);
                          _objc_storeStrong(&local_1f8,0);
                        }
                      }
                      else {
                        local_1e8 = PTR___NSConcreteStackBlock_02578660;
                        local_1e0 = 0xc2000000;
                        local_1dc = 0;
                        local_1d8 = FUN_003b7eac;
                        local_1d0 = &DAT_0257a7a0;
                        (*(code *)PTR__objc_retain_02578638)();
                        uVar10 = local_c0;
                        local_1c8 = uVar2;
                        (*(code *)PTR__objc_retain_02578638)();
                        local_1c0 = uVar10;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar5,PTR_s_actionWithTitle_destructive_hand_026a2db8,uVar6,0,
                                   &local_1e8);
                        _objc_retainAutoreleasedReturnValue();
                        (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addObject__0269d180);
                        (*(code *)PTR__objc_release_02578630)(puVar5);
                        _objc_storeStrong(&local_1c0);
                        _objc_storeStrong(&local_1c8,0);
                      }
                    }
                    else {
                      local_1b8 = PTR___NSConcreteStackBlock_02578660;
                      local_1b0 = 0xc2000000;
                      local_1ac = 0;
                      local_1a8 = FUN_003b7d28;
                      local_1a0 = &DAT_0257a7a0;
                      (*(code *)PTR__objc_retain_02578638)();
                      uVar10 = local_c0;
                      local_198 = uVar2;
                      (*(code *)PTR__objc_retain_02578638)();
                      local_190 = uVar10;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar5,PTR_s_actionWithTitle_destructive_hand_026a2db8,uVar6,0,
                                 &local_1b8);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addObject__0269d180);
                      (*(code *)PTR__objc_release_02578630)(puVar5);
                      _objc_storeStrong(&local_190);
                      _objc_storeStrong(&local_198,0);
                    }
                    local_f0 = 0;
                  }
                  goto LAB_0036e8c4;
                }
              }
              local_f0 = 3;
            }
LAB_0036e8c4:
            _objc_storeStrong(&local_188);
            _objc_storeStrong(&local_180,0);
            local_4e0 = local_4e0 + 1;
          } while (local_4e0 < local_4d8);
          local_4d8 = local_4c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_4c0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,
                     auStack_a8,0x10);
          local_4e0 = (undefined *)0x0;
        } while (local_4d8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(local_4c0);
      lVar9 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
      local_3c9 = 0;
      local_90c = 0;
      if (lVar9 != 0) {
        puVar5 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_3c9 = 1;
        local_3c8 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_90c = (uint)puVar5;
      }
      if ((local_3c9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_3c8);
      }
      if ((local_90c & 1) != 0) {
        uVar6 = local_f8;
        FUN_003b9b5c(local_f8,local_c8);
        pcVar1 = &cf_SmR__Nn_v;
        if ((uVar6 & 1) == 0) {
          pcVar1 = &cf_R__Nn_v;
        }
        (*(code *)PTR__objc_retain_02578638)();
        uVar6 = local_c0;
        puVar5 = PTR_WCRGroupingSheetAction_026ce5f0;
        local_420 = PTR___NSConcreteStackBlock_02578660;
        local_418 = 0xc2000000;
        local_414 = 0;
        local_410 = FUN_003b9cac;
        local_408 = &DAT_0257cba8;
        local_3d8 = pcVar1;
        (*(code *)PTR__objc_retain_02578638)();
        lVar9 = local_c8;
        local_400 = uVar6;
        (*(code *)PTR__objc_retain_02578638)();
        uVar2 = local_e0;
        local_3f8 = lVar9;
        (*(code *)PTR__objc_retain_02578638)();
        uVar3 = local_b8;
        local_3e8 = uVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_3f0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_actionWithTitle_destructive_hand_026a2db8,pcVar1,0,&local_420);
        _objc_retainAutoreleasedReturnValue();
        local_3e0 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setImageName__0269fb18,&cf_pin);
        if (local_128 == (mach_header *)0x7fffffffffffffff) {
          local_988 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_count_0269cfe0);
          if (1 < (long)local_988) {
            local_988 = (undefined *)((long)&MACH_HEADER.magic + 1);
          }
          local_980 = local_988;
        }
        else {
          local_980 = (undefined *)((long)&local_128->magic + 1);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_120,PTR_s_insertObject_atIndex__0269eac0,local_3e0,local_980);
        _objc_storeStrong(&local_3e0);
        _objc_storeStrong(&local_3f0,0);
        _objc_storeStrong(&local_3e8,0);
        _objc_storeStrong(&local_3f8,0);
        _objc_storeStrong(&local_400,0);
        _objc_storeStrong(&local_3d8,0);
      }
      FUN_003ba414(local_b0,&cf_u_c,local_120,local_d0);
      _objc_storeStrong(&local_130);
      _objc_storeStrong(&local_120,0);
      local_f0 = 0;
    }
    _objc_storeStrong(&local_f8,0);
  }
  else {
    local_f0 = 1;
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


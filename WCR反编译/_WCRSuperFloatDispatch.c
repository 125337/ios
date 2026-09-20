// _WCRSuperFloatDispatch @ 01627f7c

byte _WCRSuperFloatDispatch(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  long lVar9;
  byte local_6bc;
  uint local_68c;
  uint local_664;
  uint local_640;
  uint local_624;
  uint local_5b4;
  byte local_4f4;
  int local_4ec;
  undefined *local_428;
  undefined *local_420;
  undefined *local_3f8;
  uint local_3d4;
  undefined *local_3b0;
  undefined *local_3a8;
  undefined *local_3a0;
  undefined *local_398;
  undefined *local_390;
  undefined *local_388;
  undefined *local_380;
  byte local_371;
  undefined *local_370;
  undefined *local_368;
  undefined *local_360;
  byte local_351;
  undefined *local_350;
  byte local_341;
  undefined *local_340;
  byte local_331;
  undefined *local_330;
  byte local_321;
  undefined *local_320;
  undefined *local_318;
  byte local_309;
  undefined *local_308;
  byte local_2f9;
  undefined *local_2f8;
  byte local_2e9;
  cfstringStruct *local_2e8;
  undefined *local_2e0;
  undefined *local_2d8;
  byte local_2c9;
  undefined8 local_2c8;
  ulong local_2c0;
  undefined8 local_2b8;
  ulong local_2b0;
  byte local_2a3;
  byte local_2a2;
  byte local_2a1;
  undefined *local_2a0;
  byte local_291;
  undefined *local_290;
  byte local_281;
  cfstringStruct *local_280;
  byte local_271;
  undefined *local_270;
  undefined1 local_261;
  undefined *local_260;
  undefined *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  code *local_248;
  undefined *local_240;
  cfstringStruct *local_238;
  undefined *local_230;
  undefined *local_228;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  undefined *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  code *local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  undefined *local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  long local_148;
  undefined *local_140;
  byte local_131;
  undefined *local_130;
  undefined *local_128;
  byte local_119;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  int local_fc;
  undefined *local_f8;
  byte local_e9;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined1 auStack_b8 [128];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f8 = (undefined *)0x0;
  _objc_storeStrong(&local_f8,param_1);
  puVar3 = local_f8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_e9 = 0;
    local_fc = 1;
    goto LAB_0162b418;
  }
  puVar3 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_action)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  FUN_01618794();
  _objc_retainAutoreleasedReturnValue();
  local_108 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
  if (puVar3 == (undefined *)0x0) {
    local_e9 = 0;
    local_fc = 1;
  }
  else {
    FUN_01617b78();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_110 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_110 == (undefined *)0x0) {
      puVar3 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_108,PTR_s_isEqualToString__0269ccc8,&cf_wcr_sf_quick_chat_sidebar);
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_108,PTR_s_isEqualToString__0269ccc8,&cf_wcr_sf_region_screenshot);
        if (((ulong)puVar3 & 1) == 0) {
          puVar3 = local_108;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_108,PTR_s_isEqualToString__0269ccc8,&cf_wcr_sf_global_screenshot);
          if (((ulong)puVar3 & 1) == 0) {
            puVar3 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_108,PTR_s_isEqualToString__0269ccc8,&cf_wcr_sf_gesture_screenshot);
            if (((ulong)puVar3 & 1) == 0) {
              puVar3 = local_108;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_108,PTR_s_isEqualToString__0269ccc8,&cf_wcr_sf_screenshot_translate);
              if (((ulong)puVar3 & 1) == 0) {
                puVar3 = local_108;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_108,PTR_s_isEqualToString__0269ccc8,&cf_wcr_sf_go_back);
                if (((ulong)puVar3 & 1) == 0) {
                  puVar3 = local_108;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_108,PTR_s_isEqualToString__0269ccc8,&cf_wcr_sf_go_home);
                  if (((ulong)puVar3 & 1) == 0) {
                    puVar3 = local_108;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_108,PTR_s_isEqualToString__0269ccc8,&cf_wcr_sf_change_font);
                    if (((ulong)puVar3 & 1) == 0) {
                      puVar3 = local_108;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_108,PTR_s_isEqualToString__0269ccc8,
                                 &cf_wcr_sf_theme_life_mall);
                      if (((ulong)puVar3 & 1) == 0) {
                        puVar3 = local_108;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_108,PTR_s_isEqualToString__0269ccc8,
                                   &cf_wcr_sf_convenient_moments);
                        if (((ulong)puVar3 & 1) == 0) {
                          puVar3 = local_108;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_108,PTR_s_isEqualToString__0269ccc8,
                                     &cf_wcr_sf_context_search);
                          if (((ulong)puVar3 & 1) == 0) {
                            puVar3 = local_108;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_108,PTR_s_isEqualToString__0269ccc8,
                                       &cf_wcr_sf_add_friend);
                            if (((ulong)puVar3 & 1) == 0) {
                              puVar3 = local_108;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_108,PTR_s_isEqualToString__0269ccc8,
                                         &cf_wcr_sf_find_user);
                              if (((ulong)puVar3 & 1) == 0) {
                                puVar3 = local_108;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_108,PTR_s_isEqualToString__0269ccc8,
                                           &cf_wcr_sf_manage_buttons);
                                if (((ulong)puVar3 & 1) == 0) {
                                  puVar3 = local_108;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_108,PTR_s_isEqualToString__0269ccc8,
                                             &cf_wcr_sf_open_setting);
                                  if (((ulong)puVar3 & 1) == 0) {
                                    puVar3 = local_108;
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_108,PTR_s_isEqualToString__0269ccc8,
                                               &cf_wcr_sf_add_action);
                                    if (((ulong)puVar3 & 1) == 0) {
                                      puVar3 = local_108;
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_108,PTR_s_isEqualToString__0269ccc8,
                                                 &cf_wcr_sf_restart);
                                      if (((ulong)puVar3 & 1) == 0) {
                                        puVar3 = local_108;
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (local_108,PTR_s_isEqualToString__0269ccc8,
                                                   &cf_wcr_sf_clear_unread);
                                        if (((ulong)puVar3 & 1) == 0) {
                                          puVar3 = local_108;
                                          (*(code *)PTR__objc_msgSend_02578628)
                                                    (local_108,PTR_s_isEqualToString__0269ccc8,
                                                     &cf_wcr_sf_clear_session);
                                          if (((ulong)puVar3 & 1) == 0) {
                                            puVar3 = local_108;
                                            (*(code *)PTR__objc_msgSend_02578628)
                                                      (local_108,PTR_s_isEqualToString__0269ccc8,
                                                       &cf_wcr_sf_plugin_hub);
                                            if (((ulong)puVar3 & 1) == 0) {
                                              puVar3 = local_108;
                                              (*(code *)PTR__objc_msgSend_02578628)
                                                        (local_108,PTR_s_isEqualToString__0269ccc8,
                                                         &cf_wcr_sf_plugin_search);
                                              if (((ulong)puVar3 & 1) == 0) {
                                                puVar3 = local_108;
                                                (*(code *)PTR__objc_msgSend_02578628)
                                                          (local_108,PTR_s_isEqualToString__0269ccc8
                                                           ,&cf_wcr_sf_switch_pet);
                                                if (((ulong)puVar3 & 1) == 0) {
                                                  puVar3 = local_108;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_108,
                                                             PTR_s_isEqualToString__0269ccc8,
                                                             &cf_wcr_sf_theme_mode);
                                                  if (((ulong)puVar3 & 1) == 0) {
                                                    puVar3 = local_108;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_108,
                                                               PTR_s_isEqualToString__0269ccc8,
                                                               &cf_wcr_sf_coupon_helper);
                                                    if (((ulong)puVar3 & 1) == 0) {
                                                      puVar3 = local_108;
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (local_108,
                                                                 PTR_s_isEqualToString__0269ccc8,
                                                                 &cf_wcr_sf_clipboard);
                                                      if (((ulong)puVar3 & 1) == 0) {
                                                        puVar3 = local_108;
                                                        (*(code *)PTR__objc_msgSend_02578628)
                                                                  (local_108,
                                                                   PTR_s_isEqualToString__0269ccc8,
                                                                   &cf_wcr_sf_nav_monitor);
                                                        if ((((ulong)puVar3 & 1) == 0) &&
                                                           (puVar3 = local_108,
                                                           (*(code *)PTR__objc_msgSend_02578628)
                                                                     (local_108,
                                                                                                                                            
                                                  PTR_s_isEqualToString__0269ccc8,&cf_wcr_sf_nav_log
                                                  ), ((ulong)puVar3 & 1) == 0)) {
                                                    puVar3 = local_108;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_108,
                                                               PTR_s_isEqualToString__0269ccc8,
                                                               &cf_wcr_sf_icon_name_capture);
                                                    if (((ulong)puVar3 & 1) == 0) {
                                                      puVar3 = local_108;
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (local_108,
                                                                 PTR_s_isEqualToString__0269ccc8,
                                                                 &cf_wcr_sf_record_wechat);
                                                      bVar1 = (byte)puVar3;
                                                      if (((ulong)puVar3 & 1) == 0) {
                                                        puVar3 = local_f8;
                                                        (*(code *)PTR__objc_msgSend_02578628)
                                                                  (local_f8,
                                                  PTR_s_objectForKeyedSubscript__0269d098,
                                                  &cf__wcrCustomKind);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  puVar2 = puVar3;
                                                  FUN_01618794();
                                                  _objc_retainAutoreleasedReturnValue();
                                                  puVar5 = puVar2;
                                                  (*(code *)PTR__objc_msgSend_02578628)();
                                                  local_5b4 = 1;
                                                  if (((ulong)puVar5 & 1) == 0) {
                                                    puVar5 = local_108;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_108,PTR_s_hasPrefix__0269d320,
                                                               &cf_wcr_sf_switch_);
                                                    local_5b4 = (uint)puVar5;
                                                  }
                                                  (*(code *)PTR__objc_release_02578630)(puVar2);
                                                  (*(code *)PTR__objc_release_02578630)(puVar3);
                                                  puVar3 = local_108;
                                                  if ((local_5b4 & 1) == 0) {
                                                    pcVar7 = &cf_wcr_sf_open_url;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (&cf_wcr_sf_open_url,
                                                                                                                              
                                                  PTR_s_stringByAppendingString__0269d398,&cf__);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (puVar3,PTR_s_hasPrefix__0269d320);
                                                  local_624 = 1;
                                                  if (((ulong)puVar3 & 1) == 0) {
                                                    puVar3 = local_108;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_108,
                                                               PTR_s_isEqualToString__0269ccc8,
                                                               &cf_wcr_sf_open_url);
                                                    local_624 = (uint)puVar3;
                                                  }
                                                  (*(code *)PTR__objc_release_02578630)(pcVar7);
                                                  if ((local_624 & 1) == 0) {
                                                    puVar3 = local_108;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_108,PTR_s_hasPrefix__0269d320,
                                                               &cf_wcr_sf_toolbar_);
                                                    local_2f9 = 0;
                                                    local_309 = 0;
                                                    local_664 = 1;
                                                    if (((ulong)puVar3 & 1) == 0) {
                                                      puVar3 = local_f8;
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (local_f8,
                                                  PTR_s_objectForKeyedSubscript__0269d098,
                                                  &cf__wcrCustomKind);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_2f9 = 1;
                                                  local_2f8 = puVar3;
                                                  FUN_01618794();
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_309 = 1;
                                                  local_308 = puVar3;
                                                  (*(code *)PTR__objc_msgSend_02578628)();
                                                  local_664 = (uint)puVar3;
                                                  }
                                                  if ((local_309 & 1) != 0) {
                                                    (*(code *)PTR__objc_release_02578630)(local_308)
                                                    ;
                                                  }
                                                  if ((local_2f9 & 1) != 0) {
                                                    (*(code *)PTR__objc_release_02578630)(local_2f8)
                                                    ;
                                                  }
                                                  if ((local_664 & 1) == 0) {
                                                    puVar3 = local_108;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_108,PTR_s_hasPrefix__0269d320,
                                                               &cf_wcr_sf_actionmenu_);
                                                    local_321 = 0;
                                                    local_331 = 0;
                                                    local_341 = 0;
                                                    local_351 = 0;
                                                    local_68c = 1;
                                                    if (((ulong)puVar3 & 1) == 0) {
                                                      puVar3 = local_108;
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (local_108,PTR_s_hasPrefix__0269d320
                                                                 ,&cf_wcr_sf_chatmore_);
                                                      local_68c = 1;
                                                      if (((ulong)puVar3 & 1) == 0) {
                                                        puVar3 = local_f8;
                                                        (*(code *)PTR__objc_msgSend_02578628)
                                                                  (local_f8,
                                                  PTR_s_objectForKeyedSubscript__0269d098,
                                                  &cf__wcrCustomKind);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_321 = 1;
                                                  local_320 = puVar3;
                                                  FUN_01618794();
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_331 = 1;
                                                  local_330 = puVar3;
                                                  (*(code *)PTR__objc_msgSend_02578628)();
                                                  local_68c = 1;
                                                  if (((ulong)puVar3 & 1) == 0) {
                                                    puVar3 = local_f8;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_f8,
                                                  PTR_s_objectForKeyedSubscript__0269d098,
                                                  &cf__wcrCustomKind);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_341 = 1;
                                                  local_340 = puVar3;
                                                  FUN_01618794();
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_351 = 1;
                                                  local_350 = puVar3;
                                                  (*(code *)PTR__objc_msgSend_02578628)();
                                                  local_68c = (uint)puVar3;
                                                  }
                                                  }
                                                  }
                                                  if ((local_351 & 1) != 0) {
                                                    (*(code *)PTR__objc_release_02578630)(local_350)
                                                    ;
                                                  }
                                                  if ((local_341 & 1) != 0) {
                                                    (*(code *)PTR__objc_release_02578630)(local_340)
                                                    ;
                                                  }
                                                  if ((local_331 & 1) != 0) {
                                                    (*(code *)PTR__objc_release_02578630)(local_330)
                                                    ;
                                                  }
                                                  if ((local_321 & 1) != 0) {
                                                    (*(code *)PTR__objc_release_02578630)(local_320)
                                                    ;
                                                  }
                                                  if ((local_68c & 1) == 0) {
                                                    puVar3 = local_f8;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_f8,
                                                  PTR_s_objectForKeyedSubscript__0269d098,
                                                  &cf__wcrCustomKind);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  puVar2 = puVar3;
                                                  FUN_01618794();
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_368 = puVar2;
                                                  (*(code *)PTR__objc_release_02578630)(puVar3);
                                                  puVar3 = local_f8;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_f8,
                                                  PTR_s_objectForKeyedSubscript__0269d098,
                                                  &cf__wcrCustomPayload);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  puVar2 = local_368;
                                                  local_370 = puVar3;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_368,
                                                             PTR_s_isEqualToString__0269ccc8,
                                                             &cf_auto);
                                                  local_6bc = 1;
                                                  if (((ulong)puVar2 & 1) == 0) {
                                                    puVar3 = local_108;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_108,PTR_s_hasPrefix__0269d320,
                                                               &cf_wcr_sf_custom_);
                                                    local_6bc = (byte)puVar3;
                                                  }
                                                  local_371 = local_6bc & 1;
                                                  puVar2 = local_368;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_368,
                                                             PTR_s_isEqualToString__0269ccc8,
                                                             &cf_controller);
                                                  puVar3 = local_370;
                                                  if ((((ulong)puVar2 & 1) == 0) &&
                                                     ((local_371 & 1) == 0)) {
LAB_0162ac80:
                                                    puVar2 = local_108;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_108,PTR_s_hasPrefix__0269d320,
                                                               &cf_wcr_sf_vc_);
                                                    puVar3 = local_108;
                                                    if (((ulong)puVar2 & 1) == 0) {
                                                      puVar3 = local_368;
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (local_368,
                                                                 PTR_s_isEqualToString__0269ccc8,
                                                                 &cf_registered);
                                                      if ((((ulong)puVar3 & 1) == 0) &&
                                                         (puVar3 = local_108,
                                                         (*(code *)PTR__objc_msgSend_02578628)
                                                                   (local_108,
                                                                    PTR_s_hasPrefix__0269d320,
                                                                    &cf_wcr_sf_reg_),
                                                         ((ulong)puVar3 & 1) == 0)) {
                                                        puVar2 = local_368;
                                                        (*(code *)PTR__objc_msgSend_02578628)
                                                                  (local_368,
                                                                   PTR_s_isEqualToString__0269ccc8,
                                                                   &cf_url);
                                                        puVar3 = local_370;
                                                        if (((ulong)puVar2 & 1) != 0) {
                                                          puVar2 = 
                                                  PTR__OBJC_CLASS___NSString_026cdfe8;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (PTR__OBJC_CLASS___NSString_026cdfe8,
                                                             PTR_s_class_0269cd60);
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (puVar3,PTR_s_isKindOfClass__0269cd68,
                                                             puVar2);
                                                  if (((ulong)puVar3 & 1) != 0) {
                                                    FUN_0162f6d4(local_370);
                                                    local_e9 = 1;
                                                    local_fc = 1;
                                                    goto LAB_0162b3d8;
                                                  }
                                                  }
                                                  puVar2 = local_368;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_368,
                                                             PTR_s_isEqualToString__0269ccc8,
                                                             &cf_selector);
                                                  puVar3 = local_370;
                                                  if ((((ulong)puVar2 & 1) != 0) ||
                                                     ((local_371 & 1) != 0)) {
                                                    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR__OBJC_CLASS___NSString_026cdfe8,
                                                               PTR_s_class_0269cd60);
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (puVar3,PTR_s_isKindOfClass__0269cd68,
                                                               puVar2);
                                                    puVar2 = local_370;
                                                    if (((ulong)puVar3 & 1) != 0) {
                                                      puVar3 = local_370;
                                                      (*(code *)PTR__objc_retain_02578638)();
                                                      local_398 = puVar2;
                                                      FUN_0162be00();
                                                      _objc_retainAutoreleasedReturnValue();
                                                      local_3a0 = puVar3;
                                                      FUN_0162e8e8();
                                                      _objc_retainAutoreleasedReturnValue();
                                                      local_e8 = _WCRChatToolbarActionKey;
                                                      local_d0 = local_398;
                                                      local_e0 = _WCRChatToolbarTitleKey;
                                                      local_c8 = local_398;
                                                      local_d8 = _WCRChatToolbarEnabledKey;
                                                      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                                                      local_3a8 = puVar3;
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (PTR__OBJC_CLASS___NSNumber_026ce038
                                                                 ,PTR_s_numberWithBool__0269ce60,1);
                                                      _objc_retainAutoreleasedReturnValue();
                                                      puVar3 = 
                                                  PTR__OBJC_CLASS___NSDictionary_026ce090;
                                                  local_c0 = puVar2;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (PTR__OBJC_CLASS___NSDictionary_026ce090
                                                             ,
                                                  PTR_s_dictionaryWithObjects_forKeys_co_0269d528,
                                                  &local_d0,&local_e8,3);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_3b0 = puVar3;
                                                  (*(code *)PTR__objc_release_02578630)(puVar2);
                                                  puVar3 = local_3b0;
                                                  _WCRChatToolbarDispatch(local_3b0,local_3a8);
                                                  if (((ulong)puVar3 & 1) == 0) {
                                                    puVar3 = local_398;
                                                    _NSSelectorFromString();
                                                    if ((puVar3 == (undefined *)0x0) ||
                                                       (puVar2 = local_3a0,
                                                       (*(code *)PTR__objc_msgSend_02578628)
                                                                 (local_3a0,
                                                                  PTR_s_respondsToSelector__026ca818
                                                                  ,puVar3), ((ulong)puVar2 & 1) == 0
                                                       )) {
                                                      pcVar7 = &cf__INRelgbL;
                                                      if ((local_371 & 1) == 0) {
                                                        pcVar7 = &cf_S_MRubelgbLR_O;
                                                      }
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (PTR_WCRefineHelper_026ce000,
                                                                 PTR_s_showModernToast__0269ce78,
                                                                 pcVar7);
                                                    }
                                                    else {
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (local_3a0,
                                                                 PTR_s_performSelector__026ca7b8,
                                                                 puVar3);
                                                    }
                                                  }
                                                  local_e9 = 1;
                                                  local_fc = 1;
                                                  _objc_storeStrong(&local_3b0);
                                                  _objc_storeStrong(&local_3a8,0);
                                                  _objc_storeStrong(&local_3a0,0);
                                                  _objc_storeStrong(&local_398,0);
                                                  goto LAB_0162b3d8;
                                                  }
                                                  }
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (PTR_WCRefineHelper_026ce000,
                                                             PTR_s_showModernToast__0269ce78,
                                                             &cf__wcd_Of_gceQ);
                                                  local_e9 = 1;
                                                  local_fc = 1;
                                                  }
                                                  else {
                                                    puVar3 = local_370;
                                                    FUN_01618794();
                                                    _objc_retainAutoreleasedReturnValue();
                                                    local_388 = puVar3;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (puVar3,PTR_s_length_0269cca0);
                                                    if ((puVar3 == (undefined *)0x0) &&
                                                       (puVar2 = local_108,
                                                       (*(code *)PTR__objc_msgSend_02578628)
                                                                 (local_108,
                                                                  PTR_s_hasPrefix__0269d320,
                                                                  &cf_wcr_sf_reg_),
                                                       puVar3 = local_108, ((ulong)puVar2 & 1) != 0)
                                                       ) {
                                                      pcVar7 = &cf_wcr_sf_reg_;
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (&cf_wcr_sf_reg_,
                                                                 PTR_s_length_0269cca0);
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (puVar3,
                                                  PTR_s_substringFromIndex__0269d120,pcVar7);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  puVar2 = local_388;
                                                  local_388 = puVar3;
                                                  (*(code *)PTR__objc_release_02578630)(puVar2);
                                                  }
                                                  puVar3 = local_388;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_388,PTR_s_length_0269cca0);
                                                  if (puVar3 == (undefined *)0x0) {
LAB_0162b008:
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCRefineHelper_026ce000,
                                                               PTR_s_showModernToast__0269ce78,
                                                               &cf_R_O_g__);
                                                  }
                                                  else {
                                                    puVar3 = local_388;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_388,
                                                               PTR_s_containsString__0269d0b0,
                                                               &cf____);
                                                    if (((((ulong)puVar3 & 1) == 0) &&
                                                        (puVar3 = local_388,
                                                        (*(code *)PTR__objc_msgSend_02578628)
                                                                  (local_388,
                                                                   PTR_s_hasPrefix__0269d320,
                                                                   &cf_http),
                                                        ((ulong)puVar3 & 1) == 0)) &&
                                                       (puVar3 = local_388,
                                                       (*(code *)PTR__objc_msgSend_02578628)
                                                                 (local_388,
                                                                  PTR_s_hasPrefix__0269d320,
                                                                  &cf_weixin),
                                                       ((ulong)puVar3 & 1) == 0)) {
                                                      puVar3 = local_388;
                                                      _NSClassFromString();
                                                      local_390 = puVar3;
                                                      if (puVar3 != (undefined *)0x0) {
                                                        puVar2 = 
                                                  PTR__OBJC_CLASS___UIViewController_026cdf80;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (
                                                  PTR__OBJC_CLASS___UIViewController_026cdf80,
                                                  PTR_s_class_0269cd60);
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (puVar3,
                                                  PTR_s_isSubclassOfClass__0269e590,puVar2);
                                                  if (((ulong)puVar3 & 1) != 0) {
                                                    puVar3 = local_388;
                                                    FUN_0162fbb8();
                                                    if (((ulong)puVar3 & 1) == 0) {
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (PTR_WCRefineHelper_026ce000,
                                                                 PTR_s_showModernToast__0269ce78,
                                                                 &cf_ubSb);
                                                    }
                                                    goto LAB_0162b044;
                                                  }
                                                  }
                                                  goto LAB_0162b008;
                                                  }
                                                  puVar3 = local_388;
                                                  FUN_0162f6d4();
                                                  if (((ulong)puVar3 & 1) == 0) {
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCRefineHelper_026ce000,
                                                               PTR_s_showModernToast__0269ce78,
                                                               &cf_c_Nzz);
                                                  }
                                                  }
LAB_0162b044:
                                                  local_e9 = 1;
                                                  local_fc = 1;
                                                  _objc_storeStrong(&local_388,0);
                                                  }
                                                  }
                                                  else {
                                                    pcVar7 = &cf_wcr_sf_vc_;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (&cf_wcr_sf_vc_,PTR_s_length_0269cca0)
                                                    ;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (puVar3,
                                                  PTR_s_substringFromIndex__0269d120,pcVar7);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  puVar2 = puVar3;
                                                  FUN_0162fbb8();
                                                  (*(code *)PTR__objc_release_02578630)(puVar3);
                                                  if (((ulong)puVar2 & 1) == 0) {
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCRefineHelper_026ce000,
                                                               PTR_s_showModernToast__0269ce78,
                                                               &cf_ubSb);
                                                  }
                                                  local_e9 = 1;
                                                  local_fc = 1;
                                                  }
                                                  }
                                                  else {
                                                    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR__OBJC_CLASS___NSString_026cdfe8,
                                                               PTR_s_class_0269cd60);
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (puVar3,PTR_s_isKindOfClass__0269cd68,
                                                               puVar2);
                                                    puVar2 = local_370;
                                                    if (((ulong)puVar3 & 1) == 0) goto LAB_0162ac80;
                                                    (*(code *)PTR__objc_retain_02578638)();
                                                    local_380 = puVar2;
                                                    puVar3 = local_368;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_368,
                                                               PTR_s_isEqualToString__0269ccc8,
                                                               &cf_controller);
                                                    if ((((ulong)puVar3 & 1) == 0) &&
                                                       (puVar3 = local_380, FUN_0161f210(),
                                                       ((ulong)puVar3 & 1) == 0)) {
LAB_0162ac5c:
                                                      local_fc = 0;
                                                    }
                                                    else {
                                                      puVar3 = local_380;
                                                      FUN_0162fbb8();
                                                      if (((ulong)puVar3 & 1) == 0) {
                                                        puVar3 = local_368;
                                                        (*(code *)PTR__objc_msgSend_02578628)
                                                                  (local_368,
                                                                   PTR_s_isEqualToString__0269ccc8,
                                                                   &cf_controller);
                                                        if (((ulong)puVar3 & 1) == 0)
                                                        goto LAB_0162ac5c;
                                                        (*(code *)PTR__objc_msgSend_02578628)
                                                                  (PTR_WCRefineHelper_026ce000,
                                                                   PTR_s_showModernToast__0269ce78,
                                                                   &cf_ubSb);
                                                        local_e9 = 1;
                                                        local_fc = 1;
                                                      }
                                                      else {
                                                        local_e9 = 1;
                                                        local_fc = 1;
                                                      }
                                                    }
                                                    _objc_storeStrong(&local_380,0);
                                                    if (local_fc == 0) goto LAB_0162ac80;
                                                  }
LAB_0162b3d8:
                                                  _objc_storeStrong(&local_370);
                                                  _objc_storeStrong(&local_368,0);
                                                  }
                                                  else {
                                                    puVar3 = local_f8;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_f8,
                                                  PTR_s_objectForKeyedSubscript__0269d098,
                                                  &cf__wcrCustomPayload);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  puVar2 = puVar3;
                                                  FUN_01618794();
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_360 = puVar2;
                                                  (*(code *)PTR__objc_release_02578630)(puVar3);
                                                  puVar3 = local_360;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_360,PTR_s_length_0269cca0);
                                                  if (puVar3 == (undefined *)0x0) {
                                                    puVar2 = local_108;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_108,PTR_s_hasPrefix__0269d320,
                                                               &cf_wcr_sf_actionmenu_);
                                                    puVar3 = local_108;
                                                    if (((ulong)puVar2 & 1) == 0) {
                                                      puVar2 = local_108;
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (local_108,PTR_s_hasPrefix__0269d320
                                                                 ,&cf_wcr_sf_chatmore_);
                                                      puVar3 = local_108;
                                                      if (((ulong)puVar2 & 1) != 0) {
                                                        pcVar7 = &cf_wcr_sf_chatmore_;
                                                        (*(code *)PTR__objc_msgSend_02578628)
                                                                  (&cf_wcr_sf_chatmore_,
                                                                   PTR_s_length_0269cca0);
                                                        (*(code *)PTR__objc_msgSend_02578628)
                                                                  (puVar3,
                                                  PTR_s_substringFromIndex__0269d120,pcVar7);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  puVar2 = local_360;
                                                  local_360 = puVar3;
                                                  (*(code *)PTR__objc_release_02578630)(puVar2);
                                                  }
                                                  }
                                                  else {
                                                    pcVar7 = &cf_wcr_sf_actionmenu_;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (&cf_wcr_sf_actionmenu_,
                                                               PTR_s_length_0269cca0);
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (puVar3,
                                                  PTR_s_substringFromIndex__0269d120,pcVar7);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  puVar2 = local_360;
                                                  local_360 = puVar3;
                                                  (*(code *)PTR__objc_release_02578630)(puVar2);
                                                  }
                                                  }
                                                  puVar3 = local_360;
                                                  FUN_0162fadc();
                                                  local_e9 = (byte)puVar3 & 1;
                                                  local_fc = 1;
                                                  _objc_storeStrong(&local_360,0);
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = local_f8;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_f8,
                                                  PTR_s_objectForKeyedSubscript__0269d098,
                                                  &cf__wcrCustomPayload);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  puVar2 = puVar3;
                                                  FUN_01618794();
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_318 = puVar2;
                                                  (*(code *)PTR__objc_release_02578630)(puVar3);
                                                  puVar3 = local_318;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_318,PTR_s_length_0269cca0);
                                                  if ((puVar3 == (undefined *)0x0) &&
                                                     (puVar2 = local_108,
                                                     (*(code *)PTR__objc_msgSend_02578628)
                                                               (local_108,PTR_s_hasPrefix__0269d320,
                                                                &cf_wcr_sf_toolbar_),
                                                     puVar3 = local_108, ((ulong)puVar2 & 1) != 0))
                                                  {
                                                    pcVar7 = &cf_wcr_sf_toolbar_;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (&cf_wcr_sf_toolbar_,
                                                               PTR_s_length_0269cca0);
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (puVar3,
                                                  PTR_s_substringFromIndex__0269d120,pcVar7);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  puVar2 = local_318;
                                                  local_318 = puVar3;
                                                  (*(code *)PTR__objc_release_02578630)(puVar2);
                                                  }
                                                  puVar3 = local_318;
                                                  FUN_0162f76c();
                                                  local_e9 = (byte)puVar3 & 1;
                                                  local_fc = 1;
                                                  _objc_storeStrong(&local_318,0);
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = local_f8;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_f8,
                                                  PTR_s_objectForKeyedSubscript__0269d098,
                                                  &cf__wcrCustomPayload);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  puVar2 = puVar3;
                                                  FUN_01618794();
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_2e0 = puVar2;
                                                  (*(code *)PTR__objc_release_02578630)(puVar3);
                                                  puVar2 = local_2e0;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_2e0,PTR_s_length_0269cca0);
                                                  puVar3 = local_108;
                                                  local_2e9 = 0;
                                                  local_640 = 0;
                                                  if (puVar2 == (undefined *)0x0) {
                                                    pcVar7 = &cf_wcr_sf_open_url;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (&cf_wcr_sf_open_url,
                                                                                                                              
                                                  PTR_s_stringByAppendingString__0269d398,&cf__);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_2e9 = 1;
                                                  local_2e8 = pcVar7;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (puVar3,PTR_s_hasPrefix__0269d320);
                                                  local_640 = (uint)puVar3;
                                                  }
                                                  if ((local_2e9 & 1) != 0) {
                                                    (*(code *)PTR__objc_release_02578630)(local_2e8)
                                                    ;
                                                  }
                                                  puVar3 = local_108;
                                                  if ((local_640 & 1) != 0) {
                                                    pcVar7 = &cf_wcr_sf_open_url;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (&cf_wcr_sf_open_url,
                                                               PTR_s_length_0269cca0);
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (puVar3,
                                                  PTR_s_substringFromIndex__0269d120,
                                                  (undefined1 *)((long)&pcVar7->field0_0x0 + 1));
                                                  _objc_retainAutoreleasedReturnValue();
                                                  puVar2 = local_2e0;
                                                  local_2e0 = puVar3;
                                                  (*(code *)PTR__objc_release_02578630)(puVar2);
                                                  }
                                                  puVar3 = local_2e0;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_2e0,PTR_s_length_0269cca0);
                                                  if (puVar3 == (undefined *)0x0) {
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCRefineHelper_026ce000,
                                                               PTR_s_showModernToast__0269ce78,
                                                               &cf_HQ_W);
                                                  }
                                                  else {
                                                    puVar3 = local_2e0;
                                                    FUN_0162f6d4();
                                                    if (((ulong)puVar3 & 1) == 0) {
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (PTR_WCRefineHelper_026ce000,
                                                                 PTR_s_showModernToast__0269ce78,
                                                                 &cf_c_Nzz);
                                                    }
                                                  }
                                                  local_e9 = 1;
                                                  local_fc = 1;
                                                  _objc_storeStrong(&local_2e0,0);
                                                  }
                                                  }
                                                  else {
                                                    local_2b0 = 0;
                                                    local_2b8 = 0;
                                                    puVar3 = local_f8;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_f8,
                                                  PTR_s_objectForKeyedSubscript__0269d098,
                                                  &cf__wcrCustomPayload);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_2c0 = local_2b0;
                                                  local_2c8 = local_2b8;
                                                  puVar2 = puVar3;
                                                  FUN_0162eeec();
                                                  _objc_storeStrong(&local_2b0,local_2c0);
                                                  _objc_storeStrong(&local_2b8,local_2c8);
                                                  (*(code *)PTR__objc_release_02578630)(puVar3);
                                                  if (((ulong)puVar2 & 1) == 0) {
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCRefineHelper_026ce000,
                                                               PTR_s_showModernToast__0269ce78,
                                                               &cf___);
                                                    local_e9 = 1;
                                                    local_fc = 1;
                                                  }
                                                  else {
                                                    local_2c9 = 0;
                                                    uVar6 = local_2b0;
                                                    FUN_0162f56c(local_2b0,local_2b8,&local_2c9);
                                                    if ((uVar6 & 1) == 0) {
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (PTR_WCRefineHelper_026ce000,
                                                                 PTR_s_showModernToast__0269ce78,
                                                                 &cf___);
                                                      local_e9 = 1;
                                                      local_fc = 1;
                                                    }
                                                    else {
                                                      puVar3 = local_f8;
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (local_f8,
                                                  PTR_s_objectForKeyedSubscript__0269d098,
                                                  &cf__wcrCustomTitle);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  puVar2 = puVar3;
                                                  FUN_01618794();
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_2d8 = puVar2;
                                                  (*(code *)PTR__objc_release_02578630)(puVar3);
                                                  puVar3 = local_2d8;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_2d8,PTR_s_length_0269cca0);
                                                  if (puVar3 == (undefined *)0x0) {
                                                    puVar2 = local_f8;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_f8,
                                                  PTR_s_objectForKeyedSubscript__0269d098,&cf_title)
                                                  ;
                                                  _objc_retainAutoreleasedReturnValue();
                                                  puVar5 = puVar2;
                                                  FUN_01618794();
                                                  _objc_retainAutoreleasedReturnValue();
                                                  puVar3 = local_2d8;
                                                  local_2d8 = puVar5;
                                                  (*(code *)PTR__objc_release_02578630)(puVar3);
                                                  (*(code *)PTR__objc_release_02578630)(puVar2);
                                                  }
                                                  puVar3 = local_2d8;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_2d8,PTR_s_length_0269cca0);
                                                  if (puVar3 == (undefined *)0x0) {
                                                    _objc_storeStrong(&local_2d8,local_2b0);
                                                  }
                                                  puVar3 = PTR_WCRefineHelper_026ce000;
                                                  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (PTR__OBJC_CLASS___NSString_026cdfe8,
                                                             PTR_s_stringWithFormat__0269cca8,&cf__)
                                                  ;
                                                  _objc_retainAutoreleasedReturnValue();
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (puVar3,PTR_s_showModernToast__0269ce78)
                                                  ;
                                                  (*(code *)PTR__objc_release_02578630)(puVar2);
                                                  local_e9 = 1;
                                                  local_fc = 1;
                                                  _objc_storeStrong(&local_2d8,0);
                                                  }
                                                  }
                                                  _objc_storeStrong(&local_2b8);
                                                  _objc_storeStrong(&local_2b0,0);
                                                  }
                                                  }
                                                  else {
                                                    FUN_0162ec38();
                                                    local_e9 = bVar1 & 1;
                                                    local_fc = 1;
                                                  }
                                                  }
                                                  else {
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (
                                                  PTR_WCRefineIconNameCaptureSupport_026cec30,
                                                  PTR_s_toggleFromSuperFloat_026b1a58);
                                                  local_e9 = 1;
                                                  local_fc = 1;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = local_108;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_108,
                                                               PTR_s_isEqualToString__0269ccc8,
                                                               &cf_wcr_sf_nav_log);
                                                    local_271 = (byte)puVar3;
                                                    local_280 = &
                                                  cf_NSLogMonitorFloatingWindowEnabled;
                                                  if (((ulong)puVar3 & 1) == 0) {
                                                    local_280 = &
                                                  cf_NavigationMonitorFloatingWindowEnabled;
                                                  }
                                                  (*(code *)PTR__objc_retain_02578638)();
                                                  local_291 = 0;
                                                  local_2a1 = 0;
                                                  if ((local_271 & 1) == 0) {
                                                    puVar3 = PTR_WCRefineConfig_026cdf58;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCRefineConfig_026cdf58,
                                                               PTR_s_shared_0269cad0);
                                                    _objc_retainAutoreleasedReturnValue();
                                                    local_2a1 = 1;
                                                    local_2a0 = puVar3;
                                                    (*(code *)PTR__objc_msgSend_02578628)();
                                                    local_4ec = (int)puVar3;
                                                  }
                                                  else {
                                                    puVar3 = PTR_WCRefineConfig_026cdf58;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCRefineConfig_026cdf58,
                                                               PTR_s_shared_0269cad0);
                                                    _objc_retainAutoreleasedReturnValue();
                                                    local_291 = 1;
                                                    local_290 = puVar3;
                                                    (*(code *)PTR__objc_msgSend_02578628)();
                                                    local_4ec = (int)puVar3;
                                                  }
                                                  if ((local_2a1 & 1) != 0) {
                                                    (*(code *)PTR__objc_release_02578630)(local_2a0)
                                                    ;
                                                  }
                                                  if ((local_291 & 1) != 0) {
                                                    (*(code *)PTR__objc_release_02578630)(local_290)
                                                    ;
                                                  }
                                                  puVar3 = PTR__OBJC_CLASS___NSUserDefaults_026ce338
                                                  ;
                                                  local_281 = local_4ec != 0;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (
                                                  PTR__OBJC_CLASS___NSUserDefaults_026ce338,
                                                  PTR_s_standardUserDefaults_026cab10);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  puVar2 = puVar3;
                                                  (*(code *)PTR__objc_msgSend_02578628)();
                                                  (*(code *)PTR__objc_release_02578630)(puVar3);
                                                  local_2a2 = (byte)puVar2;
                                                  local_4f4 = 0;
                                                  if ((local_281 & 1) != 0) {
                                                    local_4f4 = local_2a2;
                                                  }
                                                  local_2a3 = (local_4f4 ^ 1) & 1;
                                                  if ((local_271 & 1) == 0) {
                                                    puVar3 = PTR_WCRefineConfig_026cdf58;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCRefineConfig_026cdf58,
                                                               PTR_s_shared_0269cad0);
                                                    _objc_retainAutoreleasedReturnValue();
                                                    (*(code *)PTR__objc_msgSend_02578628)();
                                                    (*(code *)PTR__objc_release_02578630)(puVar3);
                                                    puVar3 = 
                                                  PTR__OBJC_CLASS___NSUserDefaults_026ce338;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (
                                                  PTR__OBJC_CLASS___NSUserDefaults_026ce338,
                                                  PTR_s_standardUserDefaults_026cab10);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  (*(code *)PTR__objc_msgSend_02578628)();
                                                  (*(code *)PTR__objc_release_02578630)(puVar3);
                                                  puVar3 = PTR__OBJC_CLASS___NSUserDefaults_026ce338
                                                  ;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (
                                                  PTR__OBJC_CLASS___NSUserDefaults_026ce338,
                                                  PTR_s_standardUserDefaults_026cab10);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  (*(code *)PTR__objc_msgSend_02578628)();
                                                  (*(code *)PTR__objc_release_02578630)(puVar3);
                                                  if ((local_2a3 & 1) == 0) {
                                                    puVar3 = PTR_WCNavigationMonitor_026cea60;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCNavigationMonitor_026cea60,
                                                               PTR_s_sharedInstance_0269cd30);
                                                    _objc_retainAutoreleasedReturnValue();
                                                    (*(code *)PTR__objc_msgSend_02578628)();
                                                    (*(code *)PTR__objc_release_02578630)(puVar3);
                                                    puVar3 = PTR_LogFloatingBall_026cea78;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_LogFloatingBall_026cea78,
                                                                                                                              
                                                  PTR_s_sharedNavigationInstance_026a9ee0);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  (*(code *)PTR__objc_msgSend_02578628)();
                                                  (*(code *)PTR__objc_release_02578630)(puVar3);
                                                  }
                                                  else {
                                                    puVar3 = PTR_WCNavigationMonitor_026cea60;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCNavigationMonitor_026cea60,
                                                               PTR_s_sharedInstance_0269cd30);
                                                    _objc_retainAutoreleasedReturnValue();
                                                    (*(code *)PTR__objc_msgSend_02578628)();
                                                    (*(code *)PTR__objc_release_02578630)(puVar3);
                                                    puVar3 = PTR_LogFloatingBall_026cea78;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_LogFloatingBall_026cea78,
                                                                                                                              
                                                  PTR_s_sharedNavigationInstance_026a9ee0);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  (*(code *)PTR__objc_msgSend_02578628)();
                                                  (*(code *)PTR__objc_release_02578630)(puVar3);
                                                  }
                                                  pcVar7 = &cf___vc_;
                                                  if ((local_2a3 & 1) == 0) {
                                                    pcVar7 = &cf___vc_sQ;
                                                  }
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (PTR_WCRefineHelper_026ce000,
                                                             PTR_s_showModernToast__0269ce78,pcVar7)
                                                  ;
                                                  }
                                                  else {
                                                    puVar3 = PTR_WCRefineConfig_026cdf58;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCRefineConfig_026cdf58,
                                                               PTR_s_shared_0269cad0);
                                                    _objc_retainAutoreleasedReturnValue();
                                                    (*(code *)PTR__objc_msgSend_02578628)();
                                                    (*(code *)PTR__objc_release_02578630)(puVar3);
                                                    puVar3 = 
                                                  PTR__OBJC_CLASS___NSUserDefaults_026ce338;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (
                                                  PTR__OBJC_CLASS___NSUserDefaults_026ce338,
                                                  PTR_s_standardUserDefaults_026cab10);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  (*(code *)PTR__objc_msgSend_02578628)();
                                                  (*(code *)PTR__objc_release_02578630)(puVar3);
                                                  puVar3 = PTR__OBJC_CLASS___NSUserDefaults_026ce338
                                                  ;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (
                                                  PTR__OBJC_CLASS___NSUserDefaults_026ce338,
                                                  PTR_s_standardUserDefaults_026cab10);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  (*(code *)PTR__objc_msgSend_02578628)();
                                                  (*(code *)PTR__objc_release_02578630)(puVar3);
                                                  if ((local_2a3 & 1) == 0) {
                                                    puVar3 = PTR_WCNavigationMonitor_026cea60;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCNavigationMonitor_026cea60,
                                                               PTR_s_sharedInstance_0269cd30);
                                                    _objc_retainAutoreleasedReturnValue();
                                                    (*(code *)PTR__objc_msgSend_02578628)();
                                                    (*(code *)PTR__objc_release_02578630)(puVar3);
                                                    puVar3 = PTR_LogFloatingBall_026cea78;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_LogFloatingBall_026cea78,
                                                               PTR_s_sharedNSLogInstance_026aa238);
                                                    _objc_retainAutoreleasedReturnValue();
                                                    (*(code *)PTR__objc_msgSend_02578628)();
                                                    (*(code *)PTR__objc_release_02578630)(puVar3);
                                                  }
                                                  else {
                                                    puVar3 = PTR_WCNavigationMonitor_026cea60;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCNavigationMonitor_026cea60,
                                                               PTR_s_sharedInstance_0269cd30);
                                                    _objc_retainAutoreleasedReturnValue();
                                                    (*(code *)PTR__objc_msgSend_02578628)();
                                                    (*(code *)PTR__objc_release_02578630)(puVar3);
                                                    puVar3 = PTR_LogFloatingBall_026cea78;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_LogFloatingBall_026cea78,
                                                               PTR_s_sharedNSLogInstance_026aa238);
                                                    _objc_retainAutoreleasedReturnValue();
                                                    (*(code *)PTR__objc_msgSend_02578628)();
                                                    (*(code *)PTR__objc_release_02578630)(puVar3);
                                                  }
                                                  pcVar7 = &cf_e_vc_;
                                                  if ((local_2a3 & 1) == 0) {
                                                    pcVar7 = &cf_e_vc_sQ;
                                                  }
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (PTR_WCRefineHelper_026ce000,
                                                             PTR_s_showModernToast__0269ce78,pcVar7)
                                                  ;
                                                  }
                                                  puVar3 = 
                                                  PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (
                                                  PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,
                                                  PTR_s_defaultCenter_026ca5e0);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  (*(code *)PTR__objc_msgSend_02578628)();
                                                  (*(code *)PTR__objc_release_02578630)(puVar3);
                                                  local_e9 = 1;
                                                  local_fc = 1;
                                                  _objc_storeStrong(&local_280,0);
                                                  }
                                                  }
                                                  else {
                                                    FUN_0162be00();
                                                    _objc_retainAutoreleasedReturnValue();
                                                    puVar2 = PTR_WCRClipboardHistoryStore_026ce680;
                                                    puVar5 = puVar3;
                                                    local_270 = puVar3;
                                                    FUN_0162e8e8();
                                                    _objc_retainAutoreleasedReturnValue();
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (puVar2,
                                                  PTR_s_presentHistoryPanelFromViewContr_026aabc8,
                                                  puVar3);
                                                  (*(code *)PTR__objc_release_02578630)(puVar5);
                                                  local_e9 = 1;
                                                  local_fc = 1;
                                                  _objc_storeStrong(&local_270,0);
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 0;
                                                    FUN_0162e55c();
                                                    if ((uVar6 & 1) == 0) {
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (PTR_WCRefineHelper_026ce000,
                                                                 PTR_s_showModernToast__0269ce78,
                                                                 &cf_elSb);
                                                    }
                                                    local_e9 = 1;
                                                    local_fc = 1;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = PTR_WCRefineHelper_026ce000;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCRefineHelper_026ce000,
                                                               PTR_s_toggleWeChatDarkMode_026ab960);
                                                    local_261 = SUB81(puVar3,0);
                                                    pcVar7 = &cf__RbceY;
                                                    if (((ulong)puVar3 & 1) == 0) {
                                                      pcVar7 = &cf_RbceY1Y_;
                                                    }
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCRefineHelper_026ce000,
                                                               PTR_s_showModernToast__0269ce78,
                                                               pcVar7);
                                                    local_e9 = 1;
                                                    local_fc = 1;
                                                  }
                                                }
                                                else {
                                                  FUN_0162e080();
                                                  local_e9 = 1;
                                                  local_fc = 1;
                                                }
                                              }
                                              else {
                                                FUN_0162df18();
                                                local_e9 = 1;
                                                local_fc = 1;
                                              }
                                            }
                                            else {
                                              _WCRefinePreferredPluginHubViewController();
                                              _objc_retainAutoreleasedReturnValue();
                                              local_260 = puVar3;
                                              if (puVar3 == (undefined *)0x0) {
                                                (*(code *)PTR__objc_msgSend_02578628)
                                                          (PTR_WCRefineHelper_026ce000,
                                                           PTR_s_showModernToast__0269ce78,
                                                           &cf_6e_uNS_u);
                                              }
                                              else {
                                                FUN_0162dbb0(puVar3);
                                              }
                                              local_e9 = 1;
                                              local_fc = 1;
                                              _objc_storeStrong(&local_260,0);
                                            }
                                          }
                                          else {
                                            pcVar7 = &cf_CAppViewControllerManager;
                                            _NSClassFromString();
                                            local_1e8 = (cfstringStruct *)0x0;
                                            local_1e0 = pcVar7;
                                            (*(code *)PTR__objc_msgSend_02578628)
                                                      (pcVar7,PTR_s_respondsToSelector__026ca818,
                                                       PTR_s_getAppViewControllerManager_026a3848);
                                            if (((ulong)pcVar7 & 1) != 0) {
                                              pcVar7 = local_1e0;
                                              (*(code *)PTR__objc_msgSend_02578628)
                                                        (local_1e0,
                                                         PTR_s_getAppViewControllerManager_026a3848)
                                              ;
                                              _objc_retainAutoreleasedReturnValue();
                                              local_1f0 = pcVar7;
                                              if ((pcVar7 != (cfstringStruct *)0x0) &&
                                                 ((*(code *)PTR__objc_msgSend_02578628)
                                                            (pcVar7,
                                                  PTR_s_respondsToSelector__026ca818,
                                                  PTR_s_getNewMainFrameViewController_0269d650),
                                                 ((ulong)pcVar7 & 1) != 0)) {
                                                pcVar4 = local_1f0;
                                                (*(code *)PTR__objc_msgSend_02578628)
                                                          (local_1f0,
                                                                                                                      
                                                  PTR_s_getNewMainFrameViewController_0269d650);
                                                _objc_retainAutoreleasedReturnValue();
                                                pcVar7 = local_1e8;
                                                local_1e8 = pcVar4;
                                                (*(code *)PTR__objc_release_02578630)(pcVar7);
                                              }
                                              _objc_storeStrong(&local_1f0,0);
                                            }
                                            if (local_1e8 == (cfstringStruct *)0x0) {
                                              pcVar7 = &cf_MicroMessengerAppDelegate;
                                              _NSClassFromString();
                                              local_1f8 = pcVar7;
                                              (*(code *)PTR__objc_msgSend_02578628)
                                                        (pcVar7,PTR_s_respondsToSelector__026ca818,
                                                         PTR_s_GlobalInstance_0269d648);
                                              if (((ulong)pcVar7 & 1) != 0) {
                                                pcVar4 = local_1f8;
                                                (*(code *)PTR__objc_msgSend_02578628)
                                                          (local_1f8,PTR_s_GlobalInstance_0269d648);
                                                _objc_retainAutoreleasedReturnValue();
                                                local_208 = (cfstringStruct *)0x0;
                                                local_200 = pcVar4;
                                                (*(code *)PTR__objc_msgSend_02578628)
                                                          (pcVar4,PTR_s_valueForKey__0269d128,
                                                           &cf_m_appViewControllerMgr);
                                                _objc_retainAutoreleasedReturnValue();
                                                pcVar7 = local_208;
                                                local_208 = pcVar4;
                                                (*(code *)PTR__objc_release_02578630)(pcVar7);
                                                if ((local_208 != (cfstringStruct *)0x0) &&
                                                   (pcVar7 = local_208,
                                                   (*(code *)PTR__objc_msgSend_02578628)
                                                             (local_208,
                                                              PTR_s_respondsToSelector__026ca818,
                                                                                                                            
                                                  PTR_s_getNewMainFrameViewController_0269d650),
                                                  ((ulong)pcVar7 & 1) != 0)) {
                                                  pcVar4 = local_208;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_208,
                                                                                                                          
                                                  PTR_s_getNewMainFrameViewController_0269d650);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  pcVar7 = local_1e8;
                                                  local_1e8 = pcVar4;
                                                  (*(code *)PTR__objc_release_02578630)(pcVar7);
                                                }
                                                _objc_storeStrong(&local_208);
                                                _objc_storeStrong(&local_200,0);
                                              }
                                            }
                                            local_228 = PTR_s_WCRefine_onClearSession_026a3fe8;
                                            if ((local_1e8 == (cfstringStruct *)0x0) ||
                                               (pcVar7 = local_1e8,
                                               (*(code *)PTR__objc_msgSend_02578628)
                                                         (local_1e8,
                                                          PTR_s_respondsToSelector__026ca818,
                                                          PTR_s_WCRefine_onClearSession_026a3fe8),
                                               puVar3 = PTR___dispatch_main_q_02578680,
                                               ((ulong)pcVar7 & 1) == 0)) {
                                              (*(code *)PTR__objc_msgSend_02578628)
                                                        (PTR_WCRefineHelper_026ce000,
                                                         PTR_s_showModernToast__0269ce78,&cf_ntONS_u
                                                        );
                                            }
                                            else {
                                              _objc_retainAutoreleaseReturnValue();
                                              _objc_retainAutoreleasedReturnValue();
                                              pcVar7 = local_1e8;
                                              local_258 = PTR___NSConcreteStackBlock_02578660;
                                              local_250 = 0xc2000000;
                                              local_24c = 0;
                                              local_248 = FUN_0162db70;
                                              local_240 = &DAT_0257cc98;
                                              (*(code *)PTR__objc_retain_02578638)();
                                              local_238 = pcVar7;
                                              local_230 = local_228;
                                              _dispatch_async(puVar3,&local_258);
                                              (*(code *)PTR__objc_release_02578630)(puVar3);
                                              _objc_storeStrong(&local_238,0);
                                            }
                                            local_e9 = 1;
                                            local_fc = 1;
                                            _objc_storeStrong(&local_1e8,0);
                                          }
                                        }
                                        else {
                                          local_190 = (undefined *)0x0;
                                          puVar3 = PTR_WCRefineHelper_026ce000;
                                          (*(code *)PTR__objc_msgSend_02578628)
                                                    (PTR_WCRefineHelper_026ce000,
                                                     PTR_s_respondsToSelector__026ca818,
                                                     PTR_s_showWeToastLoadingWithText__0269cea8);
                                          if (((ulong)puVar3 & 1) != 0) {
                                            puVar2 = PTR_WCRefineHelper_026ce000;
                                            (*(code *)PTR__objc_msgSend_02578628)
                                                      (PTR_WCRefineHelper_026ce000,
                                                       PTR_s_showWeToastLoadingWithText__0269cea8,
                                                       &cf_ck_W);
                                            _objc_retainAutoreleasedReturnValue();
                                            puVar3 = local_190;
                                            local_190 = puVar2;
                                            (*(code *)PTR__objc_release_02578630)(puVar3);
                                          }
                                          pcVar7 = &cf_WCRefineClearUnreadMsgHook;
                                          _NSClassFromString();
                                          pcVar4 = &cf_WCRefine_doClearUnreadMsgWithToast_;
                                          local_198 = pcVar7;
                                          _NSSelectorFromString();
                                          local_1a0 = pcVar4;
                                          if ((local_198 == (cfstringStruct *)0x0) ||
                                             (pcVar7 = local_198,
                                             (*(code *)PTR__objc_msgSend_02578628)
                                                       (local_198,PTR_s_respondsToSelector__026ca818
                                                        ,pcVar4),
                                             puVar3 = PTR___dispatch_main_q_02578680,
                                             ((ulong)pcVar7 & 1) == 0)) {
                                            (*(code *)PTR__objc_msgSend_02578628)
                                                      (PTR_WCRefineHelper_026ce000,
                                                       PTR_s_showModernToast__0269ce78,&cf___);
                                          }
                                          else {
                                            _objc_retainAutoreleaseReturnValue();
                                            _objc_retainAutoreleasedReturnValue();
                                            puVar2 = local_190;
                                            local_1d8 = PTR___NSConcreteStackBlock_02578660;
                                            local_1d0 = 0xc2000000;
                                            local_1cc = 0;
                                            local_1c8 = FUN_0162db2c;
                                            local_1c0 = &DAT_025877b0;
                                            local_1b0 = local_198;
                                            local_1a8 = local_1a0;
                                            (*(code *)PTR__objc_retain_02578638)();
                                            local_1b8 = puVar2;
                                            _dispatch_async(puVar3,&local_1d8);
                                            (*(code *)PTR__objc_release_02578630)(puVar3);
                                            _objc_storeStrong(&local_1b8,0);
                                          }
                                          local_e9 = 1;
                                          local_fc = 1;
                                          _objc_storeStrong(&local_190,0);
                                        }
                                      }
                                      else {
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (PTR_WCRefineRestar_026ce690,
                                                   PTR_s_elegantRestart_026a3598);
                                        local_e9 = 1;
                                        local_fc = 1;
                                      }
                                    }
                                    else {
                                      FUN_0162d930();
                                      local_e9 = 1;
                                      local_fc = 1;
                                    }
                                  }
                                  else {
                                    FUN_0162d888();
                                    local_e9 = 1;
                                    local_fc = 1;
                                  }
                                }
                                else {
                                  FUN_0162d6b4();
                                  local_e9 = 1;
                                  local_fc = 1;
                                }
                              }
                              else {
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (PTR_WCRefineFindUserSupport_026ceb40,
                                           PTR_s_presentFindUserPrompt_026ab950);
                                local_e9 = 1;
                                local_fc = 1;
                              }
                            }
                            else {
                              local_38 = &cf_AddFriendEntryViewController;
                              local_30 = &cf_FindFriendEntryViewController;
                              puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                         PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
                              _objc_retainAutoreleasedReturnValue();
                              local_140 = puVar3;
                              _memset(auStack_188,0,0x40);
                              puVar3 = local_140;
                              (*(code *)PTR__objc_retain_02578638)();
                              local_420 = puVar3;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                         auStack_188,auStack_b8,0x10);
                              if (local_420 != (undefined *)0x0) {
                                lVar8 = *local_178;
                                local_428 = (undefined *)0x0;
                                do {
                                  do {
                                    if (*local_178 - lVar8 != 0) {
                                      _objc_enumerationMutation(*local_178 - lVar8,puVar3);
                                    }
                                    lVar9 = *(long *)(local_180 + (long)local_428 * 8);
                                    local_148 = lVar9;
                                    _NSClassFromString();
                                    if (lVar9 != 0) {
                                      FUN_0162d648(local_148);
                                      local_e9 = 1;
                                      local_fc = 1;
                                      goto LAB_01628938;
                                    }
                                    local_428 = local_428 + 1;
                                  } while (local_428 < local_420);
                                  local_420 = puVar3;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                             auStack_188,auStack_b8,0x10);
                                  local_428 = (undefined *)0x0;
                                } while (local_420 != (undefined *)0x0);
                              }
                              local_fc = 0;
LAB_01628938:
                              (*(code *)PTR__objc_release_02578630)(puVar3);
                              if (local_fc == 0) {
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (PTR_WCRefineHelper_026ce000,
                                           PTR_s_showModernToast__0269ce78,&cf_mRgSubNS_u);
                                local_e9 = 1;
                                local_fc = 1;
                              }
                              _objc_storeStrong(&local_140,0);
                            }
                          }
                          else {
                            FUN_0162cf70();
                            if (((ulong)puVar3 & 1) == 0) {
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78
                                         ,&cf_S_MRublgd__eQS);
                            }
                            local_e9 = 1;
                            local_fc = 1;
                          }
                        }
                        else {
                          FUN_0162ca60();
                          if (((ulong)puVar3 & 1) == 0) {
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                                       &cf_OwcgSWSb);
                          }
                          local_e9 = 1;
                          local_fc = 1;
                        }
                      }
                      else {
                        _WCRThemeLifeOpenMallMiniProgram();
                        local_e9 = 1;
                        local_fc = 1;
                      }
                    }
                    else {
                      FUN_0162be00();
                      _objc_retainAutoreleasedReturnValue();
                      local_131 = 0;
                      local_3f8 = puVar3;
                      if (puVar3 == (undefined *)0x0) {
                        local_3f8 = PTR_WCRefineHelper_026ce000;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
                        _objc_retainAutoreleasedReturnValue();
                        local_130 = local_3f8;
                      }
                      local_131 = puVar3 == (undefined *)0x0;
                      (*(code *)PTR__objc_retain_02578638)();
                      local_128 = local_3f8;
                      if ((local_131 & 1) != 0) {
                        (*(code *)PTR__objc_release_02578630)(local_130);
                      }
                      (*(code *)PTR__objc_release_02578630)(puVar3);
                      puVar3 = PTR_WCRefineFontBeautifyViewController_026ceb48;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR_WCRefineFontBeautifyViewController_026ceb48,
                                 PTR_s_presentFontPickerFromViewControl_026ab968,local_128);
                      if (((ulong)puVar3 & 1) == 0) {
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                                   &cf_elSb);
                      }
                      local_e9 = 1;
                      local_fc = 1;
                      _objc_storeStrong(&local_128,0);
                    }
                  }
                  else {
                    FUN_0162b9d4();
                    if (((ulong)puVar3 & 1) == 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                                 &cf_elV0Ru);
                    }
                    local_e9 = 1;
                    local_fc = 1;
                  }
                }
                else {
                  FUN_0162b46c();
                  if (((ulong)puVar3 & 1) == 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                               &cf_S_MRelV);
                  }
                  local_e9 = 1;
                  local_fc = 1;
                }
              }
              else {
                _WCRSuperFloatPresentRegionScreenshot();
                local_e9 = 1;
                local_fc = 1;
              }
            }
            else {
              puVar3 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar3);
              if (((ulong)puVar2 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ);
                local_e9 = 1;
                local_fc = 1;
              }
              else {
                _WCRGestureScreenshotPerform();
                local_e9 = 1;
                local_fc = 1;
              }
            }
          }
          else {
            _WCRSuperFloatPresentGlobalScreenshot();
            local_e9 = 1;
            local_fc = 1;
          }
        }
        else {
          _WCRSuperFloatPresentRegionScreenshot();
          local_e9 = 1;
          local_fc = 1;
        }
      }
      else {
        puVar3 = PTR_WCRQuickChatRuntime_026ce698;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRQuickChatRuntime_026ce698,PTR_s_runtimeCloudAllowed_026ae210);
        local_119 = 0;
        local_3d4 = 1;
        if (((ulong)puVar3 & 1) != 0) {
          puVar3 = PTR_WCRQuickChatRuntime_026ce698;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRQuickChatRuntime_026ce698,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          local_119 = 1;
          local_118 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_3d4 = (uint)puVar3 ^ 1;
        }
        if ((local_119 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_118);
        }
        if ((local_3d4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ);
        }
        local_e9 = 1;
        local_fc = 1;
      }
    }
    else {
      (**(code **)(local_110 + 0x10))(local_110,local_f8);
      local_e9 = 1;
      local_fc = 1;
    }
    _objc_storeStrong(&local_110,0);
  }
  _objc_storeStrong(&local_108,0);
LAB_0162b418:
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_e9 & 1;
}


// _WCRChatToolbarDispatch @ 00ef5b64

byte _WCRChatToolbarDispatch(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined *puVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  undefined *puVar9;
  cfstringStruct *pcVar10;
  int iVar11;
  ulong local_500;
  char *local_4c0;
  uint local_49c;
  byte local_43c;
  byte local_42c;
  byte local_41c;
  byte local_40c;
  char *local_3f8;
  byte local_3f0;
  byte local_3ec;
  byte local_3bc;
  byte local_3ac;
  byte local_3a0;
  byte local_39c;
  byte local_38c;
  byte local_36c;
  char *local_340;
  char *local_320;
  char *local_318;
  char *local_300;
  ulong local_2a0;
  bool local_291;
  ulong local_290;
  ulong local_288;
  ulong local_280;
  ulong local_278;
  byte local_269;
  char *local_268;
  byte local_259;
  char *local_258;
  char *local_250;
  char *local_248;
  byte local_239;
  cfstringStruct *local_238;
  ulong local_230;
  cfstringStruct *local_228;
  ulong local_220;
  ulong local_218;
  ulong local_210;
  ulong local_208;
  undefined1 local_1fa;
  byte local_1f9;
  undefined *local_1f8;
  byte local_1e9;
  undefined *local_1e8;
  byte local_1d9;
  undefined *local_1d8;
  byte local_1c9;
  undefined *local_1c8;
  bool local_1b9;
  char *local_1b8;
  char *local_1b0;
  char *local_1a8;
  undefined *local_1a0;
  char *local_198;
  byte local_189;
  undefined *local_188;
  byte local_179;
  undefined *local_178;
  byte local_169;
  undefined *local_168;
  byte local_159;
  undefined *local_158;
  byte local_149;
  undefined *local_148;
  ulong local_140;
  bool local_131;
  char *local_130;
  char *local_128;
  char *local_120;
  undefined *local_118;
  undefined *local_110;
  char *local_108;
  uint local_fc;
  undefined *local_f8;
  char *local_f0;
  byte local_e1;
  char *local_e0;
  char *local_d8;
  bool local_c9;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  byte local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a0 = 0;
  _objc_storeStrong(&local_a0,param_1);
  local_a8 = 0;
  _objc_storeStrong(&local_a8,param_2);
  uVar3 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_action)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_00eee23c();
  _objc_retainAutoreleasedReturnValue();
  local_b0 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  pcVar5 = "WCRefineHelper";
  _objc_getClass();
  uVar3 = local_a8;
  puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_b8 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar6);
  local_c9 = false;
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_300 = (char *)0x0;
  }
  else {
    local_300 = PTR_WCRefineEmoticonToolsHelper_026ce448;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonToolsHelper_026ce448,PTR_s_chatViewControllerFromView__026ab918,
               local_a8);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = local_300;
  }
  local_c9 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_300;
  if ((local_c9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  pcVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  local_e1 = 0;
  if (pcVar5 == (char *)0x0) {
    pcVar7 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_findTopVC_0269d290);
    if (((ulong)pcVar7 & 1) == 0) {
      local_320 = (char *)0x0;
    }
    else {
      local_320 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      local_e1 = 1;
      local_e0 = local_320;
    }
    local_318 = local_320;
  }
  else {
    local_318 = local_c0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = local_318;
  if ((local_e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  uVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isEqualToString__0269ccc8,&cf_wcr_adjust);
  if ((uVar3 & 1) != 0) {
    pcVar5 = "WCRefineChatToolbarViewController";
    _objc_getClass();
    local_f8 = PTR_s_presentAdjustmentFromViewControl_026ab920;
    local_f0 = pcVar5;
    if ((local_d8 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_respondsToSelector__026ca818,
                   PTR_s_presentAdjustmentFromViewControl_026ab920), ((ulong)pcVar5 & 1) == 0)) {
      local_91 = 0;
      local_fc = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,local_f8,local_d8);
      local_91 = 1;
      local_fc = 1;
    }
    goto LAB_00ef8880;
  }
  uVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isEqualToString__0269ccc8,&cf_wcr_add);
  if ((uVar3 & 1) != 0) {
    pcVar5 = "WCRefineChatToolbarViewController";
    _objc_getClass();
    local_110 = PTR_s_presentAddFromViewController__026ab928;
    local_108 = pcVar5;
    if ((local_d8 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_respondsToSelector__026ca818,
                   PTR_s_presentAddFromViewController__026ab928), ((ulong)pcVar5 & 1) == 0)) {
      local_91 = 0;
      local_fc = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_108,local_110,local_d8);
      local_91 = 1;
      local_fc = 1;
    }
    goto LAB_00ef8880;
  }
  uVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isEqualToString__0269ccc8,&cf_wcr_search);
  if ((uVar3 & 1) != 0) {
    puVar6 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
               PTR_s_openChatSearchFromBaseMsgViewCon_026ab930,local_d8);
    if ((((ulong)puVar6 & 1) == 0) &&
       (puVar6 = PTR_WCRefineTopBarProfileCardPresenter_026ce228,
       (*(code *)PTR__objc_msgSend_02578628)
                 (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
                  PTR_s_openCurrentChatSearch_026ab938), ((ulong)puVar6 & 1) == 0)) {
      local_118 = PTR_s_onSearchButton__026ab940;
      pcVar5 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_respondsToSelector__026ca818,PTR_s_onSearchButton__026ab940);
      if (((ulong)pcVar5 & 1) == 0) {
        local_91 = 0;
        local_fc = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,local_118,0);
        local_91 = 1;
        local_fc = 1;
      }
    }
    else {
      local_91 = 1;
      local_fc = 1;
    }
    goto LAB_00ef8880;
  }
  uVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isEqualToString__0269ccc8,&cf_wcr_settings);
  if ((uVar3 & 1) != 0) {
    pcVar5 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_respondsToSelector__026ca818,
               PTR_s_isPluginVersionCloudHardBlocked_0269db50);
    if ((((ulong)pcVar5 & 1) == 0) ||
       (pcVar5 = local_b8,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_b8,PTR_s_isPluginVersionCloudHardBlocked_0269db50), ((ulong)pcVar5 & 1) == 0
       )) {
      _WCRefinePreferredPluginHubViewController();
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = pcVar5;
      FUN_00ef8900();
      local_91 = (byte)pcVar7 & 1;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      local_fc = 1;
    }
    else {
      pcVar5 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_respondsToSelector__026ca818,
                 PTR_s_presentPluginVersionBlockedUpdat_0269db58);
      if (((ulong)pcVar5 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_presentPluginVersionBlockedUpdat_0269db58);
      }
      local_91 = 1;
      local_fc = 1;
    }
    goto LAB_00ef8880;
  }
  uVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isEqualToString__0269ccc8,&cf_wcr_manage);
  if ((uVar3 & 1) != 0) {
    local_340 = "WCRefineChatToolbarViewController";
    _objc_getClass();
    local_131 = false;
    bVar1 = local_340 == (char *)0x0;
    local_120 = local_340;
    if (bVar1) {
      local_340 = (char *)0x0;
    }
    else {
      _objc_alloc_init();
      local_130 = local_340;
    }
    local_131 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_128 = local_340;
    if ((local_131 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_130);
    }
    pcVar5 = local_128;
    FUN_00ef8900(local_128,local_d8);
    local_91 = (byte)pcVar5 & 1;
    local_fc = 1;
    _objc_storeStrong(&local_128,0);
    goto LAB_00ef8880;
  }
  uVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_hasPrefix__0269d320,&cf_wcr_builtin_);
  uVar3 = local_b0;
  if ((uVar4 & 1) != 0) {
    pcVar10 = &cf_wcr_builtin_;
    (*(code *)PTR__objc_msgSend_02578628)(&cf_wcr_builtin_,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_substringFromIndex__0269d120,pcVar10);
    _objc_retainAutoreleasedReturnValue();
    local_140 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8,&cf_optimize);
    if ((uVar3 & 1) == 0) {
      uVar3 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_140,PTR_s_isEqualToString__0269ccc8,&cf_emoticon_search);
      if ((uVar3 & 1) == 0) {
        uVar3 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_isEqualToString__0269ccc8,&cf_album);
        if ((uVar3 & 1) == 0) {
          uVar3 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_isEqualToString__0269ccc8,&cf_scan);
          if ((uVar3 & 1) == 0) {
            uVar3 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_140,PTR_s_isEqualToString__0269ccc8,&cf_share_card);
            if ((uVar3 & 1) == 0) {
              uVar3 = local_140;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_140,PTR_s_isEqualToString__0269ccc8,&cf_offline_pay);
              bVar2 = (byte)uVar3;
              if ((uVar3 & 1) == 0) {
                uVar3 = local_140;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_140,PTR_s_isEqualToString__0269ccc8,&cf_newline);
                if ((uVar3 & 1) == 0) {
                  uVar3 = local_140;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_140,PTR_s_isEqualToString__0269ccc8,&cf_fullscreen);
                  if ((uVar3 & 1) == 0) {
                    uVar3 = local_140;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_140,PTR_s_isEqualToString__0269ccc8,&cf_float_window);
                    if ((uVar3 & 1) == 0) {
                      uVar3 = local_140;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_140,PTR_s_isEqualToString__0269ccc8,&cf_file_manager);
                      if ((uVar3 & 1) == 0) {
                        uVar3 = local_140;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_140,PTR_s_isEqualToString__0269ccc8,&cf_red_envelope);
                        if ((uVar3 & 1) == 0) {
                          uVar3 = local_140;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_140,PTR_s_isEqualToString__0269ccc8,&cf_transfer);
                          if ((uVar3 & 1) == 0) {
                            uVar3 = local_140;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_140,PTR_s_isEqualToString__0269ccc8,&cf_camera);
                            if ((uVar3 & 1) == 0) {
                              uVar3 = local_140;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_140,PTR_s_isEqualToString__0269ccc8,&cf_call);
                              if (((uVar3 & 1) == 0) &&
                                 (uVar3 = local_140,
                                 (*(code *)PTR__objc_msgSend_02578628)
                                           (local_140,PTR_s_isEqualToString__0269ccc8,&cf_video_call
                                           ), (uVar3 & 1) == 0)) {
                                uVar3 = local_140;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_140,PTR_s_isEqualToString__0269ccc8,&cf_mention);
                                if ((uVar3 & 1) == 0) {
                                  uVar3 = local_140;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_140,PTR_s_isEqualToString__0269ccc8,
                                             &cf_anonymous_at);
                                  if ((uVar3 & 1) == 0) {
                                    uVar3 = local_140;
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_140,PTR_s_isEqualToString__0269ccc8,&cf_paste);
                                    if ((uVar3 & 1) == 0) {
                                      uVar3 = local_140;
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_140,PTR_s_isEqualToString__0269ccc8,
                                                 &cf_clipboard);
                                      if ((uVar3 & 1) == 0) {
                                        uVar3 = local_140;
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (local_140,PTR_s_isEqualToString__0269ccc8,
                                                   &cf_find_user);
                                        if ((uVar3 & 1) == 0) {
                                          uVar3 = local_140;
                                          (*(code *)PTR__objc_msgSend_02578628)
                                                    (local_140,PTR_s_isEqualToString__0269ccc8,
                                                     &cf_quick_reply);
                                          if ((uVar3 & 1) == 0) {
                                            uVar3 = local_140;
                                            (*(code *)PTR__objc_msgSend_02578628)
                                                      (local_140,PTR_s_isEqualToString__0269ccc8,
                                                       &cf_moments);
                                            if ((uVar3 & 1) == 0) {
                                              uVar3 = local_140;
                                              (*(code *)PTR__objc_msgSend_02578628)
                                                        (local_140,PTR_s_isEqualToString__0269ccc8,
                                                         &cf_finder);
                                              if ((uVar3 & 1) == 0) {
                                                uVar3 = local_140;
                                                (*(code *)PTR__objc_msgSend_02578628)
                                                          (local_140,PTR_s_isEqualToString__0269ccc8
                                                           ,&cf_aggregate_search);
                                                if ((uVar3 & 1) == 0) {
                                                  uVar3 = local_140;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_140,
                                                             PTR_s_isEqualToString__0269ccc8,
                                                             &cf_edit_moments);
                                                  if ((uVar3 & 1) == 0) {
                                                    uVar3 = local_140;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_140,
                                                               PTR_s_isEqualToString__0269ccc8,
                                                               &cf_pat);
                                                    if ((uVar3 & 1) == 0) {
                                                      uVar3 = local_140;
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (local_140,
                                                                 PTR_s_isEqualToString__0269ccc8,
                                                                 &cf_small_signal);
                                                      if ((uVar3 & 1) == 0) {
                                                        uVar3 = local_140;
                                                        (*(code *)PTR__objc_msgSend_02578628)
                                                                  (local_140,
                                                                   PTR_s_isEqualToString__0269ccc8,
                                                                   &cf_voice_pack);
                                                        if ((uVar3 & 1) == 0) {
                                                          uVar3 = local_140;
                                                          (*(code *)PTR__objc_msgSend_02578628)
                                                                    (local_140,
                                                                     PTR_s_isEqualToString__0269ccc8
                                                                     ,&cf_attachment_manage);
                                                          if ((uVar3 & 1) == 0) {
                                                            uVar3 = local_140;
                                                            (*(code *)PTR__objc_msgSend_02578628)
                                                                      (local_140,
                                                                                                                                              
                                                  PTR_s_isEqualToString__0269ccc8,&cf_theme_exchange
                                                  );
                                                  if ((uVar3 & 1) == 0) {
                                                    uVar3 = local_140;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_140,
                                                               PTR_s_isEqualToString__0269ccc8,
                                                               &cf_theme_life_mall);
                                                    if ((uVar3 & 1) == 0) {
                                                      uVar3 = local_140;
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (local_140,
                                                                 PTR_s_isEqualToString__0269ccc8,
                                                                 &cf_suanguo_exchange);
                                                      if ((uVar3 & 1) == 0) {
                                                        uVar3 = local_140;
                                                        (*(code *)PTR__objc_msgSend_02578628)
                                                                  (local_140,
                                                                   PTR_s_isEqualToString__0269ccc8,
                                                                   &cf_themebox_exchange);
                                                        if ((uVar3 & 1) == 0) {
                                                          uVar3 = local_140;
                                                          (*(code *)PTR__objc_msgSend_02578628)
                                                                    (local_140,
                                                                     PTR_s_isEqualToString__0269ccc8
                                                                     ,&cf_tp_exchange);
                                                          if ((uVar3 & 1) == 0) {
                                                            uVar3 = local_140;
                                                            (*(code *)PTR__objc_msgSend_02578628)
                                                                      (local_140,
                                                                                                                                              
                                                  PTR_s_isEqualToString__0269ccc8,&cf_location);
                                                  if ((uVar3 & 1) == 0) {
                                                    uVar3 = local_140;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_140,
                                                               PTR_s_isEqualToString__0269ccc8,
                                                               &cf_file);
                                                    if ((uVar3 & 1) == 0) {
                                                      uVar3 = local_140;
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (local_140,
                                                                 PTR_s_isEqualToString__0269ccc8,
                                                                 &cf_voice_input);
                                                      if ((uVar3 & 1) == 0) {
                                                        uVar3 = local_140;
                                                        (*(code *)PTR__objc_msgSend_02578628)
                                                                  (local_140,
                                                                   PTR_s_isEqualToString__0269ccc8,
                                                                   &cf_favorites);
                                                        if ((uVar3 & 1) == 0) {
                                                          uVar4 = local_140;
                                                          (*(code *)PTR__objc_msgSend_02578628)
                                                                    (local_140,
                                                                     PTR_s_isEqualToString__0269ccc8
                                                                     ,&cf_xiaobawang);
                                                          uVar3 = local_a8;
                                                          if ((uVar4 & 1) == 0) {
                                                            uVar3 = local_140;
                                                            (*(code *)PTR__objc_msgSend_02578628)
                                                                      (local_140,
                                                                                                                                              
                                                  PTR_s_isEqualToString__0269ccc8,&cf_clear_chat);
                                                  if ((uVar3 & 1) == 0) {
                                                    uVar3 = local_140;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_140,
                                                               PTR_s_isEqualToString__0269ccc8,
                                                               &cf_theme_mode);
                                                    if ((uVar3 & 1) == 0) {
                                                      uVar3 = local_140;
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (local_140,
                                                                 PTR_s_isEqualToString__0269ccc8,
                                                                 &cf_change_font);
                                                      if ((uVar3 & 1) == 0) {
                                                        local_91 = 0;
                                                        local_fc = 1;
                                                      }
                                                      else {
                                                        puVar6 = 
                                                  PTR_WCRefineFontBeautifyViewController_026ceb48;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (
                                                  PTR_WCRefineFontBeautifyViewController_026ceb48,
                                                  PTR_s_presentFontPickerFromViewControl_026ab968,
                                                  local_d8);
                                                  local_91 = (byte)puVar6 & 1;
                                                  local_fc = 1;
                                                  }
                                                  }
                                                  else {
                                                    puVar6 = PTR_WCRefineHelper_026ce000;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCRefineHelper_026ce000,
                                                               PTR_s_toggleWeChatDarkMode_026ab960);
                                                    local_1fa = SUB81(puVar6,0);
                                                    pcVar10 = &cf__RbceY;
                                                    if (((ulong)puVar6 & 1) == 0) {
                                                      pcVar10 = &cf_RbceY1Y_;
                                                    }
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCRefineHelper_026ce000,
                                                               PTR_s_showModernToast__0269ce78,
                                                               pcVar10);
                                                    local_91 = 1;
                                                    local_fc = 1;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = local_a8;
                                                    FUN_00efaa40(local_a8,local_d8);
                                                    local_91 = (byte)uVar3 & 1;
                                                    local_fc = 1;
                                                  }
                                                  }
                                                  else {
                                                    local_90 = &cf__8s;
                                                    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                                                                                                              
                                                  PTR_s_arrayWithObjects_count__0269cc70,&local_90,1
                                                  );
                                                  _objc_retainAutoreleasedReturnValue();
                                                  FUN_00ef96a0();
                                                  local_91 = (byte)uVar3 & 1;
                                                  (*(code *)PTR__objc_release_02578630)(puVar6);
                                                  local_fc = 1;
                                                  }
                                                  }
                                                  else {
                                                    uVar4 = local_a8;
                                                    FUN_00ef9544(local_a8,&
                                                  cf_onMyFavoritesButtonClicked_,0);
                                                  uVar3 = local_a8;
                                                  local_1f9 = 0;
                                                  local_43c = 1;
                                                  if ((uVar4 & 1) == 0) {
                                                    local_88 = &cf_6e;
                                                    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                                                                                                              
                                                  PTR_s_arrayWithObjects_count__0269cc70,&local_88,1
                                                  );
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_1f9 = 1;
                                                  local_1f8 = puVar6;
                                                  FUN_00ef96a0();
                                                  local_43c = (byte)uVar3;
                                                  }
                                                  local_91 = local_43c & 1;
                                                  if ((local_1f9 & 1) != 0) {
                                                    (*(code *)PTR__objc_release_02578630)(local_1f8)
                                                    ;
                                                  }
                                                  local_fc = 1;
                                                  }
                                                  }
                                                  else {
                                                    uVar4 = local_a8;
                                                    FUN_00ef9544(local_a8,&
                                                  cf_onVoiceInputButtonClicked_,0);
                                                  uVar3 = local_a8;
                                                  local_1e9 = 0;
                                                  local_42c = 1;
                                                  if ((uVar4 & 1) == 0) {
                                                    local_80 = &cf_eQ;
                                                    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                                                                                                              
                                                  PTR_s_arrayWithObjects_count__0269cc70,&local_80,1
                                                  );
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_1e9 = 1;
                                                  local_1e8 = puVar6;
                                                  FUN_00ef96a0();
                                                  local_42c = (byte)uVar3;
                                                  }
                                                  local_91 = local_42c & 1;
                                                  if ((local_1e9 & 1) != 0) {
                                                    (*(code *)PTR__objc_release_02578630)(local_1e8)
                                                    ;
                                                  }
                                                  local_fc = 1;
                                                  }
                                                  }
                                                  else {
                                                    uVar4 = local_a8;
                                                    FUN_00ef9544(local_a8,&cf_onFileBrowserClicked_,
                                                                 0);
                                                    uVar3 = local_a8;
                                                    local_1d9 = 0;
                                                    local_41c = 1;
                                                    if ((uVar4 & 1) == 0) {
                                                      local_78 = &cf_eN;
                                                      puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                                                                                                                  
                                                  PTR_s_arrayWithObjects_count__0269cc70,&local_78,1
                                                  );
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_1d9 = 1;
                                                  local_1d8 = puVar6;
                                                  FUN_00ef96a0();
                                                  local_41c = (byte)uVar3;
                                                  }
                                                  local_91 = local_41c & 1;
                                                  if ((local_1d9 & 1) != 0) {
                                                    (*(code *)PTR__objc_release_02578630)(local_1d8)
                                                    ;
                                                  }
                                                  local_fc = 1;
                                                  }
                                                  }
                                                  else {
                                                    uVar4 = local_a8;
                                                    FUN_00ef9544(local_a8,&
                                                  cf_onLocationButtonClicked_,0);
                                                  uVar3 = local_a8;
                                                  local_1c9 = 0;
                                                  local_40c = 1;
                                                  if ((uVar4 & 1) == 0) {
                                                    local_70 = &cf_MOn_;
                                                    local_68 = &cf_0Wp;
                                                    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                                                                                                              
                                                  PTR_s_arrayWithObjects_count__0269cc70,&local_70,2
                                                  );
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_1c9 = 1;
                                                  local_1c8 = puVar6;
                                                  FUN_00ef96a0();
                                                  local_40c = (byte)uVar3;
                                                  }
                                                  local_91 = local_40c & 1;
                                                  if ((local_1c9 & 1) != 0) {
                                                    (*(code *)PTR__objc_release_02578630)(local_1c8)
                                                    ;
                                                  }
                                                  local_fc = 1;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = local_a8;
                                                    FUN_00ef8b3c(local_a8,&
                                                  cf_onOpenWCRefineBoLuoRedeem);
                                                  local_91 = (byte)uVar3 & 1;
                                                  local_fc = 1;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = local_a8;
                                                    FUN_00ef8b3c(local_a8,&
                                                  cf_onOpenWCRefineThemeBoxRedeem);
                                                  local_91 = (byte)uVar3 & 1;
                                                  local_fc = 1;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = local_a8;
                                                    FUN_00ef8b3c(local_a8,&
                                                  cf_onOpenWCRefineSuanGuoRedeem);
                                                  local_91 = (byte)uVar3 & 1;
                                                  local_fc = 1;
                                                  }
                                                  }
                                                  else {
                                                    _WCRThemeLifeOpenMallMiniProgram();
                                                    local_91 = 1;
                                                    local_fc = 1;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = local_a8;
                                                    FUN_00ef8b3c(local_a8,&cf_onOpenThemeExchange);
                                                    local_91 = (byte)uVar3 & 1;
                                                    local_fc = 1;
                                                  }
                                                  }
                                                  else {
                                                    local_3f8 = 
                                                  "WCRefineChatAttachmentViewController";
                                                  _objc_getClass();
                                                  local_1b9 = false;
                                                  bVar1 = local_3f8 == (char *)0x0;
                                                  local_1a8 = local_3f8;
                                                  if (bVar1) {
                                                    local_3f8 = (char *)0x0;
                                                  }
                                                  else {
                                                    _objc_alloc_init();
                                                    local_1b8 = local_3f8;
                                                  }
                                                  local_1b9 = !bVar1;
                                                  (*(code *)PTR__objc_retain_02578638)();
                                                  local_1b0 = local_3f8;
                                                  if ((local_1b9 & 1U) != 0) {
                                                    (*(code *)PTR__objc_release_02578630)(local_1b8)
                                                    ;
                                                  }
                                                  pcVar5 = local_1b0;
                                                  FUN_00ef8900(local_1b0,local_d8);
                                                  local_91 = (byte)pcVar5 & 1;
                                                  local_fc = 1;
                                                  _objc_storeStrong(&local_1b0,0);
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = local_a8;
                                                    FUN_00ef8b3c(local_a8,&
                                                  cf_onOpenWCRefineVoicePack);
                                                  local_91 = (byte)uVar3 & 1;
                                                  local_fc = 1;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = local_a8;
                                                    FUN_00ef8b3c(local_a8,&
                                                  cf_onWCRefineSendSmallSignal);
                                                  local_3f0 = 1;
                                                  if ((uVar3 & 1) == 0) {
                                                    puVar6 = 
                                                  PTR_WCRefineTopBarProfileCardPresenter_026ce228;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (
                                                  PTR_WCRefineTopBarProfileCardPresenter_026ce228,
                                                  PTR_s_performStandaloneActionWithID_co_0269ea58,
                                                  _WCRefineProfileCardActionIDSmallSignal,0);
                                                  local_3f0 = (byte)puVar6;
                                                  }
                                                  local_91 = local_3f0 & 1;
                                                  local_fc = 1;
                                                  }
                                                  }
                                                  else {
                                                    puVar6 = 
                                                  PTR_WCRefineTopBarProfileCardPresenter_026ce228;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (
                                                  PTR_WCRefineTopBarProfileCardPresenter_026ce228,
                                                  PTR_s_performStandaloneActionWithID_co_0269ea58,
                                                  _WCRefineProfileCardActionIDPat,0);
                                                  local_91 = (byte)puVar6 & 1;
                                                  local_fc = 1;
                                                  }
                                                  }
                                                  else {
                                                    pcVar5 = local_d8;
                                                    FUN_00efa8a0();
                                                    local_91 = (byte)pcVar5 & 1;
                                                    local_fc = 1;
                                                  }
                                                }
                                                else {
                                                  uVar3 = local_a8;
                                                  FUN_00ef8b3c(local_a8,&
                                                  cf_onOpenWCRefineSearchPlugin);
                                                  local_3ec = 1;
                                                  if ((uVar3 & 1) == 0) {
                                                    puVar6 = 
                                                  PTR_WCRefineTopBarProfileCardPresenter_026ce228;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (
                                                  PTR_WCRefineTopBarProfileCardPresenter_026ce228,
                                                  PTR_s_performStandaloneActionWithID_co_0269ea58,
                                                  _WCRefineProfileCardActionIDAggregateSearch,0);
                                                  local_3ec = (byte)puVar6;
                                                  }
                                                  local_91 = local_3ec & 1;
                                                  local_fc = 1;
                                                }
                                              }
                                              else {
                                                uVar3 = local_a8;
                                                FUN_00ef8b3c(local_a8,&cf_onOpenWCFinderTimeline);
                                                if ((uVar3 & 1) == 0) {
                                                  pcVar10 = &cf_WCFinderTimelineTabViewController;
                                                  FUN_00ef8c74();
                                                  _objc_retainAutoreleasedReturnValue();
                                                  pcVar8 = pcVar10;
                                                  FUN_00ef8900();
                                                  local_91 = (byte)pcVar8 & 1;
                                                  (*(code *)PTR__objc_release_02578630)(pcVar10);
                                                  local_fc = 1;
                                                }
                                                else {
                                                  local_91 = 1;
                                                  local_fc = 1;
                                                }
                                              }
                                            }
                                            else {
                                              uVar3 = local_a8;
                                              FUN_00ef8b3c(local_a8,&cf_onOpenWCTimeline);
                                              if ((uVar3 & 1) == 0) {
                                                pcVar10 = &cf_WCTimeLineViewController;
                                                FUN_00ef8c74();
                                                _objc_retainAutoreleasedReturnValue();
                                                pcVar8 = pcVar10;
                                                FUN_00ef8900();
                                                local_91 = (byte)pcVar8 & 1;
                                                (*(code *)PTR__objc_release_02578630)(pcVar10);
                                                local_fc = 1;
                                              }
                                              else {
                                                local_91 = 1;
                                                local_fc = 1;
                                              }
                                            }
                                          }
                                          else {
                                            pcVar5 = "WCRefineQuickReplyStore";
                                            _objc_getClass();
                                            local_1a0 = 
                                            PTR_s_presentPanelFromViewController_i_026ab958;
                                            local_198 = pcVar5;
                                            (*(code *)PTR__objc_msgSend_02578628)
                                                      (pcVar5,PTR_s_respondsToSelector__026ca818,
                                                                                                              
                                                  PTR_s_presentPanelFromViewController_i_026ab958);
                                            if (((ulong)pcVar5 & 1) == 0) {
                                              local_91 = 0;
                                              local_fc = 1;
                                            }
                                            else {
                                              (*(code *)PTR__objc_msgSend_02578628)
                                                        (local_198,local_1a0,local_d8,local_a8);
                                              local_91 = 1;
                                              local_fc = 1;
                                            }
                                          }
                                        }
                                        else {
                                          (*(code *)PTR__objc_msgSend_02578628)
                                                    (PTR_WCRefineFindUserSupport_026ceb40,
                                                     PTR_s_presentFindUserPrompt_026ab950);
                                          local_91 = 1;
                                          local_fc = 1;
                                        }
                                      }
                                      else {
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (PTR_WCRClipboardHistoryStore_026ce680,
                                                   PTR_s_presentHistoryPanelFromViewContr_026aabc8,
                                                   local_d8,local_a8);
                                        local_91 = 1;
                                        local_fc = 1;
                                      }
                                    }
                                    else {
                                      puVar6 = PTR_WCRClipboardHistoryStore_026ce680;
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (PTR_WCRClipboardHistoryStore_026ce680,
                                                 PTR_s_pasteMostRecentIntoInputToolView_026ab948,
                                                 local_a8);
                                      local_91 = (byte)puVar6 & 1;
                                      local_fc = 1;
                                    }
                                  }
                                  else {
                                    uVar3 = local_a8;
                                    FUN_00ef51a0();
                                    if (((uVar3 & 1) == 0) &&
                                       (puVar6 = PTR_WCRefineAnonymousAtHelper_026ce0e0,
                                       (*(code *)PTR__objc_msgSend_02578628)
                                                 (PTR_WCRefineAnonymousAtHelper_026ce0e0,
                                                  PTR_s_isCurrentGroupChat_026a43e0),
                                       ((ulong)puVar6 & 1) == 0)) {
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (PTR_WCRefineHelper_026ce000,
                                                 PTR_s_showModernToast__0269ce78,&cf__W_J_N_O_u_ST_)
                                      ;
                                      local_91 = 1;
                                      local_fc = 1;
                                    }
                                    else {
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (PTR_WCRefineAnonymousAtHelper_026ce0e0,
                                                 PTR_s_promptAnonymousAtAllWithReferMsg_026a43e8,0);
                                      local_91 = 1;
                                      local_fc = 1;
                                    }
                                  }
                                }
                                else {
                                  uVar3 = local_a8;
                                  FUN_00efa5f8();
                                  local_91 = (byte)uVar3 & 1;
                                  local_fc = 1;
                                }
                              }
                              else {
                                uVar3 = local_a8;
                                FUN_00efa37c();
                                local_91 = (byte)uVar3 & 1;
                                local_fc = 1;
                              }
                            }
                            else {
                              uVar4 = local_a8;
                              FUN_00ef9544(local_a8,&cf_onCameraControllerClicked_,0);
                              uVar3 = local_a8;
                              local_189 = 0;
                              local_3bc = 1;
                              if ((uVar4 & 1) == 0) {
                                local_60 = &cf_bDd;
                                local_58 = &cf_v_g;
                                puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                           PTR_s_arrayWithObjects_count__0269cc70,&local_60,2);
                                _objc_retainAutoreleasedReturnValue();
                                local_189 = 1;
                                local_188 = puVar6;
                                FUN_00ef96a0();
                                local_3bc = (byte)uVar3;
                              }
                              local_91 = local_3bc & 1;
                              if ((local_189 & 1) != 0) {
                                (*(code *)PTR__objc_release_02578630)(local_188);
                              }
                              local_fc = 1;
                            }
                          }
                          else {
                            uVar4 = local_a8;
                            FUN_00ef9544(local_a8,&cf_onTransferButtonClicked_,0);
                            uVar3 = local_a8;
                            local_179 = 0;
                            local_3ac = 1;
                            if ((uVar4 & 1) == 0) {
                              local_50 = &cf_l_;
                              puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                         PTR_s_arrayWithObjects_count__0269cc70,&local_50,1);
                              _objc_retainAutoreleasedReturnValue();
                              local_179 = 1;
                              local_178 = puVar6;
                              FUN_00ef96a0();
                              local_3ac = (byte)uVar3;
                            }
                            local_91 = local_3ac & 1;
                            if ((local_179 & 1) != 0) {
                              (*(code *)PTR__objc_release_02578630)(local_178);
                            }
                            local_fc = 1;
                          }
                        }
                        else {
                          uVar4 = local_a8;
                          FUN_00ef9544(local_a8,&cf_onRedEnvelopesClicked_,0);
                          uVar3 = local_a8;
                          local_169 = 0;
                          local_3a0 = 1;
                          if ((uVar4 & 1) == 0) {
                            local_48 = &cf__S;
                            puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                       PTR_s_arrayWithObjects_count__0269cc70,&local_48,1);
                            _objc_retainAutoreleasedReturnValue();
                            local_169 = 1;
                            local_168 = puVar6;
                            FUN_00ef96a0();
                            local_3a0 = (byte)uVar3;
                          }
                          local_91 = local_3a0 & 1;
                          if ((local_169 & 1) != 0) {
                            (*(code *)PTR__objc_release_02578630)(local_168);
                          }
                          local_fc = 1;
                        }
                      }
                      else {
                        uVar3 = local_a8;
                        FUN_00ef8b3c(local_a8,&cf_onOpenWCRefineFileManager);
                        local_91 = (byte)uVar3 & 1;
                        local_fc = 1;
                      }
                    }
                    else {
                      uVar3 = local_a8;
                      FUN_00ef9bd0(local_a8,local_d8);
                      local_91 = (byte)uVar3 & 1;
                      local_fc = 1;
                    }
                  }
                  else {
                    uVar3 = local_a8;
                    FUN_00ef8b3c(local_a8,&cf_onFullScreenButtonClicked);
                    local_39c = 1;
                    if ((uVar3 & 1) == 0) {
                      uVar3 = local_a8;
                      FUN_00ef8b3c(local_a8,&cf_jumpToFullScreenVC);
                      local_39c = (byte)uVar3;
                    }
                    local_91 = local_39c & 1;
                    local_fc = 1;
                  }
                }
                else {
                  uVar3 = local_a8;
                  FUN_00ef9544(local_a8,&cf_insertString_,&cf_newline_s_);
                  local_91 = (byte)uVar3 & 1;
                  local_fc = 1;
                }
              }
              else {
                FUN_00ef9a2c();
                local_91 = bVar2 & 1;
                local_fc = 1;
              }
            }
            else {
              uVar4 = local_a8;
              FUN_00ef9544(local_a8,&cf_onShareCardButtonClicked_,0);
              uVar3 = local_a8;
              local_159 = 0;
              local_38c = 1;
              if ((uVar4 & 1) == 0) {
                local_40 = &cf_TGr;
                puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70
                           ,&local_40,1);
                _objc_retainAutoreleasedReturnValue();
                local_159 = 1;
                local_158 = puVar6;
                FUN_00ef96a0();
                local_38c = (byte)uVar3;
              }
              local_91 = local_38c & 1;
              if ((local_159 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_158);
              }
              local_fc = 1;
            }
          }
          else {
            pcVar10 = &cf_CameraScanViewController;
            FUN_00ef8c74();
            _objc_retainAutoreleasedReturnValue();
            pcVar8 = pcVar10;
            FUN_00ef8900();
            local_91 = (byte)pcVar8 & 1;
            (*(code *)PTR__objc_release_02578630)(pcVar10);
            local_fc = 1;
          }
        }
        else {
          uVar4 = local_a8;
          FUN_00ef9544(local_a8,&cf_onMediaBrowserClicked_,0);
          uVar3 = local_a8;
          local_149 = 0;
          local_36c = 1;
          if ((uVar4 & 1) == 0) {
            local_38 = &cf_vQ;
            local_30 = &cf_gqGr;
            puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_38,2);
            _objc_retainAutoreleasedReturnValue();
            local_149 = 1;
            local_148 = puVar6;
            FUN_00ef96a0();
            local_36c = (byte)uVar3;
          }
          local_91 = local_36c & 1;
          if ((local_149 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_148);
          }
          local_fc = 1;
        }
      }
      else {
        uVar3 = local_a8;
        FUN_00ef8e1c(local_a8,local_d8);
        local_91 = (byte)uVar3 & 1;
        local_fc = 1;
      }
    }
    else {
      uVar3 = local_a8;
      FUN_00ef8b3c(local_a8,&cf_onOpenWCRefineSettingVC);
      if ((uVar3 & 1) == 0) {
        pcVar10 = &cf_WCRefineRootViewController;
        FUN_00ef8c74();
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = pcVar10;
        FUN_00ef8900();
        local_91 = (byte)pcVar8 & 1;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        local_fc = 1;
      }
      else {
        local_91 = 1;
        local_fc = 1;
      }
    }
    _objc_storeStrong(&local_140,0);
    goto LAB_00ef8880;
  }
  uVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_hasPrefix__0269d320,&cf_chat_);
  uVar3 = local_b0;
  if ((uVar4 & 1) != 0) {
    pcVar10 = &cf_chat_;
    (*(code *)PTR__objc_msgSend_02578628)(&cf_chat_,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_substringFromIndex__0269d120,pcVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar4 = uVar3;
    _WCRChatToolbarOpenContact(uVar3,puVar9,local_d8);
    local_91 = (byte)uVar4 & 1;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_fc = 1;
    goto LAB_00ef8880;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_hasPrefix__0269d320,&cf_wcr_attachment_);
  if ((uVar3 & 1) != 0) {
    uVar3 = local_a8;
    _WCRChatToolbarAttachmentController();
    _objc_retainAutoreleasedReturnValue();
    local_208 = uVar3;
    if (uVar3 == 0) {
      FUN_00ef8b3c(local_a8,&cf_initAttachmentView);
      uVar4 = local_a8;
      _WCRChatToolbarAttachmentController();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_208;
      local_208 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    uVar3 = local_b0;
    pcVar10 = &cf_wcr_attachment_;
    (*(code *)PTR__objc_msgSend_02578628)(&cf_wcr_attachment_,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_substringFromIndex__0269d120,pcVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_208;
    local_210 = uVar3;
    FUN_00ef4940();
    local_218 = uVar4;
    for (local_220 = 0; local_220 < local_218; local_220 = local_220 + 1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_228 = &cf___;
      local_238 = &cf___;
      uVar3 = local_208;
      FUN_00ef49d8(local_208,local_220,&local_238);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_228,local_238);
      local_230 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8,local_b0);
      local_49c = 1;
      if ((uVar3 & 1) == 0) {
        pcVar10 = local_228;
        (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_isEqualToString__0269ccc8,local_210);
        local_49c = 1;
        if (((ulong)pcVar10 & 1) == 0) {
          uVar3 = local_230;
          (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_hasSuffix__0269d018,local_210);
          local_49c = (uint)uVar3;
        }
      }
      local_239 = (byte)local_49c & 1;
      if (((local_49c & 1) == 0) ||
         (uVar3 = local_208,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_208,PTR_s_respondsToSelector__026ca818,PTR_s_OnAttachmentClicked__0269f348
                   ), (uVar3 & 1) == 0)) {
        local_fc = 4;
      }
      else {
        local_4c0 = "AttachmentButton";
        _objc_getClass();
        local_259 = 0;
        local_269 = 0;
        local_248 = local_4c0;
        if (local_4c0 == (char *)0x0) {
          local_4c0 = PTR__OBJC_CLASS___UIButton_026cdfc8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
          _objc_retainAutoreleasedReturnValue();
          local_269 = 1;
          local_268 = local_4c0;
        }
        else {
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)PTR__CGRectZero_025782f0,
                     *(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
                     *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
                     *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
          local_259 = 1;
          local_258 = local_4c0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_250 = local_4c0;
        if ((local_269 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_268);
        }
        if ((local_259 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_258);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_250,PTR_s_setTag__026caa80,&DAT_00004650 + local_220);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_208,PTR_s_OnAttachmentClicked__0269f348,local_250);
        local_91 = 1;
        local_fc = 1;
        _objc_storeStrong(&local_250,0);
      }
      _objc_storeStrong(&local_230);
      _objc_storeStrong(&local_228,0);
      iVar11 = local_fc - 4;
      if (iVar11 != 0) goto LAB_00ef8158;
    }
    uVar3 = local_210;
    (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_isEqualToString__0269ccc8,&cf_gqGr);
    if ((((uVar3 & 1) == 0) &&
        (uVar3 = local_210,
        (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_isEqualToString__0269ccc8,&cf_vQ),
        (uVar3 & 1) == 0)) ||
       (uVar3 = local_a8, FUN_00ef9544(local_a8,&cf_onMediaBrowserClicked_,0), (uVar3 & 1) == 0)) {
      uVar3 = local_210;
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_isEqualToString__0269ccc8,&cf_bDd);
      if ((((uVar3 & 1) == 0) &&
          (uVar3 = local_210,
          (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_isEqualToString__0269ccc8,&cf_v_g),
          (uVar3 & 1) == 0)) ||
         (uVar3 = local_a8, FUN_00ef9544(local_a8,&cf_onCameraControllerClicked_,0),
         (uVar3 & 1) == 0)) {
        uVar3 = local_210;
        (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_isEqualToString__0269ccc8,&cf_6e);
        if (((uVar3 & 1) == 0) ||
           (uVar3 = local_a8, FUN_00ef9544(local_a8,&cf_onMyFavoritesButtonClicked_,0),
           (uVar3 & 1) == 0)) {
          iVar11 = 1;
          local_91 = 0;
          local_fc = 1;
        }
        else {
          iVar11 = 1;
          local_91 = 1;
          local_fc = 1;
        }
      }
      else {
        iVar11 = 1;
        local_91 = 1;
        local_fc = 1;
      }
    }
    else {
      iVar11 = 1;
      local_91 = 1;
      local_fc = 1;
    }
LAB_00ef8158:
    _objc_storeStrong(iVar11,&local_210);
    _objc_storeStrong(&local_208,0);
    goto LAB_00ef8880;
  }
  uVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_hasPrefix__0269d320,&cf_wcr_custom_);
  if ((uVar3 & 1) == 0) {
    uVar3 = local_b0;
    _NSSelectorFromString();
    uVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
    if (((uVar4 == 0) ||
        (uVar4 = local_b0,
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_rangeOfString__0269d838,&cf__),
        uVar4 != 0x7fffffffffffffff)) ||
       (uVar4 = local_a8,
       (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_respondsToSelector__026ca818,uVar3),
       (uVar4 & 1) == 0)) {
      puVar6 = PTR_s_onClickItemAction__026ab978;
      uVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
      if ((uVar3 == 0) ||
         (uVar3 = local_a8,
         (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_respondsToSelector__026ca818,puVar6),
         (uVar3 & 1) == 0)) {
        local_91 = 0;
        local_fc = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,puVar6,local_b0);
        local_91 = 1;
        local_fc = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,uVar3);
      local_91 = 1;
      local_fc = 1;
    }
    goto LAB_00ef8880;
  }
  uVar3 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a0,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomKind);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_00eee23c();
  _objc_retainAutoreleasedReturnValue();
  local_278 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a0,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomPayload);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_00eee23c();
  _objc_retainAutoreleasedReturnValue();
  local_280 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_278;
  (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_isEqualToString__0269ccc8,&cf_text);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_280, (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_length_0269cca0),
     uVar3 == 0)) {
    uVar3 = local_278;
    (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_isEqualToString__0269ccc8,&cf_url);
    if ((((uVar3 & 1) == 0) &&
        (uVar3 = local_278,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_278,PTR_s_isEqualToString__0269ccc8,&cf_miniprogram), (uVar3 & 1) == 0)) ||
       (uVar3 = local_280, (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_length_0269cca0),
       uVar3 == 0)) {
      uVar3 = local_278;
      (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_isEqualToString__0269ccc8,&cf_selector);
      if (((((uVar3 & 1) == 0) &&
           (uVar3 = local_278,
           (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_isEqualToString__0269ccc8,&cf_auto)
           , (uVar3 & 1) == 0)) &&
          (uVar3 = local_278,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_278,PTR_s_isEqualToString__0269ccc8,&cf_controller), (uVar3 & 1) == 0))
         || (uVar3 = local_280,
            (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_length_0269cca0), uVar3 == 0))
      goto LAB_00ef86e8;
      uVar3 = local_278;
      (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_isEqualToString__0269ccc8,&cf_auto);
      if (((uVar3 & 1) != 0) ||
         (uVar3 = local_278,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_278,PTR_s_isEqualToString__0269ccc8,&cf_controller), (uVar3 & 1) != 0)) {
        uVar3 = local_280;
        FUN_00ef8c74();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = uVar3 != 0;
        local_2a0 = uVar3;
        if (bVar1) {
          FUN_00ef8900(uVar3,local_d8);
          local_91 = (byte)uVar3 & 1;
        }
        local_fc = (uint)bVar1;
        _objc_storeStrong(&local_2a0,0);
        if (local_fc != 0) goto LAB_00ef8704;
      }
      uVar3 = local_280;
      (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_rangeOfString__0269d838,&cf__);
      if ((uVar3 == 0x7fffffffffffffff) &&
         (uVar3 = local_a8, FUN_00ef8b3c(0,local_a8,local_280), (uVar3 & 1) != 0)) {
        local_91 = 1;
        local_fc = 1;
      }
      else {
        puVar6 = PTR_s_onClickItemAction__026ab978;
        uVar3 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,PTR_s_respondsToSelector__026ca818,PTR_s_onClickItemAction__026ab978);
        if ((uVar3 & 1) == 0) goto LAB_00ef86e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,puVar6,local_280);
        local_91 = 1;
        local_fc = 1;
      }
    }
    else {
      uVar4 = local_280;
      FUN_00efabf4(uVar3,local_280,local_d8);
      local_91 = (byte)uVar4 & 1;
      local_fc = 1;
    }
  }
  else {
    uVar3 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_respondsToSelector__026ca818,PTR_s_insertString__0269dc28);
    if ((uVar3 & 1) == 0) {
      uVar3 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_respondsToSelector__026ca818,PTR_s_textView_0269d0f8);
      local_291 = false;
      bVar1 = (uVar3 & 1) == 0;
      if (bVar1) {
        local_500 = 0;
      }
      else {
        local_500 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_textView_0269d0f8);
        _objc_retainAutoreleasedReturnValue();
        local_290 = local_500;
      }
      local_291 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_288 = local_500;
      if ((local_291 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_290);
      }
      uVar3 = local_288;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_288,PTR_s_respondsToSelector__026ca818,PTR_s_insertText__026a43a8);
      bVar1 = (uVar3 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_insertText__026a43a8,local_280);
        local_91 = 1;
      }
      local_fc = (uint)bVar1;
      _objc_storeStrong(&local_288,0);
      if (local_fc == 0) {
LAB_00ef86e8:
        local_91 = 0;
        local_fc = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_insertString__0269dc28,local_280);
      local_91 = 1;
      local_fc = 1;
    }
  }
LAB_00ef8704:
  _objc_storeStrong(&local_280);
  _objc_storeStrong(&local_278,0);
LAB_00ef8880:
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_91 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


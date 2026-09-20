// wcRefineSearchSupplementKeywordsForPluginClass: @ 014c7854

/* Function Stack Size: 0x18 bytes */

ID WCRefineSearchManager::wcRefineSearchSupplementKeywordsForPluginClass_
             (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_820;
  undefined *local_818;
  undefined4 local_80c;
  ulong local_808;
  SEL local_800;
  ID local_7f8;
  undefined *local_7f0;
  cfstringStruct *local_7e8;
  cfstringStruct *local_7e0;
  cfstringStruct *local_7d8;
  cfstringStruct *local_7d0;
  cfstringStruct *local_7c8;
  cfstringStruct *local_7c0;
  cfstringStruct *local_7b8;
  cfstringStruct *local_7b0;
  cfstringStruct *local_7a8;
  cfstringStruct *local_7a0;
  cfstringStruct *local_798;
  cfstringStruct *local_790;
  cfstringStruct *local_788;
  cfstringStruct *local_780;
  cfstringStruct *local_778;
  cfstringStruct *local_770;
  cfstringStruct *local_768;
  cfstringStruct *local_760;
  cfstringStruct *local_758;
  cfstringStruct *local_750;
  cfstringStruct *local_748;
  cfstringStruct *local_740;
  cfstringStruct *local_738;
  cfstringStruct *local_730;
  cfstringStruct *local_728;
  cfstringStruct *local_720;
  cfstringStruct *local_718;
  cfstringStruct *local_710;
  cfstringStruct *local_708;
  cfstringStruct *local_700;
  cfstringStruct *local_6f8;
  cfstringStruct *local_6f0;
  cfstringStruct *local_6e8;
  cfstringStruct *local_6e0;
  cfstringStruct *local_6d8;
  cfstringStruct *local_6d0;
  cfstringStruct *local_6c8;
  cfstringStruct *local_6c0;
  cfstringStruct *local_6b8;
  cfstringStruct *local_6b0;
  cfstringStruct *local_6a8;
  cfstringStruct *local_6a0;
  cfstringStruct *local_698;
  cfstringStruct *local_690;
  cfstringStruct *local_688;
  cfstringStruct *local_680;
  cfstringStruct *local_678;
  cfstringStruct *local_670;
  cfstringStruct *local_668;
  cfstringStruct *local_660;
  cfstringStruct *local_658;
  cfstringStruct *local_650;
  cfstringStruct *local_648;
  cfstringStruct *local_640;
  cfstringStruct *local_638;
  cfstringStruct *local_630;
  cfstringStruct *local_628;
  cfstringStruct *local_620;
  cfstringStruct *local_618;
  cfstringStruct *local_610;
  cfstringStruct *local_608;
  cfstringStruct *local_600;
  cfstringStruct *local_5f8;
  cfstringStruct *local_5f0;
  cfstringStruct *local_5e8;
  cfstringStruct *local_5e0;
  cfstringStruct *local_5d8;
  cfstringStruct *local_5d0;
  cfstringStruct *local_5c8;
  cfstringStruct *local_5c0;
  cfstringStruct *local_5b8;
  cfstringStruct *local_5b0;
  cfstringStruct *local_5a8;
  cfstringStruct *local_5a0;
  cfstringStruct *local_598;
  cfstringStruct *local_590;
  cfstringStruct *local_588;
  cfstringStruct *local_580;
  cfstringStruct *local_578;
  cfstringStruct *local_570;
  cfstringStruct *local_568;
  cfstringStruct *local_560;
  cfstringStruct *local_558;
  cfstringStruct *local_550;
  cfstringStruct *local_548;
  cfstringStruct *local_540;
  cfstringStruct *local_538;
  cfstringStruct *local_530;
  cfstringStruct *local_528;
  cfstringStruct *local_520;
  cfstringStruct *local_518;
  cfstringStruct *local_510;
  cfstringStruct *local_508;
  cfstringStruct *local_500;
  cfstringStruct *local_4f8;
  cfstringStruct *local_4f0;
  cfstringStruct *local_4e8;
  cfstringStruct *local_4e0;
  cfstringStruct *local_4d8;
  cfstringStruct *local_4d0;
  cfstringStruct *local_4c8;
  cfstringStruct *local_4c0;
  cfstringStruct *local_4b8;
  cfstringStruct *local_4b0;
  cfstringStruct *local_4a8;
  cfstringStruct *local_4a0;
  cfstringStruct *local_498;
  cfstringStruct *local_490;
  cfstringStruct *local_488;
  cfstringStruct *local_480;
  cfstringStruct *local_478;
  cfstringStruct *local_470;
  cfstringStruct *local_468;
  cfstringStruct *local_460;
  cfstringStruct *local_458;
  cfstringStruct *local_450;
  cfstringStruct *local_448;
  cfstringStruct *local_440;
  cfstringStruct *local_438;
  cfstringStruct *local_430;
  cfstringStruct *local_428;
  cfstringStruct *local_420;
  cfstringStruct *local_418;
  cfstringStruct *local_410;
  cfstringStruct *local_408;
  cfstringStruct *local_400;
  cfstringStruct *local_3f8;
  cfstringStruct *local_3f0;
  cfstringStruct *local_3e8;
  cfstringStruct *local_3e0;
  cfstringStruct *local_3d8;
  cfstringStruct *local_3d0;
  cfstringStruct *local_3c8;
  cfstringStruct *local_3c0;
  cfstringStruct *local_3b8;
  cfstringStruct *local_3b0;
  cfstringStruct *local_3a8;
  cfstringStruct *local_3a0;
  cfstringStruct *local_398;
  cfstringStruct *local_390;
  cfstringStruct *local_388;
  cfstringStruct *local_380;
  cfstringStruct *local_378;
  cfstringStruct *local_370;
  cfstringStruct *local_368;
  cfstringStruct *local_360;
  cfstringStruct *local_358;
  cfstringStruct *local_350;
  cfstringStruct *local_348;
  cfstringStruct *local_340;
  cfstringStruct *local_338;
  cfstringStruct *local_330;
  cfstringStruct *local_328;
  cfstringStruct *local_320;
  cfstringStruct *local_318;
  cfstringStruct *local_310;
  cfstringStruct *local_308;
  cfstringStruct *local_300;
  cfstringStruct *local_2f8;
  cfstringStruct *local_2f0;
  cfstringStruct *local_2e8;
  cfstringStruct *local_2e0;
  cfstringStruct *local_2d8;
  cfstringStruct *local_2d0;
  cfstringStruct *local_2c8;
  cfstringStruct *local_2c0;
  cfstringStruct *local_2b8;
  cfstringStruct *local_2b0;
  cfstringStruct *local_2a8;
  cfstringStruct *local_2a0;
  cfstringStruct *local_298;
  cfstringStruct *local_290;
  cfstringStruct *local_288;
  cfstringStruct *local_280;
  cfstringStruct *local_278;
  cfstringStruct *local_270;
  cfstringStruct *local_268;
  cfstringStruct *local_260;
  cfstringStruct *local_258;
  cfstringStruct *local_250;
  cfstringStruct *local_248;
  cfstringStruct *local_240;
  cfstringStruct *local_238;
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  cfstringStruct *local_220;
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
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
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
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
  local_808 = 0;
  local_800 = param_2;
  local_7f8 = param_1;
  _objc_storeStrong(&local_808,param_3);
  uVar1 = local_808;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_808,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineAutoFunctionViewController);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_808;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_808,PTR_s_isEqualToString__0269ccc8,
               &cf_WCRefineFriendRelationCheckViewController);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_808;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_808,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineKeywordAlertViewController);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_808;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_808,PTR_s_isEqualToString__0269ccc8,
                   &cf_WCRefineGeneralFunctionViewController);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_808;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_808,PTR_s_isEqualToString__0269ccc8,
                     &cf_WCRefineDoNotDisturbSettingsViewController);
          if ((uVar1 & 1) == 0) {
            uVar1 = local_808;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_808,PTR_s_isEqualToString__0269ccc8,
                       &cf_WCRefineChatRoomFunctionViewController);
            if ((uVar1 & 1) == 0) {
              uVar1 = local_808;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_808,PTR_s_isEqualToString__0269ccc8,
                         &cf_WCRefineMessageSyncRuleViewController);
              if ((uVar1 & 1) == 0) {
                uVar1 = local_808;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_808,PTR_s_isEqualToString__0269ccc8,
                           &cf_WCRefineScheduledTaskViewController);
                if ((uVar1 & 1) == 0) {
                  uVar1 = local_808;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_808,PTR_s_isEqualToString__0269ccc8,
                             &cf_WCRefineEmoticonFunctionViewController);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = local_808;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_808,PTR_s_isEqualToString__0269ccc8,
                               &cf_WCRefineEmoticonGroupManageViewController);
                    if ((uVar1 & 1) == 0) {
                      uVar1 = local_808;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_808,PTR_s_isEqualToString__0269ccc8,
                                 &cf_WCRefineGroupManagementViewController);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = local_808;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_808,PTR_s_isEqualToString__0269ccc8,
                                   &cf_WCRefineTelegramGroupingViewController);
                        if ((uVar1 & 1) == 0) {
                          uVar1 = local_808;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_808,PTR_s_isEqualToString__0269ccc8,
                                     &cf_WCRefineTelegramGroupingTabsViewController);
                          if ((uVar1 & 1) == 0) {
                            uVar1 = local_808;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_808,PTR_s_isEqualToString__0269ccc8,
                                       &cf_WCRefineChatAttachmentViewController);
                            if ((uVar1 & 1) == 0) {
                              uVar1 = local_808;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_808,PTR_s_isEqualToString__0269ccc8,
                                         &cf_WCRefineLongPressMenuViewController);
                              if ((uVar1 & 1) == 0) {
                                uVar1 = local_808;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_808,PTR_s_isEqualToString__0269ccc8,
                                           &cf_WCRefineTextReplaceViewController);
                                if ((uVar1 & 1) == 0) {
                                  uVar1 = local_808;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_808,PTR_s_isEqualToString__0269ccc8,
                                             &cf_WCRefineTextPlaceholderViewController);
                                  if ((uVar1 & 1) == 0) {
                                    uVar1 = local_808;
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_808,PTR_s_isEqualToString__0269ccc8,
                                               &cf_WCRefineWeChatHomeTextViewController);
                                    if ((uVar1 & 1) == 0) {
                                      uVar1 = local_808;
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_808,PTR_s_isEqualToString__0269ccc8,
                                                 &cf_WCRefineMomentsViewController);
                                      if ((uVar1 & 1) == 0) {
                                        uVar1 = local_808;
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (local_808,PTR_s_isEqualToString__0269ccc8,
                                                   &cf_ThemeExchangeViewController);
                                        if ((uVar1 & 1) == 0) {
                                          uVar1 = local_808;
                                          (*(code *)PTR__objc_msgSend_02578628)
                                                    (local_808,PTR_s_hasPrefix__0269d320,
                                                     &cf_ThemeBox);
                                          if ((uVar1 & 1) == 0) {
                                            puVar3 = *(undefined **)PTR____NSArray0___02578280;
                                            (*(code *)PTR__objc_retain_02578638)();
                                            local_80c = 1;
                                            local_7f0 = puVar3;
                                          }
                                          else {
                                            puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
                                            (*(code *)PTR__objc_msgSend_02578628)
                                                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,
                                                       PTR_s_arrayWithObjects__026af658,&cf__NvP_);
                                            _objc_retainAutoreleasedReturnValue();
                                            IVar2 = local_7f8;
                                            local_818 = puVar3;
                                            (*(code *)PTR__objc_msgSend_02578628)
                                                      (local_7f8,
                                                       PTR_s_getViewControllerFriendlyName__026aa500
                                                       ,local_808);
                                            _objc_retainAutoreleasedReturnValue();
                                            local_820 = IVar2;
                                            (*(code *)PTR__objc_msgSend_02578628)
                                                      (IVar2,PTR_s_length_0269cca0);
                                            if (IVar2 != 0) {
                                              (*(code *)PTR__objc_msgSend_02578628)
                                                        (local_818,PTR_s_addObject__0269d180,
                                                         local_820);
                                            }
                                            puVar3 = local_818;
                                            (*(code *)PTR__objc_retain_02578638)();
                                            local_7f0 = puVar3;
                                            local_80c = 1;
                                            _objc_storeStrong(&local_820);
                                            _objc_storeStrong(&local_818,0);
                                          }
                                        }
                                        else {
                                          local_7e8 = &cf__NQQbc;
                                          local_7e0 = &cf__NvP_;
                                          local_7d8 = &cf_xg_N;
                                          local_7d0 = &cf_ThemePro;
                                          local_7c8 = &cf_77Theme;
                                          local_7c0 = &cf__NaS_zzb;
                                          local_7b8 = &cf__NvP_RQQbc;
                                          local_7b0 = &::cf___;
                                          local_7a8 = &cf__Q_ScP;
                                          local_7a0 = &cf_L;
                                          local_798 = &cf_eQ_L;
                                          local_790 = &cf__NFUW;
                                          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                                          (*(code *)PTR__objc_msgSend_02578628)
                                                    (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                                     PTR_s_arrayWithObjects_count__0269cc70,
                                                     &local_7e8,0xc);
                                          _objc_retainAutoreleasedReturnValue();
                                          local_80c = 1;
                                          local_7f0 = puVar3;
                                        }
                                      }
                                      else {
                                        local_788 = &cf_gSW_eS;
                                        local_780 = &cf__eS;
                                        local_778 = &cf_gSW_eNR;
                                        local_770 = &cf_bv_eNR;
                                        local_768 = &cf_y_u>f_yN_kR_;
                                        local_760 = &cf_y_uSWu>f_yN_kR_;
                                        local_758 = &cf_N_kR_;
                                        local_750 = &cf_N_kRD_;
                                        local_748 = &cf_SgSWN_kR_;
                                        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                                   PTR_s_arrayWithObjects_count__0269cc70,&local_788
                                                   ,9);
                                        _objc_retainAutoreleasedReturnValue();
                                        local_80c = 1;
                                        local_7f0 = puVar3;
                                      }
                                    }
                                    else {
                                      local_740 = &cf__Oue_g;
                                      local_738 = &cf_n_v;
                                      local_730 = &cf_n_v;
                                      local_728 = &cf__vU_eW_;
                                      local_720 = &cf_n_v_;
                                      local_718 = &cf_bSn_vJ_Y;
                                      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                                 PTR_s_arrayWithObjects_count__0269cc70,&local_740,6
                                                );
                                      _objc_retainAutoreleasedReturnValue();
                                      local_80c = 1;
                                      local_7f0 = puVar3;
                                    }
                                  }
                                  else {
                                    local_710 = &cf_e_g_SMO;
                                    local_708 = &cf_eQFhe_g_SMO;
                                    local_700 = &cf_Fhe_g_SMO;
                                    local_6f8 = &cf_d__Fhe_g_SMO;
                                    local_6f0 = &cf_cOO;
                                    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                               PTR_s_arrayWithObjects_count__0269cc70,&local_710,5);
                                    _objc_retainAutoreleasedReturnValue();
                                    local_80c = 1;
                                    local_7f0 = puVar3;
                                  }
                                }
                                else {
                                  local_6e8 = &cf_N___TT;
                                  local_6e0 = &cf_e_g_SMO;
                                  local_6d8 = &cf__Ou;
                                  local_6d0 = &cf__Oue_g;
                                  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                             PTR_s_arrayWithObjects_count__0269cc70,&local_6e8,4);
                                  _objc_retainAutoreleasedReturnValue();
                                  local_80c = 1;
                                  local_7f0 = puVar3;
                                }
                              }
                              else {
                                local_6c8 = &cf_Mn_USc;
                                local_6c0 = &cf__cUSc;
                                local_6b8 = &cf__cUS;
                                local_6b0 = &cf_y_uUS;
                                local_6a8 = &cf_RdUS;
                                local_6a0 = &cf__INmReQS;
                                local_698 = &cf_USc_;
                                local_690 = &cf_bcVh;
                                local_688 = &cf__TT;
                                local_680 = &cf_mR_z_;
                                local_678 = &cf_mRc;
                                puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                           PTR_s_arrayWithObjects_count__0269cc70,&local_6c8,0xb);
                                _objc_retainAutoreleasedReturnValue();
                                local_80c = 1;
                                local_7f0 = puVar3;
                              }
                            }
                            else {
                              local_670 = &cf_Mn_DN;
                              local_668 = &cf_J_YDNO9e;
                              local_660 = &cf_J_YDN;
                              local_658 = &cf_mRDN;
                              local_650 = &cf_bcVh;
                              local_648 = &cf__TT;
                              local_640 = &cf_DNNN_u;
                              local_638 = &cf_y_uDN;
                              puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                         PTR_s_arrayWithObjects_count__0269cc70,&local_670,8);
                              _objc_retainAutoreleasedReturnValue();
                              local_80c = 1;
                              local_7f0 = puVar3;
                            }
                          }
                          else {
                            local_630 = &cf_R__t;
                            local_628 = &cf_bXT_t;
                            local_620 = &cf_mRR_;
                            local_618 = &cf_R_R_;
                            local_610 = &cf__mR;
                            local_608 = &cf_OON_kR_;
                            local_600 = &::cf___;
                            local_5f8 = &cf__INR_;
                            local_5f0 = &cf__QcS;
                            local_5e8 = &cf__cR_O;
                            local_5e0 = &cf_n_vJ_Y;
                            local_5d8 = &cf_R_OUS;
                            local_5d0 = &cf_R_OUS7h_;
                            puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                       PTR_s_arrayWithObjects_count__0269cc70,&local_630,0xd);
                            _objc_retainAutoreleasedReturnValue();
                            local_80c = 1;
                            local_7f0 = puVar3;
                          }
                        }
                        else {
                          local_5c8 = &cf_u5ubR_;
                          local_5c0 = &cf_5ubR_;
                          local_5b8 = &::cf_T;
                          local_5b0 = &cf_h__R_;
                          local_5a8 = &cf_On;
                          local_5a0 = &cf_R_h__E__N;
                          local_598 = &cf_u>f_yh__pe;
                          local_590 = &cf_nn_vJ_Y;
                          local_588 = &cf_n_vJ_Y;
                          local_580 = &cf__cR_O;
                          local_578 = &cf_R_OUS;
                          local_570 = &cf_bXT_t;
                          local_568 = &cf__INofr;
                          local_560 = &cf_Yr;
                          local_558 = &cf_hQO_nRRbc;
                          local_550 = &cf_STLv;
                          local_548 = &cf__snR;
                          local_540 = &cf_c_yhV;
                          local_538 = &cf_VW;
                          local_530 = &cf_R_a;
                          local_528 = &cf_>f_y_gh;
                          local_520 = &cf_>f_yR__p;
                          local_518 = &cf_bS_N_p;
                          local_510 = &cf__INh__W_S;
                          local_508 = &cf_nYT_N;
                          local_500 = &cf_TRR_;
                          local_4f8 = &cf_OYuSR_b__;
                          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                     PTR_s_arrayWithObjects_count__0269cc70,&local_5c8,0x1b);
                          _objc_retainAutoreleasedReturnValue();
                          local_80c = 1;
                          local_7f0 = puVar3;
                        }
                      }
                      else {
                        local_4f0 = &cf_uR__t;
                        local_4e8 = &cf__T_uuR_;
                        local_4e0 = &cf_R__t;
                        local_4d8 = &cf_yJR__t;
                        local_4d0 = &cf__JR__t;
                        local_4c8 = &cf_bR__j_;
                        local_4c0 = &cf_U_;
                        local_4b8 = &cf_c__YS_JN6e_;
                        local_4b0 = &::cf_Q;
                        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                   PTR_s_arrayWithObjects_count__0269cc70,&local_4f0,9);
                        _objc_retainAutoreleasedReturnValue();
                        local_80c = 1;
                        local_7f0 = puVar3;
                      }
                    }
                    else {
                      local_4a8 = &cf_h_R__t;
                      local_4a0 = &cf__eh_R_;
                      local_498 = &cf_h_R_;
                      local_490 = &cf_e_R_;
                      local_488 = &cf__gR_;
                      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                 PTR_s_arrayWithObjects_count__0269cc70,&local_4a8,5);
                      _objc_retainAutoreleasedReturnValue();
                      local_80c = 1;
                      local_7f0 = puVar3;
                    }
                  }
                  else {
                    local_480 = &cf_h_R;
                    local_478 = &cf_J_YVGrlh_;
                    local_470 = &cf_J_YVGr_;
                    local_468 = &cf_lh_;
                    local_460 = &cf_lQOSVGrmR0Rh_;
                    local_458 = &cf_lQOSVGrlh_S;
                    local_450 = &cf_lQOSVGr_cUS;
                    local_448 = &cf_OX_h_0RvQ;
                    local_440 = &cf_h_0W_Y_S;
                    local_438 = &cf_h___babc;
                    local_430 = &cf_J_Yh_lb;
                    local_428 = &cf_bh_Sb;
                    local_420 = &::cf_Sb;
                    local_418 = &cf__YS;
                    local_410 = &cf__eh_R_;
                    local_408 = &cf_h_R_;
                    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSArray_026cdfe0,
                               PTR_s_arrayWithObjects_count__0269cc70,&local_480,0x10);
                    _objc_retainAutoreleasedReturnValue();
                    local_80c = 1;
                    local_7f0 = puVar3;
                  }
                }
                else {
                  local_400 = &cf__eNR;
                  local_3f8 = &cf__T_udkNR;
                  local_3f0 = &cf_NRTy;
                  local_3e8 = &cf_vhJ_Y;
                  local_3e0 = &cf_Q___W;
                  local_3d8 = &cf_OSN_;
                  local_3d0 = &cf_eW_Q_;
                  local_3c8 = &cf_gbL_j_;
                  local_3c0 = &cf_kgQS;
                  local_3b8 = &cf_Se_R;
                  local_3b0 = &cf_khTQ;
                  local_3a8 = &cf_kee_R;
                  local_3a0 = &cf__e;
                  local_398 = &::cf_R;
                  local_390 = &cf_gbLeg;
                  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSArray_026cdfe0,
                             PTR_s_arrayWithObjects_count__0269cc70,&local_400,0xf);
                  _objc_retainAutoreleasedReturnValue();
                  local_80c = 1;
                  local_7f0 = puVar3;
                }
              }
              else {
                local_388 = &cf_mo_Tek;
                local_380 = &cf_TekR;
                local_378 = &cf__T_udkR;
                local_370 = &cf_RTy;
                local_368 = &cf_egn_J;
                local_360 = &cf_v_T_a;
                local_358 = &cf_c__S;
                local_350 = &cf_vhJ_Y;
                local_348 = &cf_mo___W;
                local_340 = &cf_S_TsQ_;
                local_338 = &cf_cdsQ_;
                local_330 = &cf_Teke_;
                local_328 = &cf_Ne_gw;
                local_320 = &cf_w_;
                local_318 = &cf_NlS;
                local_310 = &cf_w<h_;
                local_308 = &cf_NTekeHeQ;
                local_300 = &cf_keuHeek;
                local_2f8 = &cf_lS_e;
                puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70
                           ,&local_388,0x13);
                _objc_retainAutoreleasedReturnValue();
                local_80c = 1;
                local_7f0 = puVar3;
              }
            }
            else {
              local_2f0 = &cf__JR;
              local_2e8 = &cf_eQ__k;
              local_2e0 = &::cf___;
              local_2d8 = &cf_U_;
              local_2d0 = &cf_eXRmRU_;
              local_2c8 = &cf_e_RmRU_;
              local_2c0 = &cf_RmRU_;
              local_2b8 = &cf_OX_0RU_;
              local_2b0 = &cf__yrc_y;
              local_2a8 = &::cf__;
              local_2a0 = &cf__yr_bgN;
              local_298 = &cf__yrun_v_t;
              local_290 = &cf_n_v__N;
              local_288 = &cf_n_v_t;
              local_280 = &cf__yrN;
              local_278 = &cf_mo_Tek;
              local_270 = &cf__eNR;
              local_268 = &cf__ST_;
              local_260 = &cf__wcrat;
              local_258 = &cf__wcratall;
              local_250 = &cf__Owc_t;
              local_248 = &cf_7Re_4YP;
              local_240 = &cf__XT4YP7Re;
              local_238 = &cf_7Re_XT4YP;
              local_230 = &cf_MQSbpb_t;
              local_228 = &cf_e_RMQSbpb;
              local_220 = &cf_ybMQSbpbn_;
              local_218 = &cf__NMQSbpb;
              local_210 = &cf_SmMQSbpb;
              local_208 = &cf_bSvJ_Y;
              local_200 = &cf__NbSvJ_Y;
              local_1f8 = &cf_SmbSvJ_Y;
              local_1f0 = &cf_b_J;
              local_1e8 = &cf_cd_J;
              local_1e0 = &::cf___;
              local_1d8 = &cf_gbL;
              local_1d0 = &cf_OYuU_;
              local_1c8 = &::cf___;
              puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_2f0,0x26);
              _objc_retainAutoreleasedReturnValue();
              local_80c = 1;
              local_7f0 = puVar3;
            }
          }
          else {
            local_1c0 = &cf_Rpb_j_;
            local_1b8 = &cf_MQSbpb;
            local_1b0 = &cf_Rpbe;
            local_1a8 = &cf_hQ_Y;
            local_1a0 = &cf_RVY;
            local_198 = &cf___R;
            local_190 = &cf_cdO;
            local_188 = &cf_c_O;
            local_180 = &cf_bO;
            local_178 = &cf_ceeg5u;
            local_170 = &cf_uRS;
            local_168 = &cf_u_wceQS;
            puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_1c0,0xc);
            _objc_retainAutoreleasedReturnValue();
            local_80c = 1;
            local_7f0 = puVar3;
          }
        }
        else {
          local_160 = &cf_8__uR;
          local_158 = &cf_Rpb_j_;
          local_150 = &cf_MQSbpb;
          local_148 = &cf_ceeg5u;
          local_140 = &cf__YSsQ_hKm;
          local_138 = &cf_USRhKm;
          local_130 = &cf_u<OUSR;
          local_128 = &cf_n_vbSJ_Y;
          local_120 = &cf_lQOSn_v;
          local_118 = &cf_gRSn_v;
          local_110 = &cf_8_Qn_v;
          local_108 = &cf_sQ_c;
          local_100 = &cf_sQ_;
          local_f8 = &cf_RVY;
          local_f0 = &cf_sQ_RVY;
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_160,0xf);
          _objc_retainAutoreleasedReturnValue();
          local_80c = 1;
          local_7f0 = puVar3;
        }
      }
      else {
        local_e8 = &cf_sQ_c;
        local_e0 = &cf_sQ_;
        local_d8 = &cf_RVY;
        local_d0 = &cf_sQ_RVY;
        local_c8 = &cf_VY;
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_e8,5);
        _objc_retainAutoreleasedReturnValue();
        local_80c = 1;
        local_7f0 = puVar3;
      }
    }
    else {
      local_c0 = &cf__YSsQ_hKm;
      local_b8 = &cf_u<OUSR;
      local_b0 = &cf_USRhKm;
      local_a8 = &cf_elnx__u7b;
      local_a0 = &cf_N_f_YS;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0
                 ,5);
      _objc_retainAutoreleasedReturnValue();
      local_80c = 1;
      local_7f0 = puVar3;
    }
  }
  else {
    local_98 = &cf_RR;
    local_90 = &cf__SR;
    local_88 = &cf_R__R;
    local_80 = &cf_Ryb_S;
    local_78 = &cf_RdVb;
    local_70 = &::cf_b;
    local_68 = &cf_dVb;
    local_60 = &cf_b_bgN;
    local_58 = &::cf_b;
    local_50 = &cf_N_knxb;
    local_48 = &::cf_b;
    local_40 = &cf_bTRVb;
    local_38 = &cf_RVb;
    local_30 = &cf_Vb;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_98,
               0xe);
    _objc_retainAutoreleasedReturnValue();
    local_80c = 1;
    local_7f0 = puVar3;
  }
  _objc_storeStrong(&local_808,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_7f0;
}


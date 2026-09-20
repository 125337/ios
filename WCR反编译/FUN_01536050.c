// FUN_01536050 @ 01536050

void FUN_01536050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  cfstringStruct *local_4e8;
  undefined *local_490;
  undefined4 local_488;
  undefined4 local_484;
  code *local_480;
  undefined *local_478;
  ulong local_470;
  undefined *local_468;
  undefined *local_460;
  undefined4 local_458;
  undefined4 local_454;
  code *local_450;
  undefined *local_448;
  ulong local_440;
  ulong local_438;
  ulong local_430;
  ulong local_428;
  ulong local_420;
  ulong local_418;
  undefined *local_410;
  undefined4 local_408;
  undefined4 local_404;
  code *local_400;
  undefined *local_3f8;
  ulong local_3f0;
  undefined *local_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  code *local_3d8;
  undefined *local_3d0;
  ulong local_3c8;
  undefined *local_3c0;
  undefined4 local_3b8;
  undefined4 local_3b4;
  code *local_3b0;
  undefined *local_3a8;
  ulong local_3a0;
  ulong local_398;
  undefined *local_390;
  undefined4 local_388;
  undefined4 local_384;
  code *local_380;
  undefined *local_378;
  ulong local_370;
  undefined *local_368;
  undefined4 local_360;
  undefined4 local_35c;
  code *local_358;
  undefined *local_350;
  ulong local_348;
  undefined *local_340;
  undefined4 local_338;
  undefined4 local_334;
  code *local_330;
  undefined *local_328;
  ulong local_320;
  undefined *local_318;
  undefined4 local_310;
  undefined4 local_30c;
  code *local_308;
  undefined *local_300;
  ulong local_2f8;
  byte local_2f0;
  byte local_2ed;
  undefined *local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  code *local_2d0;
  undefined *local_2c8;
  ulong local_2c0;
  undefined1 auStack_2b8 [8];
  ulong local_2b0;
  undefined1 auStack_2a8 [14];
  byte local_29a;
  byte local_299;
  undefined *local_298;
  undefined4 local_290;
  undefined4 local_28c;
  code *local_288;
  undefined *local_280;
  ulong local_278;
  undefined *local_270;
  undefined4 local_268;
  undefined4 local_264;
  code *local_260;
  undefined *local_258;
  ulong local_250;
  undefined *local_248;
  undefined *local_240;
  undefined8 local_238;
  cfstringStruct *local_230;
  long local_228;
  cfstringStruct *local_220;
  undefined8 local_218;
  undefined *local_210;
  undefined *local_208;
  long local_200;
  long local_1f8;
  ulong local_1f0;
  undefined *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  code *local_1d8;
  undefined *local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  ulong local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  ulong local_160;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  ulong local_138;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  ulong local_110;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  ulong local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  ulong local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  ulong local_98;
  ulong local_90;
  byte local_82;
  byte local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  byte local_69;
  ulong local_68;
  byte local_59;
  ulong local_58;
  byte local_49;
  ulong local_48;
  undefined4 local_3c;
  undefined8 local_38;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  if ((local_28 == 0) ||
     (uVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     uVar3 == 0)) {
    local_3c = 1;
  }
  else {
    uVar3 = local_28;
    FUN_01569fa0(local_28,local_30,local_38);
    if ((uVar3 & 1) == 0) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDTop);
      if ((uVar3 & 1) == 0) {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDMute);
        if ((uVar3 & 1) == 0) {
          uVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_isEqualToString__0269ccc8,
                     _WCRefineProfileCardActionIDMessageBlock);
          if ((uVar3 & 1) == 0) {
            uVar3 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_isEqualToString__0269ccc8,
                       _WCRefineProfileCardActionIDAvatarURL);
            if ((uVar3 & 1) == 0) {
              uVar4 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDRemark
                        );
              uVar3 = local_28;
              if ((uVar4 & 1) == 0) {
                uVar4 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_30,PTR_s_isEqualToString__0269ccc8,
                           _WCRefineProfileCardActionIDCustomAvatar);
                uVar3 = local_28;
                if ((uVar4 & 1) == 0) {
                  uVar4 = local_30;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_30,PTR_s_isEqualToString__0269ccc8,
                             _WCRefineProfileCardActionIDChangeWallpaper);
                  uVar3 = local_28;
                  if ((uVar4 & 1) == 0) {
                    uVar4 = local_30;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_30,PTR_s_isEqualToString__0269ccc8,
                               _WCRefineProfileCardActionIDAvatarFrame);
                    uVar3 = local_28;
                    if ((uVar4 & 1) == 0) {
                      uVar4 = local_30;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_30,PTR_s_isEqualToString__0269ccc8,
                                 _WCRefineProfileCardActionIDNameplate);
                      uVar3 = local_28;
                      if ((uVar4 & 1) == 0) {
                        uVar3 = local_30;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_30,PTR_s_isEqualToString__0269ccc8,
                                   _WCRefineProfileCardActionIDMessage);
                        puVar7 = PTR_WCRefinePrivateFriendManager_026ce160;
                        if ((uVar3 & 1) == 0) {
                          uVar4 = local_30;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_30,PTR_s_isEqualToString__0269ccc8,
                                     _WCRefineProfileCardActionIDChatRecord);
                          uVar3 = local_28;
                          if ((uVar4 & 1) == 0) {
                            uVar3 = local_30;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_30,PTR_s_isEqualToString__0269ccc8,
                                       _WCRefineProfileCardActionIDClearChat);
                            if ((uVar3 & 1) == 0) {
                              uVar3 = local_30;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_30,PTR_s_isEqualToString__0269ccc8,
                                         _WCRefineProfileCardActionIDNote);
                              if ((uVar3 & 1) == 0) {
                                uVar3 = local_30;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_30,PTR_s_isEqualToString__0269ccc8,
                                           _WCRefineProfileCardActionIDAggregateSearch);
                                if ((uVar3 & 1) == 0) {
                                  uVar3 = local_30;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_30,PTR_s_isEqualToString__0269ccc8,
                                             _WCRefineProfileCardActionIDDisplayMode);
                                  if ((uVar3 & 1) == 0) {
                                    uVar3 = local_30;
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_30,PTR_s_isEqualToString__0269ccc8,
                                               _WCRefineProfileCardActionIDThemeMode);
                                    if ((uVar3 & 1) == 0) {
                                      puVar7 = PTR_WCRefineProfileCardActionCatalog_026ced78;
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (PTR_WCRefineProfileCardActionCatalog_026ced78,
                                                 PTR_s_isCustomPageActionID__026b0670,local_30);
                                      uVar3 = local_30;
                                      if (((ulong)puVar7 & 1) == 0) {
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (local_30,PTR_s_isEqualToString__0269ccc8,
                                                   _WCRefineProfileCardActionIDStar);
                                        if ((uVar3 & 1) == 0) {
                                          uVar3 = local_30;
                                          (*(code *)PTR__objc_msgSend_02578628)
                                                    (local_30,PTR_s_isEqualToString__0269ccc8,
                                                     _WCRefineProfileCardActionIDPat);
                                          if ((uVar3 & 1) == 0) {
                                            uVar3 = local_30;
                                            (*(code *)PTR__objc_msgSend_02578628)
                                                      (local_30,PTR_s_isEqualToString__0269ccc8,
                                                       _WCRefineProfileCardActionIDSmallSignal);
                                            if ((uVar3 & 1) == 0) {
                                              uVar4 = local_30;
                                              (*(code *)PTR__objc_msgSend_02578628)
                                                        (local_30,PTR_s_isEqualToString__0269ccc8,
                                                         _WCRefineProfileCardActionIDTransfer);
                                              uVar3 = local_28;
                                              if ((uVar4 & 1) == 0) {
                                                uVar4 = local_30;
                                                (*(code *)PTR__objc_msgSend_02578628)
                                                          (local_30,PTR_s_isEqualToString__0269ccc8,
                                                           _WCRefineProfileCardActionIDRedEnvelope);
                                                uVar3 = local_28;
                                                if ((uVar4 & 1) == 0) {
                                                  uVar3 = local_30;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_30,
                                                  PTR_s_isEqualToString__0269ccc8,
                                                  _WCRefineProfileCardActionIDFakeRedEnvelope);
                                                  if ((uVar3 & 1) == 0) {
                                                    uVar3 = local_30;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_30,
                                                  PTR_s_isEqualToString__0269ccc8,
                                                  _WCRefineProfileCardActionIDRefreshGender);
                                                  if ((uVar3 & 1) == 0) {
                                                    uVar3 = local_30;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_30,
                                                  PTR_s_isEqualToString__0269ccc8,
                                                  _WCRefineProfileCardActionIDChatRoomFunction);
                                                  if ((uVar3 & 1) == 0) {
                                                    uVar4 = local_30;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_30,
                                                  PTR_s_isEqualToString__0269ccc8,
                                                  _WCRefineProfileCardActionIDVoiceCall);
                                                  uVar3 = local_28;
                                                  if ((uVar4 & 1) == 0) {
                                                    uVar4 = local_30;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_30,
                                                  PTR_s_isEqualToString__0269ccc8,
                                                  _WCRefineProfileCardActionIDVideoCall);
                                                  uVar3 = local_28;
                                                  if ((uVar4 & 1) == 0) {
                                                    uVar3 = local_30;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_30,
                                                  PTR_s_isEqualToString__0269ccc8,
                                                  _WCRefineProfileCardActionIDManage);
                                                  if ((uVar3 & 1) == 0) {
                                                    uVar3 = local_30;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_30,
                                                  PTR_s_isEqualToString__0269ccc8,
                                                  _WCRefineProfileCardActionIDAt);
                                                  if ((uVar3 & 1) == 0) {
                                                    uVar3 = local_30;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_30,
                                                  PTR_s_isEqualToString__0269ccc8,
                                                  _WCRefineProfileCardActionIDAnonymousAt);
                                                  if ((uVar3 & 1) == 0) {
                                                    uVar3 = local_30;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_30,
                                                  PTR_s_isEqualToString__0269ccc8,
                                                  _WCRefineProfileCardActionIDAnonymousAtAll);
                                                  if ((uVar3 & 1) == 0) {
                                                    uVar3 = local_30;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_30,
                                                  PTR_s_isEqualToString__0269ccc8,
                                                  _WCRefineProfileCardActionIDThemeDelivery);
                                                  if ((uVar3 & 1) == 0) {
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCRefineHelper_026ce000,
                                                               PTR_s_showModernToast__0269ce78,
                                                               &cf_Rf_g);
                                                    local_3c = 0;
                                                  }
                                                  else {
                                                    puVar7 = PTR_WCRefineConfig_026cdf58;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCRefineConfig_026cdf58,
                                                               PTR_s_shared_0269cad0);
                                                    _objc_retainAutoreleasedReturnValue();
                                                    puVar10 = puVar7;
                                                    (*(code *)PTR__objc_msgSend_02578628)();
                                                    (*(code *)PTR__objc_release_02578630)(puVar7);
                                                    if (((ulong)puVar10 & 1) == 0) {
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (PTR_WCRefineHelper_026ce000,
                                                                 PTR_s_showModernToast__0269ce78,
                                                                 &cf_HQ_Wzzb_N);
                                                      local_3c = 1;
                                                    }
                                                    else {
                                                      puVar7 = PTR_WCRefineHelper_026ce000;
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (PTR_WCRefineHelper_026ce000,
                                                                                                                                  
                                                  PTR_s_hasThemeBoxAutoRedeemPermission_026a6e40);
                                                  if (((ulong)puVar7 & 1) == 0) {
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCRefineHelper_026ce000,
                                                               PTR_s_showModernToast__0269ce78,
                                                               &cf_fe_NvP_zzbCgP);
                                                    local_3c = 1;
                                                  }
                                                  else {
                                                    puVar7 = PTR_WCRefineConfig_026cdf58;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCRefineConfig_026cdf58,
                                                               PTR_s_shared_0269cad0);
                                                    _objc_retainAutoreleasedReturnValue();
                                                    puVar10 = puVar7;
                                                    (*(code *)PTR__objc_msgSend_02578628)();
                                                    _objc_retainAutoreleasedReturnValue();
                                                    local_468 = puVar10;
                                                    (*(code *)PTR__objc_release_02578630)(puVar7);
                                                    puVar7 = local_468;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_468,PTR_s_count_0269cfe0);
                                                    uVar3 = local_28;
                                                    if (puVar7 == (undefined *)0x0) {
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (PTR_WCRefineHelper_026ce000,
                                                                 PTR_s_showModernToast__0269ce78,
                                                                 &cf_HQ_W);
                                                      local_3c = 1;
                                                    }
                                                    else {
                                                      local_490 = 
                                                  PTR___NSConcreteStackBlock_02578660;
                                                  local_488 = 0xc2000000;
                                                  local_484 = 0;
                                                  local_480 = FUN_01570b48;
                                                  local_478 = &DAT_0257a800;
                                                  (*(code *)PTR__objc_retain_02578638)();
                                                  local_470 = uVar3;
                                                  FUN_0156b06c(&local_490);
                                                  local_3c = 1;
                                                  _objc_storeStrong(&local_470,0);
                                                  }
                                                  _objc_storeStrong(&local_468,0);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    puVar7 = PTR_WCRefineAnonymousAtHelper_026ce0e0;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (
                                                  PTR_WCRefineAnonymousAtHelper_026ce0e0,
                                                  PTR_s_isFeatureAllowed_026ab0f0);
                                                  if (((ulong)puVar7 & 1) == 0) {
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCRefineHelper_026ce000,
                                                               PTR_s_showModernToast__0269ce78,
                                                               &cf__ST_);
                                                    local_3c = 1;
                                                  }
                                                  else {
                                                    uVar3 = local_28;
                                                    FUN_01564574();
                                                    if (((uVar3 & 1) == 0) ||
                                                       (FUN_0156c6b8(), (uVar3 & 1) == 0)) {
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (PTR_WCRefineHelper_026ce000,
                                                                 PTR_s_showModernToast__0269ce78,
                                                                 &cf__WS_MR_v_DeaS_O_u_ST_);
                                                      local_3c = 1;
                                                    }
                                                    else {
                                                      FUN_0156b06c(&
                                                  PTR___NSConcreteGlobalBlock_02586860);
                                                  local_3c = 1;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    puVar7 = PTR_WCRefineAnonymousAtHelper_026ce0e0;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (
                                                  PTR_WCRefineAnonymousAtHelper_026ce0e0,
                                                  PTR_s_isFeatureAllowed_026ab0f0);
                                                  if (((ulong)puVar7 & 1) == 0) {
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCRefineHelper_026ce000,
                                                               PTR_s_showModernToast__0269ce78,
                                                               &cf__ST_);
                                                    local_3c = 1;
                                                  }
                                                  else {
                                                    uVar3 = local_28;
                                                    FUN_01564574();
                                                    if ((uVar3 & 1) == 0) {
                                                      uVar3 = local_28;
                                                      FUN_01528d34();
                                                      _objc_retainAutoreleasedReturnValue();
                                                      local_418 = uVar3;
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (uVar3,PTR_s_length_0269cca0);
                                                      if (uVar3 == 0) {
                                                        uVar4 = local_28;
                                                        FUN_01533eb8(local_28,&cf_m_nsUsrName);
                                                        _objc_retainAutoreleasedReturnValue();
                                                        uVar3 = local_418;
                                                        local_418 = uVar4;
                                                        (*(code *)PTR__objc_release_02578630)(uVar3)
                                                        ;
                                                      }
                                                      uVar3 = local_418;
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (local_418,PTR_s_length_0269cca0);
                                                      if (uVar3 == 0) {
                                                        (*(code *)PTR__objc_msgSend_02578628)
                                                                  (PTR_WCRefineHelper_026ce000,
                                                                   PTR_s_showModernToast__0269ce78,
                                                                   &cf_elS_e_S);
                                                        local_3c = 1;
                                                      }
                                                      else {
                                                        uVar3 = local_28;
                                                        FUN_01533df4(local_28,
                                                  PTR_s_getContactDisplayName_0269d160);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  uVar4 = uVar3;
                                                  FUN_01533bf8();
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_420 = uVar4;
                                                  (*(code *)PTR__objc_release_02578630)(uVar3);
                                                  uVar3 = local_420;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_420,PTR_s_length_0269cca0);
                                                  if (uVar3 == 0) {
                                                    uVar4 = local_28;
                                                    FUN_01533df4(local_28,
                                                  PTR_s_m_nsNickName_0269d758);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  uVar9 = uVar4;
                                                  FUN_01533bf8();
                                                  _objc_retainAutoreleasedReturnValue();
                                                  uVar3 = local_420;
                                                  local_420 = uVar9;
                                                  (*(code *)PTR__objc_release_02578630)(uVar3);
                                                  (*(code *)PTR__objc_release_02578630)(uVar4);
                                                  }
                                                  uVar3 = local_418;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_418,PTR_s_copy_0269d150);
                                                  uVar9 = local_420;
                                                  local_428 = uVar3;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_420,PTR_s_copy_0269d150);
                                                  uVar4 = local_428;
                                                  local_460 = PTR___NSConcreteStackBlock_02578660;
                                                  local_458 = 0xc2000000;
                                                  local_454 = 0;
                                                  local_450 = FUN_01570ab0;
                                                  local_448 = &DAT_0257a7a0;
                                                  local_430 = uVar9;
                                                  (*(code *)PTR__objc_retain_02578638)();
                                                  uVar3 = local_430;
                                                  local_440 = uVar4;
                                                  (*(code *)PTR__objc_retain_02578638)();
                                                  local_438 = uVar3;
                                                  FUN_0156b06c(&local_460);
                                                  local_3c = 1;
                                                  _objc_storeStrong(&local_438);
                                                  _objc_storeStrong(&local_440,0);
                                                  _objc_storeStrong(&local_430,0);
                                                  _objc_storeStrong(&local_428,0);
                                                  _objc_storeStrong(&local_420,0);
                                                  }
                                                  _objc_storeStrong(&local_418,0);
                                                  }
                                                  else {
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCRefineHelper_026ce000,
                                                               PTR_s_showModernToast__0269ce78,
                                                               &cf_pQ_bXT4YP_O_u_ST_);
                                                    local_3c = 1;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    FUN_0157097c(local_28);
                                                    local_3c = 1;
                                                  }
                                                  }
                                                  else {
                                                    FUN_0156b06c(&
                                                  PTR___NSConcreteGlobalBlock_02586840);
                                                  local_3c = 1;
                                                  }
                                                  }
                                                  else {
                                                    local_410 = PTR___NSConcreteStackBlock_02578660;
                                                    local_408 = 0xc2000000;
                                                    local_404 = 0;
                                                    local_400 = FUN_01570830;
                                                    local_3f8 = &DAT_0257a800;
                                                    (*(code *)PTR__objc_retain_02578638)();
                                                    local_3f0 = uVar3;
                                                    FUN_0156b06c(&local_410);
                                                    local_3c = 1;
                                                    _objc_storeStrong(&local_3f0,0);
                                                  }
                                                  }
                                                  else {
                                                    local_3e8 = PTR___NSConcreteStackBlock_02578660;
                                                    local_3e0 = 0xc2000000;
                                                    local_3dc = 0;
                                                    local_3d8 = FUN_01570710;
                                                    local_3d0 = &DAT_0257a800;
                                                    (*(code *)PTR__objc_retain_02578638)();
                                                    local_3c8 = uVar3;
                                                    FUN_0156b06c(&local_3e8);
                                                    local_3c = 1;
                                                    _objc_storeStrong(&local_3c8,0);
                                                  }
                                                  }
                                                  else {
                                                    FUN_0156b06c(&
                                                  PTR___NSConcreteGlobalBlock_02586820);
                                                  local_3c = 1;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = local_28;
                                                    FUN_01564574();
                                                    if ((uVar3 & 1) == 0) {
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (PTR_WCRefineHelper_026ce000,
                                                                 PTR_s_showModernToast__0269ce78,
                                                                 &cf_7Re___RN_ec_J);
                                                      local_3c = 1;
                                                    }
                                                    else {
                                                      FUN_01556e8c(local_28);
                                                      local_3c = 1;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    puVar7 = 
                                                  PTR_WCRefineTopBarProfileCardPresenter_026ce228;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (
                                                  PTR_WCRefineTopBarProfileCardPresenter_026ce228,
                                                  PTR_s_isEntertainmentRedEnvelopeFeatur_026b0408);
                                                  if (((ulong)puVar7 & 1) == 0) {
                                                    local_3c = 1;
                                                  }
                                                  else {
                                                    puVar7 = PTR_WCRefineConfig_026cdf58;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (PTR_WCRefineConfig_026cdf58,
                                                               PTR_s_shared_0269cad0);
                                                    _objc_retainAutoreleasedReturnValue();
                                                    puVar10 = puVar7;
                                                    (*(code *)PTR__objc_msgSend_02578628)();
                                                    (*(code *)PTR__objc_release_02578630)(puVar7);
                                                    if (((ulong)puVar10 & 1) == 0) {
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (PTR_WCRefineHelper_026ce000,
                                                                 PTR_s_showModernToast__0269ce78,
                                                                 &cf_HQ);
                                                      local_3c = 1;
                                                    }
                                                    else {
                                                      uVar3 = local_28;
                                                      FUN_01564574();
                                                      if ((uVar3 & 1) == 0) {
                                                        (*(code *)PTR__objc_msgSend_02578628)
                                                                  (PTR_WCRefineHelper_026ce000,
                                                                   PTR_s_showModernToast__0269ce78,
                                                                   &cf_GP_SN_ec_J);
                                                        local_3c = 1;
                                                      }
                                                      else {
                                                        uVar4 = local_28;
                                                        FUN_01528d34();
                                                        _objc_retainAutoreleasedReturnValue();
                                                        local_398 = uVar4;
                                                        (*(code *)PTR__objc_msgSend_02578628)
                                                                  (uVar4,PTR_s_length_0269cca0);
                                                        uVar3 = local_398;
                                                        if (uVar4 == 0) {
                                                          (*(code *)PTR__objc_msgSend_02578628)
                                                                    (PTR_WCRefineHelper_026ce000,
                                                                     PTR_s_showModernToast__0269ce78
                                                                     ,&cf_elS_JI);
                                                          local_3c = 1;
                                                        }
                                                        else {
                                                          local_3c0 = 
                                                  PTR___NSConcreteStackBlock_02578660;
                                                  local_3b8 = 0xc2000000;
                                                  local_3b4 = 0;
                                                  local_3b0 = FUN_015705ac;
                                                  local_3a8 = &DAT_0257a800;
                                                  (*(code *)PTR__objc_retain_02578638)();
                                                  local_3a0 = uVar3;
                                                  FUN_0156b06c(&local_3c0);
                                                  local_3c = 1;
                                                  _objc_storeStrong(&local_3a0,0);
                                                  }
                                                  _objc_storeStrong(&local_398,0);
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                                else {
                                                  local_390 = PTR___NSConcreteStackBlock_02578660;
                                                  local_388 = 0xc2000000;
                                                  local_384 = 0;
                                                  local_380 = FUN_015704ec;
                                                  local_378 = &DAT_0257a800;
                                                  (*(code *)PTR__objc_retain_02578638)();
                                                  local_370 = uVar3;
                                                  FUN_0156b06c(&local_390);
                                                  local_3c = 1;
                                                  _objc_storeStrong(&local_370,0);
                                                }
                                              }
                                              else {
                                                local_368 = PTR___NSConcreteStackBlock_02578660;
                                                local_360 = 0xc2000000;
                                                local_35c = 0;
                                                local_358 = FUN_0156faf0;
                                                local_350 = &DAT_0257a800;
                                                (*(code *)PTR__objc_retain_02578638)();
                                                local_348 = uVar3;
                                                FUN_0156b06c(&local_368);
                                                local_3c = 1;
                                                _objc_storeStrong(&local_348,0);
                                              }
                                            }
                                            else {
                                              uVar4 = local_28;
                                              FUN_01564574();
                                              uVar3 = local_28;
                                              if ((uVar4 & 1) == 0) {
                                                local_340 = PTR___NSConcreteStackBlock_02578660;
                                                local_338 = 0xc2000000;
                                                local_334 = 0;
                                                local_330 = FUN_0156f960;
                                                local_328 = &DAT_0257a800;
                                                (*(code *)PTR__objc_retain_02578638)();
                                                local_320 = uVar3;
                                                FUN_0156b06c(&local_340);
                                                local_3c = 1;
                                                _objc_storeStrong(&local_320,0);
                                              }
                                              else {
                                                (*(code *)PTR__objc_msgSend_02578628)
                                                          (PTR_WCRefineHelper_026ce000,
                                                           PTR_s_showModernToast__0269ce78,
                                                           &cf__OSSS__YS);
                                                local_3c = 1;
                                              }
                                            }
                                          }
                                          else {
                                            uVar4 = local_28;
                                            FUN_01564574();
                                            uVar3 = local_28;
                                            if ((uVar4 & 1) == 0) {
                                              local_2f0 = DAT_028e3960 & 1;
                                              local_318 = PTR___NSConcreteStackBlock_02578660;
                                              local_310 = 0xc2000000;
                                              local_30c = 0;
                                              local_308 = FUN_0156f524;
                                              local_300 = &DAT_02583028;
                                              local_2ed = local_2f0;
                                              (*(code *)PTR__objc_retain_02578638)();
                                              local_2f8 = uVar3;
                                              FUN_0156b06c(&local_318);
                                              local_3c = 1;
                                              _objc_storeStrong(&local_2f8,0);
                                            }
                                            else {
                                              FUN_0156ea2c();
                                              if ((uVar3 & 1) == 0) {
                                                _objc_initWeak(auStack_2a8,local_38);
                                                uVar3 = local_28;
                                                (*(code *)PTR__objc_retain_02578638)();
                                                puVar7 = PTR_WCRefineHelper_026ce000;
                                                local_2b0 = uVar3;
                                                local_2e0 = PTR___NSConcreteStackBlock_02578660;
                                                local_2d8 = 0xc2000000;
                                                local_2d4 = 0;
                                                local_2d0 = FUN_0156ec00;
                                                local_2c8 = &DAT_0257cd48;
                                                _objc_copyWeak(auStack_2b8,auStack_2a8);
                                                uVar3 = local_2b0;
                                                (*(code *)PTR__objc_retain_02578638)();
                                                local_2c0 = uVar3;
                                                (*(code *)PTR__objc_msgSend_02578628)
                                                          (puVar7,
                                                  PTR_s_showAlertWithTitle_message_destr_0269f868,
                                                  &cf_WCRefine,&cf_nx_b_bgNT,&cf_r__kNN,&local_2e0,
                                                  &cf_bpN,0);
                                                _objc_unsafeClaimAutoreleasedReturnValue(puVar7);
                                                local_3c = 1;
                                                _objc_storeStrong(&local_2c0);
                                                _objc_destroyWeak(auStack_2b8);
                                                _objc_storeStrong(&local_2b0,0);
                                                _objc_destroyWeak(auStack_2a8);
                                              }
                                              else {
                                                FUN_0156ad1c(local_38);
                                                (*(code *)PTR__objc_msgSend_02578628)
                                                          (PTR_WCRefineHelper_026ce000,
                                                           PTR_s_showModernToast__0269ce78,
                                                           &cf___Pbkb);
                                                local_3c = 1;
                                              }
                                            }
                                          }
                                        }
                                        else {
                                          uVar3 = local_28;
                                          FUN_0156a8d8(local_28,local_30,local_38);
                                          local_299 = (byte)uVar3;
                                          local_29a = (local_299 ^ 1) & 1;
                                          uVar3 = local_28;
                                          FUN_0156e8c0(local_28,local_29a);
                                          if ((uVar3 & 1) == 0) {
                                            pcVar6 = &cf__Nfh_YS1Y_;
                                            if ((local_29a & 1) == 0) {
                                              pcVar6 = &cf_Smfh_YS1Y_;
                                            }
                                            (*(code *)PTR__objc_msgSend_02578628)
                                                      (PTR_WCRefineHelper_026ce000,
                                                       PTR_s_showModernToast__0269ce78,pcVar6);
                                            local_3c = 1;
                                          }
                                          else {
                                            uVar8 = local_38;
                                            FUN_0156ac38();
                                            _objc_retainAutoreleasedReturnValue();
                                            puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
                                            (*(code *)PTR__objc_msgSend_02578628)
                                                      (PTR__OBJC_CLASS___NSNumber_026ce038,
                                                       PTR_s_numberWithBool__0269ce60,local_29a & 1)
                                            ;
                                            _objc_retainAutoreleasedReturnValue();
                                            (*(code *)PTR__objc_msgSend_02578628)
                                                      (uVar8,PTR_s_setObject_forKey__026ca9e8,puVar7
                                                       ,local_30);
                                            (*(code *)PTR__objc_release_02578630)(puVar7);
                                            (*(code *)PTR__objc_release_02578630)(uVar8);
                                            FUN_0156ad1c(local_38);
                                            pcVar6 = &cf___Nfh_YS;
                                            if ((local_29a & 1) == 0) {
                                              pcVar6 = &cf__Smfh_YS;
                                            }
                                            (*(code *)PTR__objc_msgSend_02578628)
                                                      (PTR_WCRefineHelper_026ce000,
                                                       PTR_s_showModernToast__0269ce78,pcVar6);
                                            local_3c = 1;
                                          }
                                        }
                                      }
                                      else {
                                        local_298 = PTR___NSConcreteStackBlock_02578660;
                                        local_290 = 0xc2000000;
                                        local_28c = 0;
                                        local_288 = FUN_0156e38c;
                                        local_280 = &DAT_0257a800;
                                        (*(code *)PTR__objc_retain_02578638)();
                                        local_278 = uVar3;
                                        FUN_0156b06c(&local_298);
                                        local_3c = 1;
                                        _objc_storeStrong(&local_278,0);
                                      }
                                    }
                                    else {
                                      FUN_0156b06c(&PTR___NSConcreteGlobalBlock_02586800);
                                      local_3c = 1;
                                    }
                                  }
                                  else {
                                    FUN_01545618();
                                    local_1f8 = uVar3 + 1;
                                    if (2 < local_1f8) {
                                      local_1f8 = 0;
                                    }
                                    puVar7 = PTR_WCRefineConfig_026cdf58;
                                    local_1f0 = uVar3;
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                                    _objc_retainAutoreleasedReturnValue();
                                    (*(code *)PTR__objc_msgSend_02578628)();
                                    (*(code *)PTR__objc_release_02578630)(puVar7);
                                    FUN_01563940();
                                    lVar5 = local_1f8;
                                    FUN_0156d9c0();
                                    _objc_retainAutoreleasedReturnValue();
                                    puVar7 = &DAT_028e38e8;
                                    local_200 = lVar5;
                                    _objc_loadWeakRetained();
                                    puVar10 = &DAT_028e38f0;
                                    local_208 = puVar7;
                                    _objc_loadWeakRetained();
                                    uVar8 = DAT_028e38f8;
                                    local_210 = puVar10;
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (DAT_028e38f8,PTR_s_copy_0269d150);
                                    pcVar6 = DAT_028e3900;
                                    local_218 = uVar8;
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (DAT_028e3900,PTR_s_copy_0269d150);
                                    puVar7 = PTR___dispatch_main_q_02578680;
                                    local_220 = pcVar6;
                                    _objc_retainAutoreleaseReturnValue();
                                    _objc_retainAutoreleasedReturnValue();
                                    uVar3 = local_28;
                                    local_270 = PTR___NSConcreteStackBlock_02578660;
                                    local_268 = 0xc2000000;
                                    local_264 = 0;
                                    local_260 = FUN_0156da70;
                                    local_258 = &DAT_025867d0;
                                    (*(code *)PTR__objc_retain_02578638)();
                                    puVar2 = local_208;
                                    local_250 = uVar3;
                                    (*(code *)PTR__objc_retain_02578638)();
                                    puVar10 = local_210;
                                    local_248 = puVar2;
                                    (*(code *)PTR__objc_retain_02578638)();
                                    uVar8 = local_218;
                                    local_240 = puVar10;
                                    (*(code *)PTR__objc_retain_02578638)();
                                    pcVar6 = local_220;
                                    local_238 = uVar8;
                                    (*(code *)PTR__objc_retain_02578638)();
                                    lVar5 = local_200;
                                    local_230 = pcVar6;
                                    (*(code *)PTR__objc_retain_02578638)();
                                    local_228 = lVar5;
                                    _dispatch_async(puVar7,&local_270);
                                    (*(code *)PTR__objc_release_02578630)(puVar7);
                                    local_3c = 1;
                                    _objc_storeStrong(&local_228);
                                    _objc_storeStrong(&local_230,0);
                                    _objc_storeStrong(&local_238,0);
                                    _objc_storeStrong(&local_240,0);
                                    _objc_storeStrong(&local_248,0);
                                    _objc_storeStrong(&local_250,0);
                                    _objc_storeStrong(&local_220,0);
                                    _objc_storeStrong(&local_218,0);
                                    _objc_storeStrong(&local_210,0);
                                    _objc_storeStrong(&local_208,0);
                                    _objc_storeStrong(&local_200,0);
                                  }
                                }
                                else {
                                  FUN_0156b06c(&PTR___NSConcreteGlobalBlock_025867b0);
                                  local_3c = 1;
                                }
                              }
                              else {
                                FUN_0156b06c(&PTR___NSConcreteGlobalBlock_02586790);
                                local_3c = 1;
                              }
                            }
                            else {
                              FUN_0156cbe8();
                              _objc_retainAutoreleasedReturnValue();
                              uVar4 = local_28;
                              local_1b0 = uVar3;
                              FUN_0156ccac(local_28,uVar3);
                              _objc_retainAutoreleasedReturnValue();
                              local_1b8 = uVar4;
                              if ((local_1b0 == 0) &&
                                 ((*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0)
                                 , uVar4 == 0)) {
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (PTR_WCRefineHelper_026ce000,
                                           PTR_s_showModernToast__0269ce78,&cf_S_MRlgSnzzvO);
                                local_3c = 1;
                              }
                              else {
                                uVar4 = local_1b0;
                                local_1e8 = PTR___NSConcreteStackBlock_02578660;
                                local_1e0 = 0xc2000000;
                                local_1dc = 0;
                                local_1d8 = FUN_0156d0a8;
                                local_1d0 = &DAT_0257a7a0;
                                (*(code *)PTR__objc_retain_02578638)();
                                uVar3 = local_1b8;
                                local_1c8 = uVar4;
                                (*(code *)PTR__objc_retain_02578638)();
                                local_1c0 = uVar3;
                                FUN_0156b06c(&local_1e8);
                                local_3c = 1;
                                _objc_storeStrong(&local_1c0);
                                _objc_storeStrong(&local_1c8,0);
                              }
                              _objc_storeStrong(&local_1b8);
                              _objc_storeStrong(&local_1b0,0);
                            }
                          }
                          else {
                            local_1a8 = PTR___NSConcreteStackBlock_02578660;
                            local_1a0 = 0xc2000000;
                            local_19c = 0;
                            local_198 = FUN_0156c460;
                            local_190 = &DAT_0257a800;
                            (*(code *)PTR__objc_retain_02578638)();
                            local_188 = uVar3;
                            FUN_0156b06c(&local_1a8);
                            local_3c = 1;
                            _objc_storeStrong(&local_188,0);
                          }
                        }
                        else {
                          uVar3 = local_28;
                          FUN_01528d34();
                          _objc_retainAutoreleasedReturnValue();
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (puVar7,PTR_s_shouldConcealUsername__0269fef8);
                          (*(code *)PTR__objc_release_02578630)(uVar3);
                          uVar3 = local_28;
                          if (((ulong)puVar7 & 1) == 0) {
                            local_180 = PTR___NSConcreteStackBlock_02578660;
                            local_178 = 0xc2000000;
                            local_174 = 0;
                            local_170 = FUN_0156c3fc;
                            local_168 = &DAT_0257a800;
                            (*(code *)PTR__objc_retain_02578638)();
                            local_160 = uVar3;
                            FUN_0156b06c(&local_180);
                            local_3c = 1;
                            _objc_storeStrong(&local_160,0);
                          }
                          else {
                            local_3c = 1;
                          }
                        }
                      }
                      else {
                        local_158 = PTR___NSConcreteStackBlock_02578660;
                        local_150 = 0xc2000000;
                        local_14c = 0;
                        local_148 = FUN_0156bf48;
                        local_140 = &DAT_0257a800;
                        (*(code *)PTR__objc_retain_02578638)();
                        local_138 = uVar3;
                        FUN_0156b06c(&local_158);
                        local_3c = 1;
                        _objc_storeStrong(&local_138,0);
                      }
                    }
                    else {
                      local_130 = PTR___NSConcreteStackBlock_02578660;
                      local_128 = 0xc2000000;
                      local_124 = 0;
                      local_120 = FUN_0156bad8;
                      local_118 = &DAT_0257a800;
                      (*(code *)PTR__objc_retain_02578638)();
                      local_110 = uVar3;
                      FUN_0156b06c(&local_130);
                      local_3c = 1;
                      _objc_storeStrong(&local_110,0);
                    }
                  }
                  else {
                    local_108 = PTR___NSConcreteStackBlock_02578660;
                    local_100 = 0xc2000000;
                    local_fc = 0;
                    local_f8 = FUN_0156b7dc;
                    local_f0 = &DAT_0257a800;
                    (*(code *)PTR__objc_retain_02578638)();
                    local_e8 = uVar3;
                    FUN_0156b06c(&local_108);
                    local_3c = 1;
                    _objc_storeStrong(&local_e8,0);
                  }
                }
                else {
                  local_e0 = PTR___NSConcreteStackBlock_02578660;
                  local_d8 = 0xc2000000;
                  local_d4 = 0;
                  local_d0 = FUN_0156b60c;
                  local_c8 = &DAT_0257a800;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_c0 = uVar3;
                  FUN_0156b06c(&local_e0);
                  local_3c = 1;
                  _objc_storeStrong(&local_c0,0);
                }
              }
              else {
                local_b8 = PTR___NSConcreteStackBlock_02578660;
                local_b0 = 0xc2000000;
                local_ac = 0;
                local_a8 = FUN_0156b18c;
                local_a0 = &DAT_0257a800;
                (*(code *)PTR__objc_retain_02578638)();
                local_98 = uVar3;
                FUN_0156b06c(&local_b8);
                local_3c = 1;
                _objc_storeStrong(&local_98,0);
              }
            }
            else {
              uVar3 = local_28;
              FUN_01533df4(local_28,PTR_s_m_nsHeadHDImgUrl_026b0660);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              FUN_01533bf8();
              _objc_retainAutoreleasedReturnValue();
              local_90 = uVar4;
              (*(code *)PTR__objc_release_02578630)(uVar3);
              uVar3 = local_90;
              (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
              if (uVar3 == 0) {
                uVar4 = local_28;
                FUN_01533df4(local_28,PTR_s_m_nsHeadImgUrl_026a6b60);
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar4;
                FUN_01533bf8();
                _objc_retainAutoreleasedReturnValue();
                uVar3 = local_90;
                local_90 = uVar9;
                (*(code *)PTR__objc_release_02578630)(uVar3);
                (*(code *)PTR__objc_release_02578630)(uVar4);
              }
              uVar3 = local_90;
              (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
              if (uVar3 == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_fe4YPc);
              }
              else {
                puVar7 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70)
                ;
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(puVar7);
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_4YPc_Y6R)
                ;
              }
              local_3c = 1;
              _objc_storeStrong(&local_90,0);
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
            uVar3 = local_28;
            FUN_01528d34();
            _objc_retainAutoreleasedReturnValue();
            local_68 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
            if (uVar3 == 0) {
              uVar4 = local_28;
              FUN_01533eb8(local_28,&cf_m_nsUsrName);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = local_68;
              local_68 = uVar4;
              (*(code *)PTR__objc_release_02578630)(uVar3);
            }
            uVar3 = local_28;
            FUN_01564574();
            local_69 = (byte)uVar3;
            local_81 = 0;
            bVar1 = (uVar3 & 1) == 0;
            if (bVar1) {
              local_4e8 = DAT_028e3900;
              FUN_01528c84();
              _objc_retainAutoreleasedReturnValue();
              local_80 = local_4e8;
            }
            else {
              local_4e8 = &cf___;
            }
            local_81 = bVar1;
            (*(code *)PTR__objc_retain_02578638)();
            local_78 = local_4e8;
            if ((local_81 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_80);
            }
            uVar3 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
            if (((uVar3 == 0) ||
                (((local_69 & 1) != 0 &&
                 (puVar7 = PTR_WCRefineMessageBlockSupport_026ce0f8,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,
                            local_68), ((ulong)puVar7 & 1) == 0)))) ||
               (((local_69 & 1) == 0 &&
                (puVar7 = PTR_WCRefineMessageBlockSupport_026ce0f8,
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,
                           local_68), ((ulong)puVar7 & 1) != 0)))) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elS_e_S);
            }
            else {
              puVar7 = PTR_WCRefineMessageBlockSupport_026ce0f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isFeatureEnabled_026abe00);
              if (((ulong)puVar7 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ_W8__uR
                          );
              }
              else {
                uVar3 = local_28;
                FUN_0156a8d8(local_28,local_30,local_38);
                local_82 = ((byte)uVar3 ^ 1) & 1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineMessageBlockSupport_026ce0f8,
                           PTR_s_setEnabled_forUserName_groupCont_026b0658,local_82,local_68,
                           local_78,local_69 & 1);
                uVar8 = local_38;
                FUN_0156ac38();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                           local_82 & 1);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar8,PTR_s_setObject_forKey__026ca9e8,puVar7,local_30);
                (*(code *)PTR__objc_release_02578630)(puVar7);
                (*(code *)PTR__objc_release_02578630)(uVar8);
                FUN_0156ad1c(local_38);
                if ((local_69 & 1) == 0) {
                  pcVar6 = local_78;
                  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
                  if (pcVar6 == (cfstringStruct *)0x0) {
                    pcVar6 = &cf__O__dkNmo_;
                    if ((local_82 & 1) == 0) {
                      pcVar6 = &cf__sQdkNmo_O__;
                    }
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar6);
                  }
                  else {
                    pcVar6 = &cf__O__dkN_mo_;
                    if ((local_82 & 1) == 0) {
                      pcVar6 = &cf__sQdkN_mo_O__;
                    }
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar6);
                  }
                }
                else {
                  pcVar6 = &cf___T_umo_O__;
                  if ((local_82 & 1) == 0) {
                    pcVar6 = &cf__sQmo_O__;
                  }
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar6);
                }
              }
            }
            local_3c = 1;
            _objc_storeStrong(&local_78);
            _objc_storeStrong(&local_68,0);
          }
        }
        else {
          FUN_0152b7ec();
          _objc_retainAutoreleasedReturnValue();
          local_58 = uVar3;
          if ((uVar3 == 0) ||
             ((*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,PTR_s_respondsToSelector__026ca818,
                         PTR_s_ChangeNotifyStatus_withStatus_sy_026a2ee0), (uVar3 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                       &cf_S_MRsXN_ecMQSbpbRbc);
          }
          else {
            uVar3 = local_28;
            FUN_0156a8d8(local_28,local_30,local_38);
            local_59 = ((byte)uVar3 ^ 1) & 1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_ChangeNotifyStatus_withStatus_sy_026a2ee0,local_28,
                       local_59 ^ 1,1);
            uVar8 = local_38;
            FUN_0156ac38();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                       local_59 & 1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,PTR_s_setObject_forKey__026ca9e8,puVar7,local_30);
            (*(code *)PTR__objc_release_02578630)(puVar7);
            (*(code *)PTR__objc_release_02578630)(uVar8);
            FUN_0156ad1c(local_38);
            pcVar6 = &cf__;
            if ((local_59 & 1) == 0) {
              pcVar6 = &cf__sQMQSbpb;
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar6);
          }
          local_3c = 1;
          _objc_storeStrong(&local_58,0);
        }
      }
      else {
        FUN_0152b7ec();
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar3;
        if ((uVar3 == 0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_respondsToSelector__026ca818,
                       PTR_s_setContact_sessionTop_sync__026a2ed8), (uVar3 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRsXN_ecc_Rbc
                    );
        }
        else {
          uVar3 = local_28;
          FUN_0156a8d8(local_28,local_30,local_38);
          local_49 = ((byte)uVar3 ^ 1) & 1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_setContact_sessionTop_sync__026a2ed8,local_28,local_49,1);
          uVar8 = local_38;
          FUN_0156ac38();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_49 & 1
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar8,PTR_s_setObject_forKey__026ca9e8,puVar7,local_30);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_release_02578630)(uVar8);
          FUN_0156ad1c(local_38);
          pcVar6 = &cf__n_v;
          if ((local_49 & 1) == 0) {
            pcVar6 = &cf__Smn_v;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar6);
        }
        local_3c = 1;
        _objc_storeStrong(&local_48,0);
      }
    }
    else {
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}


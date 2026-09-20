// FUN_01585184 @ 01585184

void FUN_01585184(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint local_31c;
  cfstringStruct *local_238;
  cfstringStruct *local_228;
  cfstringStruct *local_218;
  cfstringStruct *local_208;
  undefined *local_180;
  undefined *local_178;
  byte local_16d;
  byte local_16c;
  byte local_16b;
  byte local_16a;
  byte local_169;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  byte local_139;
  cfstringStruct *local_138;
  byte local_129;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  byte local_111;
  cfstringStruct *local_110;
  byte local_101;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  byte local_c1;
  cfstringStruct *local_c0;
  byte local_b1;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  byte local_91;
  long local_90;
  cfstringStruct *local_88;
  ulong local_80;
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
  
  uVar13 = DAT_02324028;
  uVar19 = DAT_02324020;
  uVar14 = DAT_02323f80;
  uVar17 = DAT_02323f38;
  uVar5 = DAT_02323f28;
  uVar4 = DAT_02323f10;
  uVar3 = DAT_02323ee8;
  uVar2 = DAT_02323ec8;
  uVar15 = DAT_02323e88;
  uVar1 = DAT_02323da8;
  uVar18 = DAT_02323d58;
  uVar16 = DAT_02323d40;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = 0;
  _objc_storeStrong(&local_80,param_1);
  local_88 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_88,param_2);
  local_90 = 0;
  _objc_storeStrong(&local_90,param_3);
  pcVar7 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_91 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_b1 = 0;
  local_c1 = 0;
  local_a0 = pcVar7;
  if ((local_91 & 1) == 0) {
    local_208 = &cf__111111;
    FUN_01551c04(DAT_02323d68);
    _objc_retainAutoreleasedReturnValue();
    local_c1 = 1;
    local_c0 = local_208;
  }
  else {
    local_208 = &cf__FFFFFF;
    FUN_01551c04(DAT_02323c90);
    _objc_retainAutoreleasedReturnValue();
    local_b1 = 1;
    local_b0 = local_208;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_a8 = local_208;
  if ((local_c1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c0);
  }
  if ((local_b1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  local_d9 = 0;
  local_e9 = 0;
  if ((local_91 & 1) == 0) {
    local_218 = &cf__111111;
    FUN_01551c04(DAT_02323d50);
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 1;
    local_e8 = local_218;
  }
  else {
    local_218 = &cf__FFFFFF;
    FUN_01551c04(DAT_0232c688);
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 1;
    local_d8 = local_218;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_218;
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  local_101 = 0;
  local_111 = 0;
  local_228 = local_a0;
  if ((local_91 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_chatAvatarProfileCardButtonTitle_026b0568);
    _objc_retainAutoreleasedReturnValue();
    local_111 = 1;
    local_110 = local_228;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_chatAvatarProfileCardButtonTitle_026b0560);
    _objc_retainAutoreleasedReturnValue();
    local_101 = 1;
    local_100 = local_228;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = local_228;
  if ((local_111 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_110);
  }
  if ((local_101 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_100);
  }
  local_129 = 0;
  local_139 = 0;
  local_238 = local_a0;
  if ((local_91 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_chatAvatarProfileCardButtonSubti_026b09a0);
    _objc_retainAutoreleasedReturnValue();
    local_139 = 1;
    local_138 = local_238;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_chatAvatarProfileCardButtonSubti_026b0998);
    _objc_retainAutoreleasedReturnValue();
    local_129 = 1;
    local_128 = local_238;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_120 = local_238;
  if ((local_139 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_138);
  }
  if ((local_129 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_128);
  }
  (*(code *)PTR__objc_retain_02578638)();
  pcVar8 = local_a8;
  local_148 = &cf_v;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar7 = local_d0;
  local_150 = pcVar8;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar8 = local_f8;
  local_158 = pcVar7;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar7 = local_120;
  local_160 = pcVar8;
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = pcVar7;
  pcVar7 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_88,PTR_s_isEqualToString__0269ccc8,&cf___wcr_moments_permissions__);
  if (((ulong)pcVar7 & 1) == 0) {
    pcVar7 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_isEqualToString__0269ccc8,&cf___wcr_moments_forward__);
    if (((ulong)pcVar7 & 1) == 0) {
      pcVar7 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_isEqualToString__0269ccc8,&cf___wcr_moments_delete__);
      if (((ulong)pcVar7 & 1) == 0) {
        pcVar7 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_isEqualToString__0269ccc8,&cf___wcr_moments_fake_engagement__);
        if (((ulong)pcVar7 & 1) == 0) {
          pcVar7 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_isEqualToString__0269ccc8,&cf___wcr_moments_complain__);
          if (((ulong)pcVar7 & 1) == 0) {
            pcVar7 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_88,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDStar);
            if (((ulong)pcVar7 & 1) == 0) {
              pcVar7 = local_88;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_88,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDTop);
              if (((ulong)pcVar7 & 1) == 0) {
                pcVar7 = local_88;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_88,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDMute
                          );
                if (((ulong)pcVar7 & 1) == 0) {
                  pcVar7 = local_88;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_88,PTR_s_isEqualToString__0269ccc8,
                             _WCRefineProfileCardActionIDMessageBlock);
                  if (((ulong)pcVar7 & 1) == 0) {
                    pcVar7 = local_88;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_88,PTR_s_isEqualToString__0269ccc8,
                               _WCRefineProfileCardActionIDPat);
                    if (((ulong)pcVar7 & 1) == 0) {
                      pcVar7 = local_88;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_88,PTR_s_isEqualToString__0269ccc8,
                                 _WCRefineProfileCardActionIDSmallSignal);
                      if (((ulong)pcVar7 & 1) == 0) {
                        pcVar7 = local_88;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_88,PTR_s_isEqualToString__0269ccc8,
                                   _WCRefineProfileCardActionIDTransfer);
                        if (((ulong)pcVar7 & 1) == 0) {
                          pcVar7 = local_88;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_88,PTR_s_isEqualToString__0269ccc8,
                                     _WCRefineProfileCardActionIDRedEnvelope);
                          if (((ulong)pcVar7 & 1) == 0) {
                            pcVar7 = local_88;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_88,PTR_s_isEqualToString__0269ccc8,
                                       _WCRefineProfileCardActionIDFakeRedEnvelope);
                            if (((ulong)pcVar7 & 1) == 0) {
                              pcVar7 = local_88;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_88,PTR_s_isEqualToString__0269ccc8,
                                         _WCRefineProfileCardActionIDRefreshGender);
                              if (((ulong)pcVar7 & 1) == 0) {
                                pcVar7 = local_88;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_88,PTR_s_isEqualToString__0269ccc8,
                                           _WCRefineProfileCardActionIDChatRoomFunction);
                                if (((ulong)pcVar7 & 1) == 0) {
                                  pcVar7 = local_88;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_88,PTR_s_isEqualToString__0269ccc8,
                                             _WCRefineProfileCardActionIDVoiceCall);
                                  if (((ulong)pcVar7 & 1) == 0) {
                                    pcVar7 = local_88;
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_88,PTR_s_isEqualToString__0269ccc8,
                                               _WCRefineProfileCardActionIDVideoCall);
                                    if (((ulong)pcVar7 & 1) == 0) {
                                      pcVar7 = local_88;
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_88,PTR_s_isEqualToString__0269ccc8,
                                                 _WCRefineProfileCardActionIDManage);
                                      if (((ulong)pcVar7 & 1) == 0) {
                                        pcVar7 = local_88;
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (local_88,PTR_s_isEqualToString__0269ccc8,
                                                   _WCRefineProfileCardActionIDAvatarURL);
                                        if (((ulong)pcVar7 & 1) == 0) {
                                          pcVar7 = local_88;
                                          (*(code *)PTR__objc_msgSend_02578628)
                                                    (local_88,PTR_s_isEqualToString__0269ccc8,
                                                     _WCRefineProfileCardActionIDChatRecord);
                                          if (((ulong)pcVar7 & 1) == 0) {
                                            pcVar7 = local_88;
                                            (*(code *)PTR__objc_msgSend_02578628)
                                                      (local_88,PTR_s_isEqualToString__0269ccc8,
                                                       _WCRefineProfileCardActionIDClearChat);
                                            if (((ulong)pcVar7 & 1) == 0) {
                                              pcVar7 = local_88;
                                              (*(code *)PTR__objc_msgSend_02578628)
                                                        (local_88,PTR_s_isEqualToString__0269ccc8,
                                                         _WCRefineProfileCardActionIDNote);
                                              if (((ulong)pcVar7 & 1) == 0) {
                                                pcVar7 = local_88;
                                                (*(code *)PTR__objc_msgSend_02578628)
                                                          (local_88,PTR_s_isEqualToString__0269ccc8,
                                                                                                                      
                                                  _WCRefineProfileCardActionIDAggregateSearch);
                                                if (((ulong)pcVar7 & 1) == 0) {
                                                  pcVar7 = local_88;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_88,
                                                  PTR_s_isEqualToString__0269ccc8,
                                                  _WCRefineProfileCardActionIDDisplayMode);
                                                  if (((ulong)pcVar7 & 1) == 0) {
                                                    pcVar7 = local_88;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_88,
                                                  PTR_s_isEqualToString__0269ccc8,
                                                  _WCRefineProfileCardActionIDThemeMode);
                                                  if (((ulong)pcVar7 & 1) == 0) {
                                                    puVar10 = 
                                                  PTR_WCRefineProfileCardActionCatalog_026ced78;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (
                                                  PTR_WCRefineProfileCardActionCatalog_026ced78,
                                                  PTR_s_isCustomPageActionID__026b0670,local_88);
                                                  puVar12 = 
                                                  PTR_WCRefineProfileCardActionCatalog_026ced78;
                                                  if (((ulong)puVar10 & 1) == 0) {
                                                    pcVar7 = local_88;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_88,
                                                  PTR_s_isEqualToString__0269ccc8,
                                                  _WCRefineProfileCardActionIDRemark);
                                                  if (((ulong)pcVar7 & 1) == 0) {
                                                    pcVar7 = local_88;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_88,
                                                  PTR_s_isEqualToString__0269ccc8,
                                                  _WCRefineProfileCardActionIDCustomAvatar);
                                                  if (((ulong)pcVar7 & 1) == 0) {
                                                    pcVar7 = local_88;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_88,
                                                  PTR_s_isEqualToString__0269ccc8,
                                                  _WCRefineProfileCardActionIDChangeWallpaper);
                                                  if (((ulong)pcVar7 & 1) == 0) {
                                                    pcVar7 = local_88;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_88,
                                                  PTR_s_isEqualToString__0269ccc8,
                                                  _WCRefineProfileCardActionIDAvatarFrame);
                                                  if (((ulong)pcVar7 & 1) == 0) {
                                                    pcVar7 = local_88;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_88,
                                                  PTR_s_isEqualToString__0269ccc8,
                                                  _WCRefineProfileCardActionIDNameplate);
                                                  if (((ulong)pcVar7 & 1) == 0) {
                                                    pcVar7 = local_88;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_88,
                                                  PTR_s_isEqualToString__0269ccc8,
                                                  _WCRefineProfileCardActionIDAt);
                                                  if (((ulong)pcVar7 & 1) == 0) {
                                                    pcVar7 = local_88;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_88,
                                                  PTR_s_isEqualToString__0269ccc8,
                                                  _WCRefineProfileCardActionIDAnonymousAt);
                                                  if (((ulong)pcVar7 & 1) == 0) {
                                                    pcVar7 = local_88;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_88,
                                                  PTR_s_isEqualToString__0269ccc8,
                                                  _WCRefineProfileCardActionIDAnonymousAtAll);
                                                  if (((ulong)pcVar7 & 1) == 0) {
                                                    pcVar7 = local_88;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_88,
                                                  PTR_s_isEqualToString__0269ccc8,
                                                  _WCRefineProfileCardActionIDThemeDelivery);
                                                  if (((ulong)pcVar7 & 1) == 0) {
                                                    puVar12 = 
                                                  PTR_WCRefineProfileCardActionCatalog_026ced78;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (
                                                  PTR_WCRefineProfileCardActionCatalog_026ced78,
                                                  PTR_s_isCustomPageActionID__026b0670,local_88);
                                                  if (((ulong)puVar12 & 1) != 0) {
                                                    _objc_storeStrong(&local_148,&cf_l);
                                                  }
                                                  }
                                                  else {
                                                    _objc_storeStrong(&local_148,&cf__N);
                                                  }
                                                  }
                                                  else {
                                                    _objc_storeStrong(&local_148,&cf__bgN);
                                                  }
                                                  }
                                                  else {
                                                    _objc_storeStrong(&local_148,&cf_bXT);
                                                  }
                                                  }
                                                  else {
                                                    uVar11 = local_80;
                                                    FUN_01564574();
                                                    pcVar7 = &cf__bgN;
                                                    if ((uVar11 & 1) == 0) {
                                                      pcVar7 = &cf_eQ_;
                                                    }
                                                    _objc_storeStrong(&local_148,pcVar7);
                                                  }
                                                  }
                                                  else {
                                                    _objc_storeStrong(&local_148,&cf_USrn_);
                                                  }
                                                  }
                                                  else {
                                                    _objc_storeStrong(&local_148,&cf_USrn_);
                                                  }
                                                  }
                                                  else {
                                                    _objc_storeStrong(&local_148,&cf_n_);
                                                  }
                                                  }
                                                  else {
                                                    _objc_storeStrong(&local_148,&cf__IN);
                                                  }
                                                  }
                                                  else {
                                                    _objc_storeStrong(&local_148,&cf__);
                                                  }
                                                  }
                                                  else {
                                                    pcVar7 = local_a0;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_a0,
                                                  PTR_s_chatAvatarProfileCardFunctionPag_026b06f8);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (puVar12,
                                                  PTR_s_normalizedCustomPageControllersF_026b09a8);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_178 = puVar12;
                                                  (*(code *)PTR__objc_release_02578630)(pcVar7);
                                                  puVar12 = local_178;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_178,
                                                             PTR_s_objectForKeyedSubscript__0269d098
                                                             ,local_88);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  puVar10 = puVar12;
                                                  FUN_01528c84();
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_180 = puVar10;
                                                  (*(code *)PTR__objc_release_02578630)(puVar12);
                                                  puVar12 = local_180;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_180,
                                                             PTR_s_isEqualToString__0269ccc8,
                                                             &cf_WCPluginsViewController);
                                                  if (((ulong)puVar12 & 1) == 0) {
                                                    puVar12 = local_180;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_180,
                                                               PTR_s_isEqualToString__0269ccc8,
                                                               &cf_WCRefineRootViewController);
                                                    if (((ulong)puVar12 & 1) == 0) {
                                                      puVar12 = local_180;
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (local_180,
                                                                 PTR_s_isEqualToString__0269ccc8,
                                                                 &
                                                  cf_WCRefineFontBeautifyViewController);
                                                  if (((ulong)puVar12 & 1) != 0) {
                                                    _objc_storeStrong(&local_148,&cf_n_);
                                                  }
                                                  }
                                                  else {
                                                    _objc_storeStrong(&local_148,&cf_WCR);
                                                  }
                                                  }
                                                  else {
                                                    _objc_storeStrong(&local_148,&cf_cN);
                                                  }
                                                  _objc_storeStrong(&local_180);
                                                  _objc_storeStrong(&local_178,0);
                                                  }
                                                  }
                                                  else {
                                                    FUN_01578534();
                                                    pcVar8 = &cf_Re;
                                                    if (((ulong)pcVar7 & 1) == 0) {
                                                      pcVar8 = &cf_Rmr;
                                                    }
                                                    _objc_storeStrong(&local_148,pcVar8);
                                                  }
                                                  }
                                                  else {
                                                    FUN_01545618();
                                                    FUN_0156d9c0();
                                                    _objc_retainAutoreleasedReturnValue();
                                                    pcVar8 = local_148;
                                                    local_148 = pcVar7;
                                                    (*(code *)PTR__objc_release_02578630)(pcVar8);
                                                  }
                                                }
                                                else {
                                                  _objc_storeStrong(&local_148,&cf_cN);
                                                }
                                              }
                                              else {
                                                _objc_storeStrong(&local_148,&cf_6e);
                                              }
                                            }
                                            else {
                                              _objc_storeStrong(&local_148,&cf_nd);
                                            }
                                          }
                                          else {
                                            _objc_storeStrong(&local_148,&cf_g_b);
                                          }
                                        }
                                        else {
                                          _objc_storeStrong(&local_148,&cf_Y6R);
                                        }
                                      }
                                      else {
                                        _objc_storeStrong(&local_148,&cf_Mn_);
                                      }
                                    }
                                    else {
                                      _objc_storeStrong(&local_148,&cf_format_s_);
                                      lVar9 = local_90;
                                      FUN_01558ffc();
                                      if (lVar9 == 1) {
                                        if ((local_91 & 1) == 0) {
                                          uVar18 = uVar4;
                                        }
                                        pcVar7 = &cf__6C5CE7;
                                        FUN_01551c04(local_91 & 1,uVar18);
                                        _objc_retainAutoreleasedReturnValue();
                                        pcVar8 = local_150;
                                        local_150 = pcVar7;
                                        (*(code *)PTR__objc_release_02578630)(pcVar8);
                                        pcVar7 = &cf__6C5CE7;
                                        if ((local_91 & 1) == 0) {
                                          uVar19 = uVar2;
                                        }
                                        FUN_01551c04(local_91 & 1,uVar19);
                                        _objc_retainAutoreleasedReturnValue();
                                        pcVar8 = local_158;
                                        local_158 = pcVar7;
                                        (*(code *)PTR__objc_release_02578630)(pcVar8);
                                        pcVar7 = &cf__5140D5;
                                        FUN_01551c04(0x3ff0000000000000);
                                        _objc_retainAutoreleasedReturnValue();
                                        pcVar8 = local_160;
                                        local_160 = pcVar7;
                                        (*(code *)PTR__objc_release_02578630)(pcVar8);
                                        pcVar8 = &cf__5140D5;
                                        FUN_01551c04(uVar5);
                                        _objc_retainAutoreleasedReturnValue();
                                        pcVar7 = local_168;
                                        local_168 = pcVar8;
                                        (*(code *)PTR__objc_release_02578630)(pcVar7);
                                      }
                                    }
                                  }
                                  else {
                                    _objc_storeStrong(&local_148,&cf_format_s_);
                                    lVar9 = local_90;
                                    FUN_01558ffc();
                                    if (lVar9 == 1) {
                                      if ((local_91 & 1) == 0) {
                                        uVar18 = uVar4;
                                      }
                                      pcVar7 = &cf__17A2B8;
                                      FUN_01551c04(local_91 & 1,uVar18);
                                      _objc_retainAutoreleasedReturnValue();
                                      pcVar8 = local_150;
                                      local_150 = pcVar7;
                                      (*(code *)PTR__objc_release_02578630)(pcVar8);
                                      pcVar7 = &cf__17A2B8;
                                      if ((local_91 & 1) == 0) {
                                        uVar19 = uVar2;
                                      }
                                      FUN_01551c04(local_91 & 1,uVar19);
                                      _objc_retainAutoreleasedReturnValue();
                                      pcVar8 = local_158;
                                      local_158 = pcVar7;
                                      (*(code *)PTR__objc_release_02578630)(pcVar8);
                                      pcVar7 = &cf__0F7D8F;
                                      FUN_01551c04(0x3ff0000000000000);
                                      _objc_retainAutoreleasedReturnValue();
                                      pcVar8 = local_160;
                                      local_160 = pcVar7;
                                      (*(code *)PTR__objc_release_02578630)(pcVar8);
                                      pcVar8 = &cf__0F7D8F;
                                      FUN_01551c04(uVar5);
                                      _objc_retainAutoreleasedReturnValue();
                                      pcVar7 = local_168;
                                      local_168 = pcVar8;
                                      (*(code *)PTR__objc_release_02578630)(pcVar7);
                                    }
                                  }
                                }
                                else {
                                  _objc_storeStrong(&local_148,&cf_n_);
                                }
                              }
                              else {
                                _objc_storeStrong(&local_148,&cf_fe);
                              }
                            }
                            else {
                              _objc_storeStrong(&local_148,&cf_1ZPN);
                            }
                          }
                          else {
                            uVar11 = local_80;
                            FUN_01564574();
                            local_31c = 0;
                            uVar6 = (uint)uVar11;
                            if ((uVar11 & 1) == 0) {
                              FUN_0156c6b8();
                              local_31c = uVar6;
                            }
                            pcVar7 = &cf_N__;
                            if ((local_31c & 1) == 0) {
                              pcVar7 = &cf_nf;
                            }
                            _objc_storeStrong(&local_148,pcVar7);
                          }
                        }
                        else {
                          uVar11 = local_80;
                          FUN_01564574();
                          pcVar7 = &cf__wQ;
                          if ((uVar11 & 1) == 0) {
                            pcVar7 = &cf_N__;
                          }
                          _objc_storeStrong(&local_148,pcVar7);
                        }
                      }
                      else {
                        _objc_storeStrong(&local_148,&cf_S);
                      }
                    }
                    else {
                      _objc_storeStrong(&local_148,&cf_d_O);
                      uVar11 = local_80;
                      FUN_01564574();
                      if ((uVar11 & 1) != 0) {
                        uVar11 = local_80;
                        FUN_01587398();
                        local_16d = (byte)uVar11;
                        pcVar7 = &cf__Pbk;
                        if ((uVar11 & 1) == 0) {
                          pcVar7 = &cf__bgN;
                        }
                        _objc_storeStrong(&local_148,pcVar7);
                        if ((local_16d & 1) != 0) {
                          if ((local_91 & 1) == 0) {
                            uVar18 = uVar16;
                          }
                          pcVar7 = &cf__FF8F9A;
                          FUN_01551c04(local_91 & 1,uVar18);
                          _objc_retainAutoreleasedReturnValue();
                          pcVar8 = local_150;
                          local_150 = pcVar7;
                          (*(code *)PTR__objc_release_02578630)(pcVar8);
                          pcVar7 = &cf__FF8F9A;
                          if ((local_91 & 1) == 0) {
                            uVar17 = uVar13;
                          }
                          FUN_01551c04(local_91 & 1,uVar17);
                          _objc_retainAutoreleasedReturnValue();
                          pcVar8 = local_158;
                          local_158 = pcVar7;
                          (*(code *)PTR__objc_release_02578630)(pcVar8);
                          pcVar7 = &cf__C94A5D;
                          FUN_01551c04(0x3ff0000000000000);
                          _objc_retainAutoreleasedReturnValue();
                          pcVar8 = local_160;
                          local_160 = pcVar7;
                          (*(code *)PTR__objc_release_02578630)(pcVar8);
                          pcVar8 = &cf__C94A5D;
                          FUN_01551c04(uVar3);
                          _objc_retainAutoreleasedReturnValue();
                          pcVar7 = local_168;
                          local_168 = pcVar8;
                          (*(code *)PTR__objc_release_02578630)(pcVar7);
                        }
                      }
                    }
                  }
                  else {
                    uVar11 = local_80;
                    FUN_0156a8d8(local_80,local_88,local_90);
                    local_16c = (byte)uVar11;
                    pcVar7 = &cf__O__;
                    if ((uVar11 & 1) == 0) {
                      pcVar7 = &cf__gO__;
                    }
                    _objc_storeStrong(&local_148,pcVar7);
                    if ((local_16c & 1) != 0) {
                      if ((local_91 & 1) == 0) {
                        uVar15 = uVar16;
                      }
                      pcVar7 = &cf__FF5A5F;
                      FUN_01551c04(local_91 & 1,uVar15);
                      _objc_retainAutoreleasedReturnValue();
                      pcVar8 = local_150;
                      local_150 = pcVar7;
                      (*(code *)PTR__objc_release_02578630)(pcVar8);
                      pcVar7 = &cf__FF5A5F;
                      uVar16 = DAT_02332e58;
                      if ((local_91 & 1) == 0) {
                        uVar16 = uVar13;
                      }
                      FUN_01551c04(local_91 & 1,uVar16);
                      _objc_retainAutoreleasedReturnValue();
                      pcVar8 = local_158;
                      local_158 = pcVar7;
                      (*(code *)PTR__objc_release_02578630)(pcVar8);
                      pcVar7 = &cf__D63B42;
                      FUN_01551c04(0x3ff0000000000000);
                      _objc_retainAutoreleasedReturnValue();
                      pcVar8 = local_160;
                      local_160 = pcVar7;
                      (*(code *)PTR__objc_release_02578630)(pcVar8);
                      pcVar8 = &cf__D63B42;
                      FUN_01551c04(uVar3);
                      _objc_retainAutoreleasedReturnValue();
                      pcVar7 = local_168;
                      local_168 = pcVar8;
                      (*(code *)PTR__objc_release_02578630)(pcVar7);
                    }
                  }
                }
                else {
                  uVar11 = local_80;
                  FUN_0156a8d8(local_80,local_88,local_90);
                  local_16b = (byte)uVar11;
                  pcVar7 = &cf__;
                  if ((uVar11 & 1) == 0) {
                    pcVar7 = &cf__g;
                  }
                  _objc_storeStrong(&local_148,pcVar7);
                  if ((local_16b & 1) != 0) {
                    uVar16 = 0x3fd3333333333333;
                    if ((local_91 & 1) == 0) {
                      uVar16 = uVar1;
                    }
                    pcVar7 = &cf__FF9F43;
                    FUN_01551c04(local_91 & 1,uVar16);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar8 = local_150;
                    local_150 = pcVar7;
                    (*(code *)PTR__objc_release_02578630)(pcVar8);
                    pcVar7 = &cf__FF9F43;
                    if ((local_91 & 1) == 0) {
                      uVar14 = 0x3fd3333333333333;
                    }
                    FUN_01551c04(local_91 & 1,uVar14);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar8 = local_158;
                    local_158 = pcVar7;
                    (*(code *)PTR__objc_release_02578630)(pcVar8);
                    pcVar7 = &cf__C46B14;
                    FUN_01551c04(0x3ff0000000000000);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar8 = local_160;
                    local_160 = pcVar7;
                    (*(code *)PTR__objc_release_02578630)(pcVar8);
                    pcVar8 = &cf__C46B14;
                    FUN_01551c04(uVar3);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar7 = local_168;
                    local_168 = pcVar8;
                    (*(code *)PTR__objc_release_02578630)(pcVar7);
                  }
                }
              }
              else {
                uVar11 = local_80;
                FUN_0156a8d8(local_80,local_88,local_90);
                local_16a = (byte)uVar11;
                pcVar7 = &cf__n_v;
                if ((uVar11 & 1) == 0) {
                  pcVar7 = &cf__gn_v;
                }
                _objc_storeStrong(&local_148,pcVar7);
                if ((local_16a & 1) != 0) {
                  uVar16 = DAT_02323f18;
                  if ((local_91 & 1) == 0) {
                    uVar16 = DAT_02323c70;
                  }
                  pcVar7 = &cf__26A65B;
                  FUN_01551c04(local_91 & 1,uVar16);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar8 = local_150;
                  local_150 = pcVar7;
                  (*(code *)PTR__objc_release_02578630)(pcVar8);
                  pcVar7 = &cf__26A65B;
                  uVar16 = DAT_02324050;
                  if ((local_91 & 1) == 0) {
                    uVar16 = uVar15;
                  }
                  FUN_01551c04(local_91 & 1,uVar16);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar8 = local_158;
                  local_158 = pcVar7;
                  (*(code *)PTR__objc_release_02578630)(pcVar8);
                  pcVar7 = &cf__1B6F3D;
                  FUN_01551c04(local_91 & 1,0x3ff0000000000000);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar8 = local_160;
                  local_160 = pcVar7;
                  (*(code *)PTR__objc_release_02578630)(pcVar8);
                  pcVar7 = &cf__1B6F3D;
                  uVar16 = DAT_02323e70;
                  if ((local_91 & 1) == 0) {
                    uVar16 = uVar3;
                  }
                  FUN_01551c04(local_91 & 1,uVar16);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar8 = local_168;
                  local_168 = pcVar7;
                  (*(code *)PTR__objc_release_02578630)(pcVar8);
                }
              }
            }
            else {
              uVar11 = local_80;
              FUN_0156a8d8(local_80,local_88,local_90);
              local_169 = (byte)uVar11;
              pcVar7 = &cf__fh;
              if ((uVar11 & 1) == 0) {
                pcVar7 = &cf__gfh;
              }
              _objc_storeStrong(&local_148,pcVar7);
              if ((local_169 & 1) != 0) {
                uVar16 = 0x3fd3333333333333;
                if ((local_91 & 1) == 0) {
                  uVar16 = uVar1;
                }
                pcVar7 = &cf__F4C542;
                FUN_01551c04(local_91 & 1,uVar16);
                _objc_retainAutoreleasedReturnValue();
                pcVar8 = local_150;
                local_150 = pcVar7;
                (*(code *)PTR__objc_release_02578630)(pcVar8);
                pcVar7 = &cf__F4C542;
                if ((local_91 & 1) == 0) {
                  uVar14 = 0x3fd3333333333333;
                }
                FUN_01551c04(local_91 & 1,uVar14);
                _objc_retainAutoreleasedReturnValue();
                pcVar8 = local_158;
                local_158 = pcVar7;
                (*(code *)PTR__objc_release_02578630)(pcVar8);
                pcVar7 = &cf__A96B00;
                FUN_01551c04(0x3ff0000000000000);
                _objc_retainAutoreleasedReturnValue();
                pcVar8 = local_160;
                local_160 = pcVar7;
                (*(code *)PTR__objc_release_02578630)(pcVar8);
                pcVar8 = &cf__A96B00;
                FUN_01551c04(uVar3);
                _objc_retainAutoreleasedReturnValue();
                pcVar7 = local_168;
                local_168 = pcVar8;
                (*(code *)PTR__objc_release_02578630)(pcVar7);
              }
            }
          }
          else {
            _objc_storeStrong(&local_148,&cf_S);
            uVar16 = uVar18;
            if ((local_91 & 1) == 0) {
              uVar16 = uVar4;
            }
            pcVar7 = &cf__FF9F43;
            FUN_01551c04(local_91 & 1,uVar16);
            _objc_retainAutoreleasedReturnValue();
            pcVar8 = local_150;
            local_150 = pcVar7;
            (*(code *)PTR__objc_release_02578630)(pcVar8);
            pcVar7 = &cf__FF9F43;
            if ((local_91 & 1) == 0) {
              uVar19 = uVar18;
            }
            FUN_01551c04(local_91 & 1,uVar19);
            _objc_retainAutoreleasedReturnValue();
            pcVar8 = local_158;
            local_158 = pcVar7;
            (*(code *)PTR__objc_release_02578630)(pcVar8);
            pcVar7 = &cf__C46B14;
            FUN_01551c04(0x3ff0000000000000);
            _objc_retainAutoreleasedReturnValue();
            pcVar8 = local_160;
            local_160 = pcVar7;
            (*(code *)PTR__objc_release_02578630)(pcVar8);
            pcVar8 = &cf__C46B14;
            FUN_01551c04(uVar5);
            _objc_retainAutoreleasedReturnValue();
            pcVar7 = local_168;
            local_168 = pcVar8;
            (*(code *)PTR__objc_release_02578630)(pcVar7);
          }
        }
        else {
          _objc_storeStrong(&local_148,&cf__6R);
          if ((local_91 & 1) == 0) {
            uVar18 = uVar4;
          }
          pcVar7 = &cf__9B59B6;
          FUN_01551c04(local_91 & 1,uVar18);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = local_150;
          local_150 = pcVar7;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          pcVar7 = &cf__9B59B6;
          if ((local_91 & 1) == 0) {
            uVar19 = uVar2;
          }
          FUN_01551c04(local_91 & 1,uVar19);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = local_158;
          local_158 = pcVar7;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          pcVar7 = &cf__7D3C98;
          FUN_01551c04(0x3ff0000000000000);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = local_160;
          local_160 = pcVar7;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          pcVar8 = &cf__7D3C98;
          FUN_01551c04(uVar5);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = local_168;
          local_168 = pcVar8;
          (*(code *)PTR__objc_release_02578630)(pcVar7);
        }
      }
      else {
        _objc_storeStrong(&local_148,&cf_yd);
        uVar16 = uVar18;
        if ((local_91 & 1) == 0) {
          uVar16 = uVar4;
        }
        pcVar7 = &cf__FF5A5F;
        FUN_01551c04(local_91 & 1,uVar16);
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = local_150;
        local_150 = pcVar7;
        (*(code *)PTR__objc_release_02578630)(pcVar8);
        pcVar7 = &cf__FF5A5F;
        if ((local_91 & 1) == 0) {
          uVar19 = uVar18;
        }
        FUN_01551c04(local_91 & 1,uVar19);
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = local_158;
        local_158 = pcVar7;
        (*(code *)PTR__objc_release_02578630)(pcVar8);
        pcVar7 = &cf__D63B42;
        FUN_01551c04(0x3ff0000000000000);
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = local_160;
        local_160 = pcVar7;
        (*(code *)PTR__objc_release_02578630)(pcVar8);
        pcVar8 = &cf__D63B42;
        FUN_01551c04(uVar5);
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = local_168;
        local_168 = pcVar8;
        (*(code *)PTR__objc_release_02578630)(pcVar7);
      }
    }
    else {
      _objc_storeStrong(&local_148,&cf_RN);
      if ((local_91 & 1) == 0) {
        uVar13 = uVar4;
      }
      pcVar7 = &cf__26A65B;
      FUN_01551c04(local_91 & 1,uVar13);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = local_150;
      local_150 = pcVar7;
      (*(code *)PTR__objc_release_02578630)(pcVar8);
      pcVar7 = &cf__26A65B;
      if ((local_91 & 1) == 0) {
        uVar17 = uVar18;
      }
      FUN_01551c04(local_91 & 1,uVar17);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = local_158;
      local_158 = pcVar7;
      (*(code *)PTR__objc_release_02578630)(pcVar8);
      pcVar7 = &cf__1B7D43;
      FUN_01551c04(0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = local_160;
      local_160 = pcVar7;
      (*(code *)PTR__objc_release_02578630)(pcVar8);
      pcVar8 = &cf__1B7D43;
      FUN_01551c04(uVar5);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = local_168;
      local_168 = pcVar8;
      (*(code *)PTR__objc_release_02578630)(pcVar7);
    }
  }
  else {
    _objc_storeStrong(&local_148,&cf_S);
    if ((local_91 & 1) == 0) {
      uVar18 = uVar4;
    }
    pcVar7 = &cf__5A95FF;
    FUN_01551c04(local_91 & 1,uVar18);
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = local_150;
    local_150 = pcVar7;
    (*(code *)PTR__objc_release_02578630)(pcVar8);
    pcVar7 = &cf__5A95FF;
    if ((local_91 & 1) == 0) {
      uVar19 = uVar2;
    }
    FUN_01551c04(local_91 & 1,uVar19);
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = local_158;
    local_158 = pcVar7;
    (*(code *)PTR__objc_release_02578630)(pcVar8);
    pcVar7 = &cf__2F6FE5;
    FUN_01551c04(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = local_160;
    local_160 = pcVar7;
    (*(code *)PTR__objc_release_02578630)(pcVar8);
    pcVar8 = &cf__2F6FE5;
    FUN_01551c04(uVar5);
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = local_168;
    local_168 = pcVar8;
    (*(code *)PTR__objc_release_02578630)(pcVar7);
  }
  local_78 = &cf_status;
  local_50 = local_148;
  local_70 = &cf_backgroundColor;
  local_48 = local_150;
  local_68 = &cf_borderColor;
  local_40 = local_158;
  local_60 = &cf_titleColor;
  local_38 = local_160;
  local_58 = &cf_statusColor;
  local_30 = local_168;
  puVar12 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_50,&local_78,5);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_168);
  _objc_storeStrong(&local_160,0);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_120,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar12);
  return;
}


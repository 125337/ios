// wcrAddCapabilitySectionKind:title:footer: @ 017d5894

/* Function Stack Size: 0x28 bytes */

void WCRefineAISettingsViewController::wcrAddCapabilitySectionKind_title_footer_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined8 in_x7;
  cfstringStruct *local_2a0;
  cfstringStruct *local_230;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  uint local_fc;
  cfstringStruct *local_e8;
  byte local_d9;
  undefined *local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  byte local_b9;
  cfstringStruct *local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  byte local_69;
  cfstringStruct *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = (undefined *)0x0;
  _objc_storeStrong(&local_48,param_5);
  puVar1 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_28;
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrProviderForKind__026b5230,local_38);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_58 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setHeaderTitle__0269e3c0,local_40);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_chat);
  local_69 = 0;
  local_fc = 0;
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_providerID_0269d480);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_fc = (uint)pcVar2;
  }
  if ((local_69 & 1) != 0) {
    pcVar2 = local_68;
    (*(code *)PTR__objc_release_02578630)();
  }
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((local_fc & 1) != 0) {
    FUN_017d6f78();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf_____);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = local_48;
    local_48 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setFooterTitle__0269e3c8,local_48);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_image);
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_video);
    if (((ulong)pcVar2 & 1) == 0) {
      local_140 = PTR_s_pickChatProvider_026b5248;
    }
    else {
      local_140 = PTR_s_pickVideoProvider_026b5240;
    }
    local_138 = local_140;
  }
  else {
    local_138 = PTR_s_pickImageProvider_026b5238;
  }
  local_78 = local_138;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_image);
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_video);
    if (((ulong)pcVar2 & 1) == 0) {
      local_150 = PTR_s_editChatBaseURL_026b5260;
    }
    else {
      local_150 = PTR_s_editVideoBaseURL_026b5258;
    }
    local_148 = local_150;
  }
  else {
    local_148 = PTR_s_editImageBaseURL_026b5250;
  }
  local_80 = local_148;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_image);
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_video);
    if (((ulong)pcVar2 & 1) == 0) {
      local_160 = PTR_s_manageChatAPIKey_026b5278;
    }
    else {
      local_160 = PTR_s_manageVideoAPIKey_026b5270;
    }
    local_158 = local_160;
  }
  else {
    local_158 = PTR_s_manageImageAPIKey_026b5268;
  }
  local_88 = local_158;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_image);
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_video);
    if (((ulong)pcVar2 & 1) == 0) {
      local_170 = PTR_s_pickEditingChatModel_026b5290;
    }
    else {
      local_170 = PTR_s_pickEditingVideoModel_026b5288;
    }
    local_168 = local_170;
  }
  else {
    local_168 = PTR_s_pickEditingImageModel_026b5280;
  }
  local_90 = local_168;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_image);
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_video);
    local_178 = &cf__jW;
    if (((ulong)pcVar2 & 1) == 0) {
      local_178 = &cf___jW;
    }
  }
  else {
    local_178 = &cf_euV_jW;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = local_178;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_image);
  local_a9 = 0;
  local_b9 = 0;
  local_c9 = 0;
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_video);
    local_190 = local_58;
    if (((ulong)pcVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_chatModel_026aadc8);
      _objc_retainAutoreleasedReturnValue();
      local_c9 = 1;
      local_c8 = local_190;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_videoModel_026aad78);
      _objc_retainAutoreleasedReturnValue();
      local_b9 = 1;
      local_b8 = local_190;
    }
    local_188 = local_190;
  }
  else {
    local_188 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_imageModel_026aadd0);
    _objc_retainAutoreleasedReturnValue();
    local_a9 = 1;
    local_a8 = local_188;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = local_188;
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  if ((local_b9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b8);
  }
  if ((local_a9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  pcVar2 = local_28;
  puVar9 = local_60;
  puVar8 = local_78;
  puVar1 = PTR_WCRefineHelper_026ce000;
  pcVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_name_0269d828);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar8,pcVar2,&cf_s_S,pcVar3,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar2 = local_28;
  puVar9 = local_60;
  puVar8 = local_80;
  puVar1 = PTR_WCRefineHelper_026ce000;
  pcVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_baseURL_026aade8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar8,pcVar2,&cf_cS0W_W,pcVar3,
             1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar1 = local_50;
  pcVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_providerID_0269d480);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_apiKeyForProviderID_kind__0269d488,pcVar2,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_apiKeyRequiredForProvider__026b4d60,local_58)
  ;
  local_d9 = (byte)puVar1;
  puVar1 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_230 = &cf__gn_;
    if ((local_d9 & 1) == 0) {
      local_230 = &cf_SYuzz;
    }
  }
  else {
    local_230 = &cf__n_;
  }
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = local_28;
  puVar9 = local_60;
  puVar8 = local_88;
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_e8 = local_230;
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrAPIKeyTitleForKind__026b5298,local_38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar8,pcVar2,pcVar3,local_e8,0)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_28;
  puVar9 = local_60;
  puVar8 = local_90;
  pcVar2 = local_98;
  puVar1 = PTR_WCRefineHelper_026ce000;
  pcVar4 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_2a0 = &cf_pQb;
  }
  else {
    local_2a0 = local_a0;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar8,pcVar3,pcVar2,local_2a0,0
            );
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_chat);
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_image);
    if (((ulong)pcVar2 & 1) == 0) {
      puVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isVideoProviderConfigured_0269d390);
      puVar6 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_videoDurationSeconds_0269d4a0);
      pcVar2 = local_28;
      puVar9 = local_60;
      puVar8 = PTR_WCRefineHelper_026ce000;
      puVar1 = PTR_s_editVideoDuration_026b4bf0;
      puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar8,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar1,pcVar2,&cf_e_,puVar7,
                 0,in_x7,puVar6);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      puVar1 = local_60;
      pcVar2 = &::cf___;
      if (((ulong)puVar5 & 1) == 0) {
        pcVar2 = &cf__Mn_;
      }
      puVar8 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
                 PTR_s_testVideoPrompt_026b52d8,local_28,&cf_Km,pcVar2,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar8);
    }
    else {
      puVar8 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isImageProviderConfigured_0269d388);
      puVar1 = local_60;
      pcVar2 = &::cf___;
      if (((ulong)puVar8 & 1) == 0) {
        pcVar2 = &cf__Mn_;
      }
      puVar8 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
                 PTR_s_testImagePrompt_026b52d0,local_28,&cf_euVKm,pcVar2,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar8);
    }
  }
  else {
    puVar8 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isChatProviderConfigured_0269ce90);
    puVar1 = local_60;
    pcVar2 = &::cf___;
    if (((ulong)puVar8 & 1) == 0) {
      pcVar2 = &cf__Mn_;
    }
    puVar8 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
               PTR_s_testSystemPrompt_026b4c10,local_28,&cf_T_Km,pcVar2,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_providerID_0269d480);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    puVar1 = local_60;
    if (((ulong)pcVar3 & 1) == 0) {
      puVar8 = PTR_WCRefineAIClient_026ce080;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineAIClient_026ce080,PTR_s_supportsBalanceForProvider__026b52b0,local_58);
      puVar1 = local_60;
      if (((ulong)puVar8 & 1) != 0) {
        puVar8 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
                   PTR_s_queryProviderBalance_026b52b8,local_28,&cf__7bYO,&cf_g,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
        (*(code *)PTR__objc_release_02578630)(puVar8);
      }
    }
    else {
      puVar8 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
                 PTR_s_openSiliconFlowAccount_026b52a0,local_28,&cf__7bYO,&cf__Q_gw,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      puVar1 = local_60;
      puVar8 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
                 PTR_s_handleSiliconFlowInvite_026b52a8,local_28,&::cf_S,&cf_Y6R_,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar8);
    }
    pcVar3 = local_28;
    puVar9 = local_60;
    puVar8 = PTR_WCRefineHelper_026ce000;
    puVar1 = PTR_s_toggleAdvancedInterface_026b52c0;
    pcVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showAdvancedInterface_026b52c8);
    pcVar2 = &cf_6ew;
    if (((ulong)pcVar4 & 1) == 0) {
      pcVar2 = &cf_U_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar8,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar1,pcVar3,&cf__Q_cS_,
               pcVar2,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar8);
  }
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showAdvancedInterface_026b52c8);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_chat);
    pcVar2 = local_28;
    puVar9 = local_60;
    puVar8 = PTR_WCRefineHelper_026ce000;
    puVar1 = PTR_s_editChatPath_026b52e0;
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_image);
      pcVar2 = local_28;
      puVar5 = local_60;
      puVar9 = PTR_WCRefineHelper_026ce000;
      puVar8 = PTR_s_editVideoPath_026b52f0;
      puVar1 = PTR_s_editImagePath_026b52e8;
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_videoPath_026aae10);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar9,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar8,pcVar2,&cf_cN_,
                   pcVar3,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addCell__0269e3f8);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar2 = local_28;
        puVar9 = local_60;
        puVar8 = PTR_WCRefineHelper_026ce000;
        puVar1 = PTR_s_editVideoStatusPath_026b52f8;
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_videoStatusPath_026aae18);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar8,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar1,pcVar2,&cf_r__,
                   pcVar3,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_addCell__0269e3f8);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      else {
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_imagePath_026aae08);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar9,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar1,pcVar2,&cf_VGr_,
                   pcVar3,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addCell__0269e3f8);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
    }
    else {
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_chatPath_026aae00);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar8,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar1,pcVar2,&cf___,pcVar3,
                 1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_chat);
    puVar1 = local_60;
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar10 = "WCTableViewCellManager";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(pcVar10);
    }
  }
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}


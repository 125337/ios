// addOtherAutomaticFunctionSection @ 01a1da30

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineGeneralFunctionViewController::addOtherAutomaticFunctionSection
          (WCRefineGeneralFunctionViewController *this,ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 in_x7;
  undefined8 in_d0;
  undefined8 uVar7;
  cfstringStruct *local_1f0;
  undefined *local_1e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  bool local_89;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setHeaderTitle__0269e3c0,&cf_vQNRR);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_28;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_togglePatSendConfirmEnabled__026bbad8;
  puVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patSendConfirmEnabled_026a63b8);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf__T_ub,puVar5);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
  IVar4 = local_28;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_togglePatAutoBackEnabled__026bbae0;
  puVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patAutoBackEnabled_026a63c8);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf__T_ubTRVb,
             puVar5);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
  puVar6 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patAutoBackEnabled_026a63c8);
  IVar4 = local_28;
  puVar5 = PTR_WCRefineHelper_026ce000;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  puVar2 = PTR_s_showPatAutoBackDelayEditor_026bbae8;
  if (((ulong)puVar6 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patAutoBackDelaySeconds_026a63d0);
    uVar7 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf___2fs);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar2,IVar4,&::cf__,puVar3,0,
               in_x7,uVar7);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,local_58);
    _objc_storeStrong(&local_58,0);
  }
  IVar4 = local_28;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_togglePatAutoRevokeEnabled__026bbaf0;
  puVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patAutoRevokeEnabled_026a63e8);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf__T_uRdVb,puVar5
            );
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
  puVar6 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patAutoRevokeEnabled_026a63e8);
  IVar4 = local_28;
  puVar5 = PTR_WCRefineHelper_026ce000;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  puVar2 = PTR_s_showPatAutoRevokeDelayEditor_026bbaf8;
  if (((ulong)puVar6 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patAutoRevokeDelaySeconds_026a63f0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf___2fs);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar2,IVar4,&::cf__,puVar3,0,
               in_x7,in_d0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,local_68);
    _objc_storeStrong(&local_68,0);
  }
  IVar4 = local_28;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_toggleAutoAcceptFriend__026bbb00;
  puVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_autoAcceptFriendEnabled_026a3780);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf__T_uR_YS,puVar5
            );
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
  puVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_autoAcceptFriendEnabled_026a3780);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_autoAcceptFriendKeywords_026a37e0);
    _objc_retainAutoreleasedReturnValue();
    local_1e0 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_1e0 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_1e0;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
    local_1f0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    local_89 = false;
    if (puVar2 == (undefined *)0x0) {
      local_1f0 = &cf__gn_;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_88 = local_1f0;
    }
    local_89 = puVar2 != (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = local_1f0;
    if ((local_89 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
               PTR_s_showAutoAcceptFriendKeywordsEdit_026bbb08,local_28,&::cf__,local_80,0);
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar2);
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_autoAcceptFriendReplyContent_026a37d8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar4 = local_28;
    puVar3 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_showAutoAcceptFriendReplyEditor_026bbb10;
    puVar5 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
    pcVar1 = &cf__n_;
    if (puVar5 == (undefined *)0x0) {
      pcVar1 = &cf__gn_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar2,IVar4,&::cf__,pcVar1,0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_a8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
  }
  IVar4 = local_28;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_toggleAutoConfirmMultiDeviceLogi_026bbb18;
  puVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_autoConfirmMultiDeviceLoginEnabl_0269d920);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf__T_uRnx_vU_,
             puVar5);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
  IVar4 = local_28;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_toggleAutoSelectMediaGroupCombin_026bbb20;
  puVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_autoSelectMediaGroupCombineSendE_026a9780);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf__T_uRRTv_,
             puVar5);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
  IVar4 = local_28;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_toggleAutoExpandIncomingMediaGro_026bbb28;
  puVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_autoExpandIncomingMediaGroupEnab_026a9828);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf__T_uRU_,puVar5)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
  IVar4 = local_28;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_toggleAutoSelectOriginalImage__026bbb30;
  puVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_autoSelectOriginalImageEnabled_026a7820);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf__T_uRRSV,puVar5
            );
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
  IVar4 = local_28;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_toggleAutoSelectLivePhoto__026bbb38;
  puVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_autoSelectLivePhotoEnabled_026a97c8);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf__T_uRR_Q,puVar5
            );
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
  IVar4 = local_28;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_toggleChatAutoPlayLivePhoto__026bbb40;
  puVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_chatAutoPlayLivePhotoEnabled_026a98a0);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf__T_uRd>e_Q,
             puVar5);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}


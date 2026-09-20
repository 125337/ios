// getViewControllerFriendlyName: @ 014cf7dc

/* Function Stack Size: 0x18 bytes */

ID WCRefineSearchManager::getViewControllerFriendlyName_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_44;
  ulong local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_SettingMyProfileViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__NNDe;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_SettingMyAccountInfoViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__S_hQ;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_SettingNotificationViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_w;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_SettingGeneralViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__u;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_SettingPrivateConfigViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_gSCgP;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_MMShowHelpViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___RNS;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCPureExtensionDisableSettingsController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_y_uBgy;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCPureExtensionEnableSettingsController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_X__Bgy;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCPureExtensionCssSettingsController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_____Y_;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCPureExtensionVoiceSettingsController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_Bgy;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCPureExtensionReveiverSettingsController)
  ;
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_R6e>k;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCPureExtensionEmojiSettingsController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__wch_;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WeChatTweakEnableSettingsController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_8__uR;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WeChatTweakVoiceSettingsController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &::cf_R;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WeChatTweakRedEnvelopesSettingsController)
  ;
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__SR;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WeChatTweakCssSettingsController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf____n_;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WeChatTweakDisableSettingsController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_y_uR;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WeChatTweakReMsgSettingsController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__wcR;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WeChatTweakAutoDownloadSettingsController)
  ;
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_RN_;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_ThemeBoxSettingViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__Ny;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_ThemeBoxLayoutViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf____n_;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_ThemeBoxTitleViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_J_Yvh___;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_ThemeBoxProfileViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_bvub___;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_ThemeBoxSessionViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_uR____;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_ThemeBoxTabBarViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__h___;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_ThemeBoxColorViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_Mr_t;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_ThemeBoxAnimatedViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_ofR_u;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_ThemeBoxHeadViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_4YPni_n_;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_ThemeBoxHeadCardViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_4YPaSGr;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_BubbleBoxViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__Nu;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_BubbleSettingViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_n__N_;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_BubbleBoxColorViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_Mr_t;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_BubbleBoxHeadViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_4YPni_;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_BubbleBoxHeadCardViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_4YPaSGr;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_TheMessageController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_mo_R;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_TheVoiceController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &::cf_R;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_TheTimeLineController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_gSWR;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_TheGroupController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__JR;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_TheSpecialController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_yrrR;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_DisableWeChatController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_y_uR;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_AccountDetailViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__7bOo_;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineSearchSettingsViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_ZTd__;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineGeneralFunctionViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_8__uR;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineKeywordAlertViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_sQ_c;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineAutoFunctionViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_RR;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineFriendRelationCheckViewController)
  ;
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__YSsQ_hKm;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineDoNotDisturbSettingsViewController
            );
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_Rpb_j_;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineChatRoomFunctionViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__JR;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineMessageSyncRuleViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_mo_TekR;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineScheduledTaskViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__eNR_;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineEmoticonFunctionViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_h_R;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineEmoticonGroupManageViewController)
  ;
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_h_R__t;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineVoiceFunctionViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &::cf_R;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineVoicePackSettingsViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &::cf_S;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineVoicePackManagerViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_S_t;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,
             &cf_WCRefineChatAvatarProfileCardViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_pQ4YPDeaSGr;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,
             &cf_WCRefineProfileCardActionConfigViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_DeaSGrRMn_;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_ThemeExchangeViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__NQQbc;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineLayoutFunctionViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf____n_;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineGroupManagementViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_uR__t;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineTelegramGroupingViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_u5ubR_;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineTelegramGroupingTabsViewController
            );
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_R__t;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineChatAttachmentViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_Mn_DN;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineLongPressMenuViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_Mn_USc;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineUICleanViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_LubQS;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineNavigationAvatarViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_vh4YP>f_y;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineChatTimeViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_mo_e>f_y;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_RepeatEnhanceViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_mo_Yh__;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,
             &cf_WCRefineFloatingTabBarSettingsViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__h___;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,
             &cf_WCRefineFloatingTabBarButtonActionViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__hRc;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineUIBeautifyViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_Lub_S;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineFontBeautifyViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_W_SO_S;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineFontConvertViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_W_SO<h_lbc;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,
             &cf_WCRefineChatAttachmentBeautifyViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_mo_DNof_S;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,
             &cf_WCRefineMessageBannerBeautifyViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_mo_w_jE__S;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineProfileCardBeautifyViewController)
  ;
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_bvubDe_S;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineAvatarCornerBeautifyViewController
            );
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_4YPFhW_S;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineNameplateBeautifyViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__O_N__Lr_S;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,
             &cf_WCRefineHomeAvatarStripSettingsViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_u4YP>f_y;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineCornerViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_LubW;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineMomentsViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_gSW__;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineAssistFunctionViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__bV4lpS_bVWYX;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineTextReplaceViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_N___TT;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineTextPlaceholderViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_e_g_SMO;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineWeChatHomeTextViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__Oue_g;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineVersionController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_Hr_gc6R;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefinePluginManagementViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_cN_t;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,
             &cf_WCRefinePluginIconCustomizationViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__INcNVh;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,
             &cf_WCRefinePluginFeatureManagementViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__INRc_;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineRedEnvelopViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__SR;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineTouchTrailViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_O_U_xdh_S;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineMusicCoverViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_pLk_b;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineCustomAmountViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__IN;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineGlobalCornerSettingsViewController
            );
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_hQ__W;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineSmallSignalSettingsViewController)
  ;
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__OSX__;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,
             &cf_WCRefineForwardToGroupSettingsViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_R_lS;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineEnhancedAdBlockViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_X__S__JT;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineToDoListSettingsViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__Ou_RNy;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefinePluginTopViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_cNv;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCEhanceViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__Nu;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCUIBeautifyController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_Lub_S;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCCustomNameController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__N___TT;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCHideToolController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &::cf_R;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCVersionFakeController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_Hr_g_O;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCEnhanceToolController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_RX__;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCAboutController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_sQNcN;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_MiYouSettingViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_n_;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCPLSettingViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_n_;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCEnhanceSettingViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_n_;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_BNHelperSettingController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_n_;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_DouTuSettingViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_n_;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCPulseSettingViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_n_;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCPulseSpecialFeaturesViewController);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_yr_RR;
    local_44 = 1;
    goto LAB_014d1f28;
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_pkcOldSettingsVC_026af560);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_50;
  local_58 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_pkcLetsGoVC_026af568);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_40;
  local_60 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_QBXwzqnbgtkquptgugw);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_CUEizyi);
    if ((uVar1 & 1) == 0) {
      if (local_58 != (undefined *)0x0) {
        uVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_58);
        if ((uVar1 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf_eHrn_;
          goto LAB_014d1efc;
        }
      }
      if (local_60 != (undefined *)0x0) {
        uVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_60);
        if ((uVar1 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf_Let_sGo_;
          goto LAB_014d1efc;
        }
      }
      local_28 = (cfstringStruct *)0x0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf_Let_sGo_;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_eHrn_;
  }
LAB_014d1efc:
  local_44 = 1;
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
LAB_014d1f28:
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}


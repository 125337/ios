// getPluginVCMapping @ 014bfdec

/* Function Stack Size: 0x10 bytes */

ID WCRefineSearchManager::getPluginVCMapping(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *local_4b8;
  undefined *local_4b0;
  undefined *local_4a8;
  undefined *local_4a0;
  SEL local_498;
  ID local_490;
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
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_498 = param_2;
  local_490 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_4a0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_pkcOldSettingsVC_026af560);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_4a0;
  local_4a8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_4a0,PTR_s_pkcLetsGoVC_026af568);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_38 = &cf_QBXwzqnbgtkquptgugw;
  local_30 = &cf_CUEizyi;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_4b0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_arrayWithArray__0269eab8);
  _objc_retainAutoreleasedReturnValue();
  local_4b8 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (local_4a8 != (undefined *)0x0) {
    puVar1 = local_4a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_4a8,PTR_s_length_0269cca0);
    if (puVar1 != (undefined *)0x0) {
      puVar1 = local_4b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_4b8,PTR_s_containsObject__0269cbb8,local_4a8);
      if (((ulong)puVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_4b8,PTR_s_addObject__0269d180,local_4a8);
      }
    }
  }
  if (local_4b0 != (undefined *)0x0) {
    puVar1 = local_4b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_4b0,PTR_s_length_0269cca0);
    if (puVar1 != (undefined *)0x0) {
      puVar1 = local_4b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_4b8,PTR_s_containsObject__0269cbb8,local_4b0);
      if (((ulong)puVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_4b8,PTR_s_addObject__0269d180,local_4b0);
      }
    }
  }
  local_118 = &cf__On_;
  local_148 = &cf_SettingMyProfileViewController;
  local_140 = &cf_SettingMyAccountInfoViewController;
  local_138 = &cf_SettingNotificationViewController;
  local_130 = &cf_SettingGeneralViewController;
  local_128 = &cf_SettingPrivateConfigViewController;
  local_120 = &cf_MMShowHelpViewController;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_148);
  _objc_retainAutoreleasedReturnValue();
  local_110 = &cf__ORKb;
  local_150 = &cf_MiYouSettingViewController;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_a8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_150);
  _objc_retainAutoreleasedReturnValue();
  local_108 = &cf_i_yRKb;
  local_158 = &cf_WCPLSettingViewController;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_a0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_158,1)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_100 = &cf__OX__;
  local_198 = &cf_WCEnhanceSettingViewController;
  local_190 = &cf_WCEhanceViewController;
  local_188 = &cf_WCUIBeautifyController;
  local_180 = &cf_WCCustomNameController;
  local_178 = &cf_WCHideToolController;
  local_170 = &cf_WCVersionFakeController;
  local_168 = &cf_WCEnhanceToolController;
  local_160 = &cf_WCAboutController;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_98 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_198,8)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_f8 = &cf_Zb;
  local_1a0 = &cf_BNHelperSettingController;
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_90 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_1a0,1)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_f0 = &cf_eVRKb;
  local_1a8 = &cf_DouTuSettingViewController;
  puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_88 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_1a8,1)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_e8 = &cf_WCPulse;
  local_1b8 = &cf_WCPulseSettingViewController;
  local_1b0 = &cf_WCPulseSpecialFeaturesViewController;
  puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_80 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_1b8,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_e0 = &cf__vRKb;
  local_1e8 = &cf_TheMessageController;
  local_1e0 = &cf_TheVoiceController;
  local_1d8 = &cf_TheTimeLineController;
  local_1d0 = &cf_TheGroupController;
  local_1c8 = &cf_TheSpecialController;
  local_1c0 = &cf_DisableWeChatController;
  puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_78 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_1e8,6)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_d8 = &cf__OQS;
  local_218 = &cf_WCPureExtensionDisableSettingsController;
  local_210 = &cf_WCPureExtensionEnableSettingsController;
  local_208 = &cf_WCPureExtensionCssSettingsController;
  local_200 = &cf_WCPureExtensionVoiceSettingsController;
  local_1f8 = &cf_WCPureExtensionReveiverSettingsController;
  local_1f0 = &cf_WCPureExtensionEmojiSettingsController;
  puVar9 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_70 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_218,6)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_d0 = &cf__P_RKb;
  local_250 = &cf_WeChatTweakEnableSettingsController;
  local_248 = &cf_WeChatTweakVoiceSettingsController;
  local_240 = &cf_WeChatTweakRedEnvelopesSettingsController;
  local_238 = &cf_WeChatTweakCssSettingsController;
  local_230 = &cf_WeChatTweakDisableSettingsController;
  local_228 = &cf_WeChatTweakReMsgSettingsController;
  local_220 = &cf_WeChatTweakAutoDownloadSettingsController;
  puVar10 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_68 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_250,7)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_c8 = &cf_PKC;
  local_58 = local_4b8;
  local_c0 = &cf__NvP_;
  local_2a0 = &cf_ThemeBoxSettingViewController;
  local_298 = &cf_ThemeBoxLayoutViewController;
  local_290 = &cf_ThemeBoxTitleViewController;
  local_288 = &cf_ThemeBoxProfileViewController;
  local_280 = &cf_ThemeBoxSessionViewController;
  local_278 = &cf_ThemeBoxTabBarViewController;
  local_270 = &cf_ThemeBoxColorViewController;
  local_268 = &cf_ThemeBoxAnimatedViewController;
  local_260 = &cf_ThemeBoxHeadViewController;
  local_258 = &cf_ThemeBoxHeadCardViewController;
  puVar11 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_60 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_2a0,10
            );
  _objc_retainAutoreleasedReturnValue();
  local_b8 = &cf_llvP_;
  local_2c8 = &cf_BubbleBoxViewController;
  local_2c0 = &cf_BubbleSettingViewController;
  local_2b8 = &cf_BubbleBoxColorViewController;
  local_2b0 = &cf_BubbleBoxHeadViewController;
  local_2a8 = &cf_BubbleBoxHeadCardViewController;
  puVar12 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_50 = puVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_2c8,5)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_b0 = &cf_WCRefine;
  local_488 = &cf_AccountDetailViewController;
  local_480 = &cf_WCRefineGeneralFunctionViewController;
  local_478 = &cf_WCRefineKeywordAlertViewController;
  local_470 = &cf_WCRefineAutoFunctionViewController;
  local_468 = &cf_WCRefineFriendRelationCheckViewController;
  local_460 = &cf_WCRefineDoNotDisturbSettingsViewController;
  local_458 = &cf_WCRefineChatRoomFunctionViewController;
  local_450 = &cf_WCRefineMessageSyncRuleViewController;
  local_448 = &cf_WCRefineScheduledTaskViewController;
  local_440 = &cf_WCRefineEmoticonFunctionViewController;
  local_438 = &cf_WCRefineEmoticonGroupManageViewController;
  local_430 = &cf_WCRefineVoiceFunctionViewController;
  local_428 = &cf_WCRefineVoicePackSettingsViewController;
  local_420 = &cf_WCRefineVoicePackManagerViewController;
  local_418 = &cf_ThemeExchangeViewController;
  local_410 = &cf_WCRefineLayoutFunctionViewController;
  local_408 = &cf_WCRefineGroupManagementViewController;
  local_400 = &cf_WCRefineTelegramGroupingViewController;
  local_3f8 = &cf_WCRefineTelegramGroupingTabsViewController;
  local_3f0 = &cf_WCRefineChatAttachmentViewController;
  local_3e8 = &cf_WCRefineLongPressMenuViewController;
  local_3e0 = &cf_WCRefineUICleanViewController;
  local_3d8 = &cf_WCRefineNavigationAvatarViewController;
  local_3d0 = &cf_WCRefineChatTimeViewController;
  local_3c8 = &cf_RepeatEnhanceViewController;
  local_3c0 = &cf_WCRefineFloatingTabBarSettingsViewController;
  local_3b8 = &cf_WCRefineFloatingTabBarButtonActionViewController;
  local_3b0 = &cf_WCRefineChatAvatarProfileCardViewController;
  local_3a8 = &cf_WCRefineProfileCardActionConfigViewController;
  local_3a0 = &cf_WCRefineUIBeautifyViewController;
  local_398 = &cf_WCRefineFontBeautifyViewController;
  local_390 = &cf_WCRefineFontConvertViewController;
  local_388 = &cf_WCRefineChatAttachmentBeautifyViewController;
  local_380 = &cf_WCRefineMessageBannerBeautifyViewController;
  local_378 = &cf_WCRefineProfileCardBeautifyViewController;
  local_370 = &cf_WCRefineCornerViewController;
  local_368 = &cf_WCRefineAvatarCornerBeautifyViewController;
  local_360 = &cf_WCRefineNameplateBeautifyViewController;
  local_358 = &cf_WCRefineHomeAvatarStripSettingsViewController;
  local_350 = &cf_WCRefineTouchTrailViewController;
  local_348 = &cf_WCRefineAssistFunctionViewController;
  local_340 = &cf_WCRefineMomentsViewController;
  local_338 = &cf_WCRefineTextReplaceViewController;
  local_330 = &cf_WCRefineTextPlaceholderViewController;
  local_328 = &cf_WCRefineWeChatHomeTextViewController;
  local_320 = &cf_WCRefineVersionController;
  local_318 = &cf_WCRefinePluginManagementViewController;
  local_310 = &cf_WCRefineRedEnvelopViewController;
  local_308 = &cf_WCRefineMusicCoverViewController;
  local_300 = &cf_WCRefineCustomAmountViewController;
  local_2f8 = &cf_WCRefineGlobalCornerSettingsViewController;
  local_2f0 = &cf_WCRefinePluginTopViewController;
  local_2e8 = &cf_WCRefineSmallSignalSettingsViewController;
  local_2e0 = &cf_WCRefineForwardToGroupSettingsViewController;
  local_2d8 = &cf_WCRefineEnhancedAdBlockViewController;
  local_2d0 = &cf_WCRefineToDoListSettingsViewController;
  puVar13 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_48 = puVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_488,
             0x38);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_40 = puVar13;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_a8,&local_118,0xe);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar13);
  (*(code *)PTR__objc_release_02578630)(puVar12);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_4b8);
  _objc_storeStrong(&local_4b0,0);
  _objc_storeStrong(&local_4a8,0);
  _objc_storeStrong(&local_4a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar14;
}


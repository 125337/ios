// chineseLabelForViewController: @ 0091e9d8

/* Function Stack Size: 0x18 bytes */

ID WCNavigationMonitor::chineseLabelForViewController_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_2b0;
  undefined *local_2a8;
  long local_2a0;
  undefined *local_298;
  undefined4 local_28c;
  long local_288;
  SEL local_280;
  undefined *local_278;
  undefined *local_270;
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
  local_288 = 0;
  local_280 = param_2;
  local_278 = (undefined *)param_1;
  _objc_storeStrong(&local_288,param_3);
  if (local_288 == 0) {
    local_270 = (undefined *)0x0;
    local_28c = 1;
  }
  else {
    puVar1 = local_278;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_278,PTR_s_navigationTitleForViewController_026aa4e8,local_288);
    _objc_retainAutoreleasedReturnValue();
    local_298 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
    puVar3 = local_298;
    if (puVar1 == (undefined *)0x0) {
      lVar2 = local_288;
      (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_268 = &cf_NewMainFrameViewController;
      local_148 = &cf__O;
      local_260 = &cf_BaseMsgContentViewController;
      local_140 = &cf_J_Yu;
      local_258 = &cf_ContactsViewController;
      local_138 = &cf_U_;
      local_250 = &cf_FindFriendEntryViewController;
      local_130 = &cf_Ss;
      local_248 = &cf_WCTimeLineViewController;
      local_128 = &cf_gSW;
      local_240 = &cf_MoreViewController;
      local_120 = &::cf_b;
      local_238 = &cf_NewSettingViewController;
      local_118 = &cf_n_;
      local_230 = &cf_SettingMyProfileViewController;
      local_110 = &cf__NNDe;
      local_228 = &cf_SettingMyAccountInfoViewController;
      local_108 = &cf__S_hQ;
      local_220 = &cf_PersonalInfoAndAuthorizationViewController;
      local_100 = &cf__NNOo_NCgP;
      local_218 = &cf_SettingNotificationViewController;
      local_f8 = &cf_w;
      local_210 = &cf_SettingGeneralUserInterfaceViewController;
      local_f0 = &cf_LubN>f_y;
      local_208 = &cf_NewStorageUsageViewController;
      local_e8 = &cf_X_Pzz;
      local_200 = &cf_SettingGeneralViewController;
      local_e0 = &cf__u;
      local_1f8 = &cf_SettingChatCellViewController;
      local_d8 = &cf_J_Y;
      local_1f0 = &cf_SettingVoipCellViewController;
      local_d0 = &::cf_format_s_;
      local_1e8 = &cf_SettingGeneralChatLogViewController;
      local_c8 = &cf_J_YU__t;
      local_1e0 = &cf_SettingOtherFunctionCellViewController;
      local_c0 = &cf_vQNR;
      local_1d8 = &cf_MMHelpAndFeedbackViewController;
      local_b8 = &cf___RNS;
      local_1d0 = &cf_MMShowHelpViewController;
      local_b0 = &cf__OOY_wQ;
      local_1c8 = &cf_SettingAboutMMViewController;
      local_a8 = &cf_sQN_O;
      local_1c0 = &cf_MyFavoritesViewController;
      local_a0 = &cf_6e;
      local_1b8 = &cf_WCPayMainViewControllerV2;
      local_98 = &cf__eN;
      local_1b0 = &cf_WCPluginsViewController;
      local_90 = &cf_cN6e_;
      local_1a8 = &cf_MiYouSettingViewController;
      local_88 = &cf__ORKb;
      local_1a0 = &cf_MiYouViewController;
      local_80 = &cf_RKb_Sn_;
      local_198 = &cf_WCRefineRootViewController;
      local_78 = &cf_WCRefine;
      local_190 = &cf_ThemeExchangeViewController;
      local_70 = &cf__NQQbc;
      local_188 = &cf_NewHBALLSettingController;
      local_68 = &cf__vRKb;
      local_180 = &cf_WCPulseSettingViewController;
      local_60 = &cf_WCPulse;
      local_178 = &cf_WCPulseSpecialFeaturesViewController;
      local_58 = &::cf_W;
      local_170 = &cf_PJSettingViewController;
      local_50 = &cf_Mikoto;
      local_168 = &cf_WCEnhanceSettingViewController;
      local_48 = &cf__OX__;
      local_160 = &cf_ThemeBoxViewController;
      local_40 = &cf__NvP_;
      local_158 = &cf_BubbleBoxViewController;
      local_38 = &cf_llvP_;
      local_150 = &cf_xxuegaoSettingsViewController;
      local_30 = &cf___;
      puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_2a0 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_148,&local_268,0x24);
      _objc_retainAutoreleasedReturnValue();
      local_2a8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_objectForKeyedSubscript__0269d098,local_2a0);
      _objc_retainAutoreleasedReturnValue();
      local_2b0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
      puVar3 = local_2b0;
      if (puVar1 == (undefined *)0x0) {
        puVar3 = local_278;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_278,PTR_s_searchFriendlyNameForClassName__026aa4f0,local_2a0);
        _objc_retainAutoreleasedReturnValue();
        local_270 = puVar3;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_270 = puVar3;
      }
      local_28c = 1;
      _objc_storeStrong(&local_2b0);
      _objc_storeStrong(&local_2a8,0);
      _objc_storeStrong(&local_2a0,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_270 = puVar3;
      local_28c = 1;
    }
    _objc_storeStrong(&local_298,0);
  }
  _objc_storeStrong(&local_288,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_270;
}


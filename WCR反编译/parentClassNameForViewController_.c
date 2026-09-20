// parentClassNameForViewController: @ 0091f420

/* Function Stack Size: 0x18 bytes */

ID WCNavigationMonitor::parentClassNameForViewController_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_190;
  long local_188;
  undefined4 local_17c;
  long local_178;
  SEL local_170;
  ID local_168;
  undefined *local_160;
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
  local_178 = 0;
  local_170 = param_2;
  local_168 = param_1;
  _objc_storeStrong(&local_178,param_3);
  if (local_178 == 0) {
    local_160 = (undefined *)0x0;
    local_17c = 1;
  }
  else {
    lVar1 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_158 = &cf_BaseMsgContentViewController;
    local_c0 = &cf_NewMainFrameViewController;
    local_150 = &cf_WCTimeLineViewController;
    local_b8 = &cf_FindFriendEntryViewController;
    local_148 = &cf_NewSettingViewController;
    local_b0 = &cf_MoreViewController;
    local_140 = &cf_SettingMyProfileViewController;
    local_a8 = &cf_NewSettingViewController;
    local_138 = &cf_SettingGeneralViewController;
    local_a0 = &cf_NewSettingViewController;
    local_130 = &cf_MyFavoritesViewController;
    local_98 = &cf_MoreViewController;
    local_128 = &cf_WCPayMainViewControllerV2;
    local_90 = &cf_MoreViewController;
    local_120 = &cf_WCPluginsViewController;
    local_88 = &cf_MoreViewController;
    local_118 = &cf_MiYouSettingViewController;
    local_80 = &cf_WCPluginsViewController;
    local_110 = &cf_MiYouViewController;
    local_78 = &cf_MiYouSettingViewController;
    local_108 = &cf_WCRefineRootViewController;
    local_70 = &cf_WCPluginsViewController;
    local_100 = &cf_ThemeExchangeViewController;
    local_68 = &cf_WCRefineRootViewController;
    local_f8 = &cf_NewHBALLSettingController;
    local_60 = &cf_WCPluginsViewController;
    local_f0 = &cf_WCPulseSettingViewController;
    local_58 = &cf_WCPluginsViewController;
    local_e8 = &cf_WCPulseSpecialFeaturesViewController;
    local_50 = &cf_WCPluginsViewController;
    local_e0 = &cf_PJSettingViewController;
    local_48 = &cf_WCPluginsViewController;
    local_d8 = &cf_WCEnhanceSettingViewController;
    local_40 = &cf_WCPluginsViewController;
    local_d0 = &cf_ThemeBoxViewController;
    local_38 = &cf_WCPluginsViewController;
    local_c8 = &cf_xxuegaoSettingsViewController;
    local_30 = &cf_WCPluginsViewController;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_188 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,&local_158,0x13);
    _objc_retainAutoreleasedReturnValue();
    local_190 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_objectForKeyedSubscript__0269d098,local_188);
    _objc_retainAutoreleasedReturnValue();
    local_17c = 1;
    local_160 = puVar2;
    _objc_storeStrong(&local_190);
    _objc_storeStrong(&local_188,0);
  }
  _objc_storeStrong(&local_178,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_160;
}


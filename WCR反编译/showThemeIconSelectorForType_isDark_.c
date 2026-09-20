// showThemeIconSelectorForType:isDark: @ 016d8dc8

/* Function Stack Size: 0x1c bytes */

void RepeatEnhanceViewController::showThemeIconSelectorForType_isDark_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  undefined *local_40;
  undefined *local_38;
  byte local_29;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  puVar1 = PTR_RepeatThemeIconSelectorViewController_026ceed0;
  _objc_alloc_init();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setIconType__026b3010,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setIsDark__026b3018,local_29 & 1);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setDelegate__026ca910,local_18);
  puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_presentViewController_animated_c_0269d2b0,puVar1,1,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}


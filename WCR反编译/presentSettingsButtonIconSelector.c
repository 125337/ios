// presentSettingsButtonIconSelector @ 01c88df4

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginContainerSettingsViewController::presentSettingsButtonIconSelector
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_RepeatThemeIconSelectorViewController_026ceed0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc_init();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setIconType__026b3010,&cf_PluginHub);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setIsDark__026b3018,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCustomTitle__026b7050,&cf_bcVh);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAllowsAlbumPick__026b7058,1);
  puVar1 = PTR_WCRefinePluginIconCatalog_026ce4e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_resolvedIconForItemID__026aecd8,
             &cf_hub_settings);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCurrentIconValue__026b32a8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDelegate__026ca910,local_18);
  puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_presentViewController_animated_c_0269d2b0,puVar1,1);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}


// beginPickIcon @ 01c9e428

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginIconCustomizationViewController::beginPickIcon(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_48;
  ID local_40;
  undefined *local_38;
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingItemID_026bfbd8);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  if (param_1 == 0) {
    local_2c = 1;
    goto LAB_01c9e730;
  }
  puVar1 = PTR_RepeatThemeIconSelectorViewController_026ceed0;
  _objc_alloc_init();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setIconType__026b3010,&cf_PluginIcon);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setIsDark__026b3018,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setCustomTitle__026b7050,&cf_bVh);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setAllowsAlbumPick__026b7058,1);
  puVar1 = PTR_WCRefinePluginIconCatalog_026ce4e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_resolvedIconForItemID__026aecd8,local_28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setCurrentIconValue__026b32a8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setDelegate__026ca910,local_18);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar2;
  if (IVar2 == 0) {
LAB_01c9e644:
    if (local_40 == 0) {
      puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_48 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setModalPresentationStyle__0269d2a8,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_48,1);
      _objc_storeStrong(&local_48,0);
      local_2c = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_pushViewController_animated__0269d590,local_38,1);
      local_2c = 1;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_respondsToSelector__026ca818,PTR_s_PushViewController_animated__0269cd40)
    ;
    if ((IVar2 & 1) == 0) goto LAB_01c9e644;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_PushViewController_animated__0269cd40,local_38,1);
    local_2c = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
LAB_01c9e730:
  _objc_storeStrong(&local_28,0);
  return;
}


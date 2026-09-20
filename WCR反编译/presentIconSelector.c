// presentIconSelector @ 01b7ba84

/* Function Stack Size: 0x10 bytes */

void WCRefineLongPressMenuViewController::presentIconSelector(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_58;
  cfstringStruct *local_48;
  ID local_40;
  undefined *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  IVar3 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingItemID_026bfbd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_itemWithID__026bfbc8);
  _objc_retainAutoreleasedReturnValue();
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if (local_28 == (cfstringStruct *)0x0) {
    local_2c = 1;
  }
  else {
    puVar4 = PTR_RepeatThemeIconSelectorViewController_026ceed0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_RepeatThemeIconSelectorViewController_026ceed0,PTR_s_new_0269d288);
    local_38 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setIconType__026b3010,&cf_LongPressMenu);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setIsDark__026b3018,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setCustomTitle__026b7050,&cf_b_OVh);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setAllowsAlbumPick__026b7058,1);
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingItemID_026bfbd8);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar3;
    _WCRLongPressMenuItemIsCustom();
    bVar2 = false;
    bVar1 = false;
    if ((IVar3 & 1) == 0) {
      local_90 = (cfstringStruct *)PTR_WCRefinePluginIconCatalog_026ce4e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_resolvedIconForItemID__026aecd8,
                 local_40);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_58 = local_90;
    }
    else {
      local_48 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_objectForKeyedSubscript__0269d098,_kWCRefinePluginIconIconKey);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_88 = local_48;
      if (local_48 == (cfstringStruct *)0x0) {
        local_88 = &::cf___;
      }
      local_90 = local_88;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setCurrentIconValue__026b32a8,local_90);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setDelegate__026ca910,local_18);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((IVar5 & 1) == 0) {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    else {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}


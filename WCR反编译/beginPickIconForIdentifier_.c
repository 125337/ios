// beginPickIconForIdentifier: @ 018da250

/* Function Stack Size: 0x18 bytes */

void WCRChatToolbarActionsViewController::beginPickIconForIdentifier_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_40;
  uint local_34;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_actionWithIdentifier__026b8260,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  if (IVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setPendingActionIdentifier__026b8268,local_28);
    puVar2 = PTR_RepeatThemeIconSelectorViewController_026ceed0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_RepeatThemeIconSelectorViewController_026ceed0,PTR_s_new_0269d288);
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setIconType__026b3010,&cf_ChatToolbar);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setIsDark__026b3018,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCustomTitle__026b7050,&cf_b_OVh);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setAllowsAlbumPick__026b7058,0);
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarIconKey);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCurrentIconValue__026b32a8);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDelegate__026ca910,local_18);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_storeStrong(&local_40,0);
  }
  local_34 = (uint)(IVar1 == 0);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}


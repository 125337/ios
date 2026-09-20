// pickWeChatIcon @ 01e15a38

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatButtonConfigViewController::pickWeChatIcon(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID local_68;
  ID local_48;
  undefined *local_40;
  undefined4 local_34;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingActionId_026c5d30);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_actionWithId__026c5d38,param_1);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  if (IVar1 == 0) {
    local_34 = 1;
  }
  else {
    puVar2 = PTR_RepeatThemeIconSelectorViewController_026ceed0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_RepeatThemeIconSelectorViewController_026ceed0,PTR_s_new_0269d288);
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setIconType__026b3010,&cf_ChatToolbar);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setIsDark__026b3018,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCustomTitle__026b7050,&cf_b_OVh);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setAllowsAlbumPick__026b7058,0);
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatCustomIconKey);
    _objc_retainAutoreleasedReturnValue();
    local_68 = IVar1;
    if (IVar1 == 0) {
      local_48 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatIconKey);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_48;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCurrentIconValue__026b32a8,local_68);
    if (IVar1 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDelegate__026ca910,local_18);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}


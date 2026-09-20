// handleURLThenIcon: @ 01e36688

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatURLSchemeViewController::handleURLThenIcon_
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
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textFromSender__026b1b18,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setActiveAlert__026b1ad0,0);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (IVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingURL__026c6340,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEditingIndex__026c62e8,DAT_0233a538);
    puVar2 = PTR_RepeatThemeIconSelectorViewController_026ceed0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_RepeatThemeIconSelectorViewController_026ceed0,PTR_s_new_0269d288);
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setIconType__026b3010,&cf_URLScheme);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setIsDark__026b3018,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCustomTitle__026b7050,&cf_bVh);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setAllowsAlbumPick__026b7058,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCurrentIconValue__026b32a8,DAT_0258c798)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDelegate__026ca910,local_18);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_U);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingTitle__026c6338,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEditingIndex__026c62e8,DAT_0233a538);
  }
  local_34 = (uint)(IVar1 == 0);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}


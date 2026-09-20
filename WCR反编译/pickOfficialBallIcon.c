// pickOfficialBallIcon @ 01d15198

/* Function Stack Size: 0x10 bytes */

void WCRefineQuickChatSettingsViewController::pickOfficialBallIcon(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_RepeatThemeIconSelectorViewController_026ceed0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_RepeatThemeIconSelectorViewController_026ceed0,PTR_s_new_0269d288);
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setIconType__026b3010,&cf_QuickChatBall);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setIsDark__026b3018,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCustomTitle__026b7050,&cf_b_eVh);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAllowsAlbumPick__026b7058,0);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCurrentIconValue__026b32a8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDelegate__026ca910,local_18);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if ((IVar4 & 1) == 0) {
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
  _objc_storeStrong(&local_28,0);
  return;
}


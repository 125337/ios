// pickOfficialIcon @ 01e2c224

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatSettingsViewController::pickOfficialIcon(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
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
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setIconType__026b3010,&cf_SuperFloatBall);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setIsDark__026b3018,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCustomTitle__026b7050,&cf_b_eVh);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAllowsAlbumPick__026b7058,0);
  puVar1 = PTR_WCRSuperFloatProfileStore_026cee48;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_ballIconId_026c6000);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCurrentIconValue__026b32a8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDelegate__026ca910,local_18);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_28,0);
  return;
}


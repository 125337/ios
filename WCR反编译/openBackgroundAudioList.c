// openBackgroundAudioList @ 01f67894

/* Function Stack Size: 0x10 bytes */

void WCRefineVoiceCloneSettingsViewController::openBackgroundAudioList(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRVoiceBackgroundListViewController_026cf7a8;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRVoiceBackgroundListViewController_026cf7a8,PTR_s_new_0269d288);
  IVar2 = local_18;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_28,0);
  return;
}


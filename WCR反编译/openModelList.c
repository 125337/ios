// openModelList @ 01f67034

/* Function Stack Size: 0x10 bytes */

void WCRefineVoiceCloneSettingsViewController::openModelList(ID param_1,SEL param_2)

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
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_voiceCloneVisibleForCurrentUser_026a9dd8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = PTR_WCRefineVoiceCloneListViewController_026cf7a0;
    _objc_alloc_init();
    IVar2 = local_18;
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_28,0);
  }
  return;
}


// openFunctionPageConfig @ 01891dc8

/* Function Stack Size: 0x10 bytes */

void WCRefineChatAvatarProfileCardViewController::openFunctionPageConfig(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_canUseProfileCardFeatureSettings_026b70f0);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showProfileCardFeatureRestricted_026b71b8);
  }
  else {
    puVar2 = PTR_WCRefineProfileCardActionConfigViewController_026ced98;
    _objc_alloc_init();
    IVar1 = local_18;
    local_28 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_storeStrong(&local_28,0);
  }
  return;
}


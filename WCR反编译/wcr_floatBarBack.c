// wcr_floatBarBack @ 01f9c4a0

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackSettingsViewController::wcr_floatBarBack(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_40;
  ID local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hostSheet_026c8f78);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_28 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_popViewControllerAnimated__0269ede0,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  IVar1 = local_30;
  local_40 = IVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = IVar1;
  _dispatch_async(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}


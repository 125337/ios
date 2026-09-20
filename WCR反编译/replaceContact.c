// replaceContact @ 00347fc0

/* Function Stack Size: 0x10 bytes */

void WCRefineHomeAvatarStripPickerBridge::replaceContact(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_host_0269dc50);
  _objc_retainAutoreleasedReturnValue();
  FUN_00348088(IVar1);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_releaseFromHost_026a2230);
  return;
}


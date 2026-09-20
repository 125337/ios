// clearCustomImage @ 003479dc

/* Function Stack Size: 0x10 bytes */

void WCRefineHomeAvatarStripPickerBridge::clearCustomImage(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_metaKey_026a2278);
  _objc_retainAutoreleasedReturnValue();
  FUN_00347a8c(IVar1,IVar2,0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_releaseFromHost_026a2230);
  return;
}


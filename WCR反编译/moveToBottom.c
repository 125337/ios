// moveToBottom @ 00348664

/* Function Stack Size: 0x10 bytes */

void WCRefineHomeAvatarStripPickerBridge::moveToBottom(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  FUN_00348378();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_releaseFromHost_026a2230);
  return;
}


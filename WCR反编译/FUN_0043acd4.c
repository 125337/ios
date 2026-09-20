// FUN_0043acd4 @ 0043acd4

void FUN_0043acd4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_ensureRootDirectoryExists__026a3c70,0);
  uVar2 = local_18;
  puVar1 = PTR_WCRefineLocalEmoticonLibraryViewController_026ce6c8;
  uVar3 = local_18;
  FUN_0043bbe4();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_presentFromHost_sendChatVC__026a3c78,uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  _objc_storeStrong(&local_18,0);
  return;
}


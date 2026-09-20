// FUN_007717b8 @ 007717b8

void FUN_007717b8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRefineSponsorSecureStore_026ce918;
  FUN_0076be80();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_loadRecordsForWxid__026a7e48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}


// FUN_00771864 @ 00771864

void FUN_00771864(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  
  puVar3 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar3,param_1);
  uVar2 = local_18;
  puVar1 = PTR_WCRefineSponsorSecureStore_026ce918;
  FUN_0076be80();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_saveRecords_forWxid__026a7e50,uVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_18,0);
  return;
}


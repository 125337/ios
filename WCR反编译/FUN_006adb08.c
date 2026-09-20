// FUN_006adb08 @ 006adb08

void FUN_006adb08(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
  uVar1 = local_18;
  (*DAT_028cbec0)(local_18,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_filteredArray__026a6640);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}


// FUN_01fd9510 @ 01fd9510

void FUN_01fd9510(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_0219cab8();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(param_2);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}


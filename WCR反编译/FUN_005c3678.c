// FUN_005c3678 @ 005c3678

void FUN_005c3678(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_0059d260(local_18,&cf_appInfo);
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  FUN_0059d260(uVar1,&cf_appID);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_005a0828();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}


// FUN_01533eb8 @ 01533eb8

void FUN_01533eb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_18;
  FUN_01566074(local_18,local_20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_01533bf8();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}


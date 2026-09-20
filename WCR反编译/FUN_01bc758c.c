// FUN_01bc758c @ 01bc758c

void FUN_01bc758c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_01be3454(local_18,&cf_username);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_01be33a4();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}


// FUN_00108db0 @ 00108db0

void FUN_00108db0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_00108c2c(local_18,&cf_m_nsUsrName);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_00106b4c();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}


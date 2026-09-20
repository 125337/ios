// FUN_00872aa4 @ 00872aa4

bool FUN_00872aa4(undefined8 param_1)

{
  long lVar1;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_00872d54();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  _objc_storeStrong(&local_18,0);
  return lVar1 != 0;
}


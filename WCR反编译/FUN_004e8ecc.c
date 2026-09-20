// FUN_004e8ecc @ 004e8ecc

void FUN_004e8ecc(long param_1)

{
  long local_20;
  long local_18;
  
  FUN_004e8b58();
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    FUN_004e3288(param_1,PTR_s_getSelfContact_0269da60);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


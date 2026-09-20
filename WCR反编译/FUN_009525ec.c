// FUN_009525ec @ 009525ec

void FUN_009525ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  uVar1 = local_18;
  FUN_0095ade0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}


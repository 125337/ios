// FUN_002e36c0 @ 002e36c0

void FUN_002e36c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_48 [3];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  FUN_002ec20c(local_18,local_28);
  FUN_002e71b4(local_18,0);
  uVar1 = local_18;
  (*DAT_028c9930)(local_18,local_20,local_28,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = uVar1;
  FUN_002e71b4(local_18,1);
  uVar1 = local_48[0];
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}


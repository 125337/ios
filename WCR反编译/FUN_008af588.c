// FUN_008af588 @ 008af588

void FUN_008af588(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  (*DAT_028cdf58)(local_18,local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  FUN_008b4e10();
  uVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}


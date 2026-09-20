// FUN_002e3928 @ 002e3928

void FUN_002e3928(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  local_20 = param_2;
  (*DAT_028c9940)(local_18,param_2);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  FUN_002e6bac(uVar1);
  uVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}


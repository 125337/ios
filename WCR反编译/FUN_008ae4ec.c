// FUN_008ae4ec @ 008ae4ec

void FUN_008ae4ec(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cded8)(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  FUN_008b4e10();
  uVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}


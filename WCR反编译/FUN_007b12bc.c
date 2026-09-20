// FUN_007b12bc @ 007b12bc

void FUN_007b12bc(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_007ac894();
  if ((uVar1 & 1) == 0) {
    (*DAT_028ccc28)(param_1,param_2,param_3 & 1);
  }
  else {
    (*DAT_028ccc28)(param_1,param_2,param_3 & 1);
    _objc_storeWeak(&DAT_028ccbe8,param_1);
    FUN_007b4dec(param_1);
    FUN_007ad034(param_1);
  }
  return;
}


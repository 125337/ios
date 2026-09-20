// FUN_007b1248 @ 007b1248

void FUN_007b1248(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_007ac894();
  if ((uVar1 & 1) == 0) {
    (*DAT_028ccc20)(param_1,param_2);
  }
  else {
    (*DAT_028ccc20)(param_1,param_2);
    _objc_storeWeak(&DAT_028ccbe8,param_1);
    FUN_007bd2a8(param_1);
  }
  return;
}


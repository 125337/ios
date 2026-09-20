// FUN_007b1d30 @ 007b1d30

void FUN_007b1d30(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_007ac894();
  if ((uVar1 & 1) == 0) {
    (*DAT_028ccc48)(param_1,param_2);
  }
  else {
    uVar1 = param_1;
    _WCRGroupingCanHandleReloadSessionsInPlace();
    if ((uVar1 & 1) == 0) {
      (*DAT_028ccc48)(param_1,param_2);
      FUN_007ad034(param_1);
    }
    else {
      FUN_007ad034(param_1);
    }
  }
  return;
}


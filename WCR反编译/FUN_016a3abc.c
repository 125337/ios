// FUN_016a3abc @ 016a3abc

void FUN_016a3abc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_016a9384();
  if ((param_1 & 1) == 0) {
    (*DAT_028e3da0)(local_18,local_20);
    uVar1 = local_18;
    FUN_016adc54();
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar1;
    if (uVar1 != 0) {
      FUN_016b3fe8(uVar1,1);
    }
    FUN_016b70e8(local_18,0,0);
    FUN_016b4420(local_18,0);
    FUN_016baeb8(local_18);
    _objc_storeStrong(&local_28,0);
  }
  else {
    (*DAT_028e3da0)(local_18,local_20);
  }
  return;
}


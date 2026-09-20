// FUN_003dfc78 @ 003dfc78

double FUN_003dfc78(undefined8 param_1)

{
  ulong uVar1;
  ulong local_28;
  ulong local_20;
  double local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_003dfd10();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  if (uVar1 == 0) {
    local_18 = 0.0;
  }
  else {
    FUN_003b6e7c();
    local_18 = (double)uVar1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}


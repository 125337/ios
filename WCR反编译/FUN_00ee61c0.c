// FUN_00ee61c0 @ 00ee61c0

void FUN_00ee61c0(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00ee649c();
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    FUN_00eec1e8();
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar1;
  }
  else {
    uVar1 = local_20;
    FUN_00eec108();
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


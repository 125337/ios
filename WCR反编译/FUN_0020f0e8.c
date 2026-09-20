// FUN_0020f0e8 @ 0020f0e8

void FUN_0020f0e8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_50 [3];
  long local_38;
  ulong local_30;
  int local_24;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  uVar1 = local_18;
  local_20 = param_1;
  if (local_18 == 0) {
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar1;
    for (local_38 = 0; local_38 < 3 && local_30 != 0; local_38 = local_38 + 1) {
      FUN_0020ee74(local_20,local_30);
      uVar1 = local_30;
      FUN_0020f600();
      _objc_retainAutoreleasedReturnValue();
      local_50[0] = uVar1;
      FUN_0020fa00(uVar1,local_30);
      if ((uVar1 & 1) == 0) {
        local_24 = 2;
      }
      else {
        _objc_storeStrong(&local_30,local_50[0]);
        local_24 = 0;
      }
      _objc_storeStrong(local_50,0);
      if (local_24 != 0) break;
    }
    _objc_storeStrong(&local_30,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}


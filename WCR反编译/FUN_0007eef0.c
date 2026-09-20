// FUN_0007eef0 @ 0007eef0

void FUN_0007eef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long local_58;
  long local_50 [3];
  undefined4 local_34;
  ulong local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  if ((local_20 == 0) || (local_28 == 0)) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    uVar1 = local_30;
    FUN_0007f214();
    if ((uVar1 & 1) == 0) {
      local_18 = 0;
      local_34 = 1;
    }
    else {
      lVar2 = local_28;
      FUN_0007f2f4(local_28,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_50[0] = lVar2;
      if (lVar2 == 0) {
        lVar2 = local_20;
        FUN_0007f50c();
        _objc_retainAutoreleasedReturnValue();
        local_58 = lVar2;
        if ((lVar2 == 0) || (lVar2 - local_20 == 0)) {
          local_18 = 0;
        }
        else {
          FUN_0007f6bc(lVar2 - local_20,local_28,lVar2);
          lVar2 = local_58;
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = lVar2;
        }
        local_34 = 1;
        _objc_storeStrong(&local_58,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_34 = 1;
        local_18 = lVar2;
      }
      _objc_storeStrong(local_50,0);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


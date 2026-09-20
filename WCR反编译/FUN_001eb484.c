// FUN_001eb484 @ 001eb484

void FUN_001eb484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar4;
  long *local_a8;
  long local_50;
  undefined4 local_48;
  long local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  long lVar3;
  
  local_30 = 0;
  local_28 = param_1;
  uStack_20 = param_2;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  if ((local_38 == 0) || (uVar2 = local_30, FUN_001eb64c(), (uVar2 & 1) == 0)) {
    lVar3 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar3;
    local_48 = 1;
  }
  else {
    lVar3 = local_38;
    FUN_001eb7ec();
    uVar1 = (uint)lVar3;
    FUN_001eb904();
    lVar3 = local_38;
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar3;
      local_48 = 1;
    }
    else {
      FUN_001eb9a0(local_28,uStack_20);
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        local_a8 = &local_38;
      }
      else {
        local_a8 = &local_50;
      }
      lVar4 = *local_a8;
      local_50 = lVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = 1;
      local_18 = lVar4;
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


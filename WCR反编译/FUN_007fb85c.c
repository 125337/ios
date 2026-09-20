// FUN_007fb85c @ 007fb85c

void FUN_007fb85c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long local_48;
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  puVar1 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar1,param_3);
  if ((local_28 == 0) || (FUN_007fb9b4(), ((ulong)puVar1 & 1) != 0)) {
    lVar3 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar3;
    local_34 = 1;
  }
  else {
    local_40 = 0;
    uVar2 = local_20;
    FUN_007fa7d0(local_20,&local_40);
    lVar3 = local_28;
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar3;
      local_34 = 1;
    }
    else {
      FUN_007fb160(local_28,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_48 = lVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_34 = 1;
      local_18 = lVar3;
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


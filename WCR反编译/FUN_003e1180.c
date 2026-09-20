// FUN_003e1180 @ 003e1180

void FUN_003e1180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 *local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulong *puVar2;
  
  puVar2 = &local_30;
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  local_38 = param_4;
  FUN_003e6038();
  if ((uVar1 & 1) == 0) {
    uVar3 = local_20;
    (*DAT_028ca390)(local_20,local_28,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_48 = 1;
    local_18 = uVar3;
  }
  else {
    uVar3 = local_20;
    (*DAT_028ca390)(local_20,local_28,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_30;
    local_50 = uVar3;
    FUN_003e60a8();
    if ((uVar4 & 1) != 0) {
      uVar5 = local_50;
      FUN_003e639c();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_50;
      local_50 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      FUN_003e3274(0x4014000000000000);
      if (local_38 != (undefined8 *)0x0) {
        *local_38 = 0;
      }
    }
    FUN_003e6744();
    uVar3 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar3;
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


// FUN_007aabf4 @ 007aabf4

void FUN_007aabf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_30;
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_007ab5f4();
  if ((uVar1 & 1) == 0) {
    uVar3 = local_20;
    (*DAT_028ccba0)(local_20,local_28,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar3;
  }
  else {
    local_18 = 0;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


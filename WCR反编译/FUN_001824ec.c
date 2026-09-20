// FUN_001824ec @ 001824ec

undefined8 FUN_001824ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_28;
  FUN_00182618();
  uVar2 = local_30;
  FUN_00182618();
  if ((uint)uVar1 < (uint)uVar2) {
    local_18 = 0xffffffffffffffff;
  }
  else if ((uint)uVar2 < (uint)uVar1) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}


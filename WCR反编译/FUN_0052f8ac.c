// FUN_0052f8ac @ 0052f8ac

undefined8 FUN_0052f8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_0052e30c();
  uVar2 = local_30;
  FUN_0052e30c();
  if ((uint)uVar2 < (uint)uVar1) {
    local_18 = 0xffffffffffffffff;
  }
  else if ((uint)uVar1 < (uint)uVar2) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}


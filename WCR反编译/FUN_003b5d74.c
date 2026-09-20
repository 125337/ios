// FUN_003b5d74 @ 003b5d74

undefined8 FUN_003b5d74(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (param_3 == 0) {
    uVar1 = local_20;
    FUN_003b5e28(local_20,local_28);
    local_18 = uVar1;
  }
  else {
    uVar1 = local_20;
    FUN_003b6348(local_20,local_28);
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}


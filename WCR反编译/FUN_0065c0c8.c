// FUN_0065c0c8 @ 0065c0c8

byte FUN_0065c0c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (param_3 + -1 == 0) {
    uVar1 = local_20;
    FUN_0065c464(local_20,local_28);
    local_11 = (byte)uVar1;
  }
  else {
    uVar1 = local_20;
    FUN_0065c9b4(param_3 + -1,local_20,local_28);
    local_11 = (byte)uVar1;
  }
  local_11 = local_11 & 1;
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


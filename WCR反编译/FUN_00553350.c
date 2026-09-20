// FUN_00553350 @ 00553350

byte FUN_00553350(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30,param_3);
  if (local_28 == 1) {
    uVar1 = local_20;
    FUN_00553958(0,local_20,local_30);
    local_11 = (byte)uVar1 & 1;
  }
  else if (local_28 == 2) {
    uVar1 = local_20;
    FUN_00553958(0,local_20,local_30);
    local_11 = ((byte)uVar1 ^ 1) & 1;
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


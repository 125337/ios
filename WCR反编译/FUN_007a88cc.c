// FUN_007a88cc @ 007a88cc

byte FUN_007a88cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  byte local_68;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((param_3 == 1) || (param_3 == 2)) {
    uVar1 = local_20;
    FUN_007a7bb4(0,local_20,local_28);
    local_68 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      FUN_007a7a3c(local_20,local_28);
      local_68 = (byte)uVar1;
    }
    local_11 = local_68 & 1;
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


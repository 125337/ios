// FUN_008cf4a8 @ 008cf4a8

byte FUN_008cf4a8(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_008ced34();
  if ((uVar1 & 1) == 0) {
    local_11 = false;
  }
  else {
    uVar1 = local_20;
    FUN_008cf5b8();
    local_11 = uVar1 != 0 && param_2 == uVar1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


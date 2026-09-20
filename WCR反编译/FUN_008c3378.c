// FUN_008c3378 @ 008c3378

byte FUN_008c3378(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_28 == 0) || (local_28 == local_20)) {
    local_11 = 0;
  }
  else if ((DAT_028ce015 & 1) == 0) {
    lVar1 = local_28;
    FUN_008c34dc();
    if (lVar1 == 0) {
      local_11 = 0;
    }
    else {
      lVar1 = local_28;
      FUN_008c35ac();
      local_11 = (byte)lVar1 & 1;
    }
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


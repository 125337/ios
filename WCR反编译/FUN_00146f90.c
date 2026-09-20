// FUN_00146f90 @ 00146f90

byte FUN_00146f90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte local_58;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((DAT_028c87b8 & 1) == 0) {
    if ((DAT_028c87b9 & 1) == 0) {
      if (DAT_028c87a8 == (code *)0x0) {
        local_58 = 0;
      }
      else {
        uVar1 = local_20;
        (*DAT_028c87a8)(local_20,param_2);
        local_58 = (byte)uVar1;
      }
      local_11 = local_58 & 1;
    }
    else {
      local_11 = 0;
    }
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


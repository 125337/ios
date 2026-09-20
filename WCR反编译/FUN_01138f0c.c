// FUN_01138f0c @ 01138f0c

byte FUN_01138f0c(undefined8 param_1)

{
  ulong uVar1;
  byte local_39;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0113a5d8();
  local_28 = uVar1;
  if (uVar1 == 1) {
    local_11 = 0;
    local_2c = 1;
  }
  else if (uVar1 - 2 == 0) {
    local_11 = 1;
    local_2c = 1;
  }
  else {
    FUN_01139c70(uVar1 - 2);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      FUN_011399d0(local_20,1,0);
      _objc_retainAutoreleasedReturnValue();
      local_39 = 0;
      local_38 = uVar1;
      FUN_0113ac50(uVar1,&local_39);
      local_11 = (byte)uVar1;
      if ((local_39 & 1) == 0) {
        uVar1 = local_20;
        FUN_0113b0b8(local_20,1,0);
        FUN_0113b598(local_38,(byte)uVar1 & 1);
        local_11 = (byte)uVar1 & 1;
      }
      local_11 = local_11 & 1;
      local_2c = 1;
      _objc_storeStrong(&local_38,0);
    }
    else {
      FUN_01139ce8();
      local_11 = 0;
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


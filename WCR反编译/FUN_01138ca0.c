// FUN_01138ca0 @ 01138ca0

byte FUN_01138ca0(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  byte local_49;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  undefined8 local_30;
  byte local_21;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  uVar1 = local_20;
  local_21 = param_2;
  FUN_0113a5d8();
  local_38 = uVar1;
  if (uVar1 == 1) {
    local_11 = 0;
    local_3c = 1;
  }
  else if (uVar1 == 2) {
    local_11 = 1;
    local_3c = 1;
  }
  else if ((uVar1 == 0) && ((local_21 & 1) == 0)) {
    local_11 = 1;
    local_3c = 1;
  }
  else {
    FUN_01139c70();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      FUN_011399d0(local_20,0,local_21 & 1);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 0;
      local_48 = uVar1;
      FUN_0113ac50(uVar1,&local_49);
      if ((local_49 & 1) == 0) {
        uVar1 = local_48;
        FUN_01139b54();
        if (((int)uVar1 == 0) || ((local_21 & 1) == 0)) {
          uVar1 = local_20;
          FUN_0113b0b8(local_20,0,local_21 & 1);
          FUN_0113b598(local_48,(byte)uVar1 & 1);
          local_11 = (byte)uVar1 & 1;
        }
        else {
          local_11 = 0;
        }
      }
      else {
        local_11 = (byte)uVar1 & 1;
      }
      local_3c = 1;
      _objc_storeStrong(&local_48,0);
    }
    else {
      FUN_01139ce8();
      local_11 = 0;
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


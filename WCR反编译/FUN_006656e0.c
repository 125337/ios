// FUN_006656e0 @ 006656e0

byte FUN_006656e0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48 [3];
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = param_2;
  if (local_20 == 0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    FUN_006527b0();
    if ((param_2 & 1) == 0) {
      local_11 = 0;
      local_2c = 1;
    }
    else {
      uVar1 = local_20;
      FUN_00662d08();
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = uVar1;
      FUN_00663124(uVar1,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar1;
      FUN_00665aa0();
      if ((uVar1 & 1) == 0) {
        uVar1 = local_28;
        FUN_0065ea04(local_28,local_50);
        if (uVar1 == 0) {
          uVar1 = local_48[0];
          FUN_00665d0c(0,local_48[0],local_20);
          _objc_retainAutoreleasedReturnValue();
          local_58 = uVar1;
          FUN_00661db0();
          _objc_retainAutoreleasedReturnValue();
          local_60 = uVar1;
          FUN_00665aa0();
          if ((uVar1 & 1) == 0) {
            uVar1 = local_28;
            FUN_0065ea04(local_28,local_60);
            if (uVar1 == 0) {
              uVar1 = local_48[0];
              FUN_0066604c(0,local_48[0],local_20);
              if ((uVar1 == 0) || (local_58 == 0)) {
                local_11 = 0;
              }
              else {
                uVar1 = local_58;
                FUN_0065c1d8(local_58,local_20);
                if ((uVar1 & 1) == 0) {
                  uVar1 = local_58;
                  FUN_0065c0c8(local_58,local_20,local_28);
                  local_11 = (byte)uVar1 & 1;
                }
                else {
                  local_11 = 0;
                }
              }
            }
            else {
              local_11 = 1;
            }
          }
          else {
            local_11 = 0;
          }
          local_2c = 1;
          _objc_storeStrong(&local_60);
          _objc_storeStrong(&local_58,0);
        }
        else {
          local_11 = 1;
          local_2c = 1;
        }
      }
      else {
        local_11 = 0;
        local_2c = 1;
      }
      _objc_storeStrong(&local_50);
      _objc_storeStrong(local_48,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


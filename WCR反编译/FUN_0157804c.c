// FUN_0157804c @ 0157804c

byte FUN_0157804c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_38;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (((local_20 == 0) || (uVar1 = local_20, FUN_01564574(), (uVar1 & 1) != 0)) ||
     (uVar1 = local_20, FUN_01565620(), (uVar1 & 1) != 0)) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    FUN_01533f64(local_20,PTR_s_isBrandContact_0269d9c8,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      FUN_01533f64(local_20,PTR_s_isMyContact_0269ef80,0);
      if ((uVar1 & 1) == 0) {
        FUN_0152b7ec();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_20;
        local_30 = uVar1;
        FUN_01528d34();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_30;
        local_38 = uVar2;
        FUN_015625e8(local_30,uVar2);
        local_11 = (byte)uVar1 & 1;
        local_24 = 1;
        _objc_storeStrong(&local_38);
        _objc_storeStrong(&local_30,0);
      }
      else {
        local_11 = 1;
        local_24 = 1;
      }
    }
    else {
      local_11 = 0;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


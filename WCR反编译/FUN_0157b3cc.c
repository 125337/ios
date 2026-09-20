// FUN_0157b3cc @ 0157b3cc

byte FUN_0157b3cc(ulong param_1)

{
  ulong uVar1;
  ulong local_20;
  byte local_11;
  
  FUN_01532090();
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  if ((param_1 == 0) || (FUN_01564574(), (param_1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    FUN_0157c1a8();
    if ((param_1 & 1) == 0) {
      FUN_0157b188();
      uVar1 = 0;
      FUN_0157c2cc();
      if ((uVar1 & 1) == 0) {
        FUN_0157b6ec(&cf__,5);
        local_11 = 1;
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


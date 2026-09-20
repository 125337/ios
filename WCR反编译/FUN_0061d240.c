// FUN_0061d240 @ 0061d240

ulong FUN_0061d240(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong local_80;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  int local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = param_2;
  if ((local_20 == 0) || (param_2 == 0)) {
    local_18 = 0;
  }
  else {
    local_38 = 0xffffffffffffffff;
    for (local_40 = 0; local_40 < local_28; local_40 = local_40 + 1) {
      uVar1 = local_20;
      FUN_0061abe0(local_40 - local_28,local_20,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar1;
      FUN_0061d3e0();
      if ((uVar1 & 1) == 0) {
        local_2c = 0;
      }
      else {
        local_38 = local_40;
        local_2c = 2;
      }
      _objc_storeStrong(&local_48,0);
      if (local_2c != 0) break;
    }
    if ((long)local_38 < 0) {
      local_80 = 1;
    }
    else {
      local_80 = local_38;
    }
    local_18 = local_80;
  }
  local_2c = 1;
  _objc_storeStrong(&local_20,0);
  return local_18;
}


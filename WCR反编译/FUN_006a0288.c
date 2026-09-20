// FUN_006a0288 @ 006a0288

void FUN_006a0288(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong local_70;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if ((local_28 == 0) || (uVar1 = local_28, FUN_006a3624(), (uVar1 & 1) == 0)) {
    (*DAT_028cbdf0)(local_18,local_20,local_28);
    local_38 = 1;
  }
  else {
    uVar1 = local_18;
    FUN_006a3894();
    if ((uVar1 & 1) == 0) {
      (*DAT_028cbdf0)(local_18,local_20,local_28);
      local_38 = 1;
    }
    else {
      uVar1 = local_28;
      FUN_006a3b78();
      _objc_retainAutoreleasedReturnValue();
      local_70 = uVar1;
      if (uVar1 == 0) {
        local_70 = local_28;
      }
      local_40 = uVar1;
      (*DAT_028cbdf0)(local_18,local_20,local_70);
      _objc_storeStrong(&local_40,0);
      local_38 = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}


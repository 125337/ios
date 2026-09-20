// FUN_0156b670 @ 0156b670

byte FUN_0156b670(undefined8 param_1)

{
  ulong uVar1;
  ulong local_38;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    FUN_01564574();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      FUN_01577a38();
      _objc_retainAutoreleasedReturnValue();
      local_11 = uVar1 != 0;
      local_38 = uVar1;
      if ((bool)local_11) {
        FUN_01556938(uVar1);
        FUN_01577e58(local_38,PTR_s_toggleCustomContactAvatar__026a0970);
      }
      local_24 = 1;
      _objc_storeStrong(&local_38,0);
    }
    else {
      uVar1 = local_20;
      FUN_01577c3c();
      _objc_retainAutoreleasedReturnValue();
      local_11 = uVar1 != 0;
      local_30 = uVar1;
      if ((bool)local_11) {
        FUN_01556938(uVar1);
        FUN_01577e58(local_30,PTR_s_toggleCustomGroupAvatar__026a09c0);
      }
      local_24 = 1;
      _objc_storeStrong(&local_30,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


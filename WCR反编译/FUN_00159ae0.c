// FUN_00159ae0 @ 00159ae0

byte FUN_00159ae0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  (*DAT_028c8848)(param_1,param_2);
  if ((param_1 & 1) == 0) {
    FUN_0015ab30();
    if ((param_1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      uVar1 = local_20;
      FUN_0015abcc();
      _objc_retainAutoreleasedReturnValue();
      local_30 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
      if ((uVar1 == 0) || (uVar1 = local_30, FUN_0015aee0(), (uVar1 & 1) != 0)) {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
      _objc_storeStrong(&local_30,0);
    }
  }
  else {
    local_11 = 1;
  }
  return local_11 & 1;
}


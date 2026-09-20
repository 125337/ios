// FUN_007a8620 @ 007a8620

byte FUN_007a8620(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong local_a0;
  ulong local_58;
  undefined4 local_4c;
  undefined1 local_45;
  byte local_31;
  long local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  local_30 = param_3;
  FUN_007a7a3c(local_20,local_28);
  local_31 = (byte)uVar1;
  uVar1 = local_20;
  FUN_007a7bb4(local_20,local_28);
  local_45 = (undefined1)uVar1;
  if (((local_31 & 1) == 0) && ((uVar1 & 1) == 0)) {
    local_11 = 0;
    local_4c = 1;
  }
  else if ((local_31 & 1) == 0) {
    if (local_30 == 0) {
      local_11 = 0;
      local_4c = 1;
    }
    else {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dataSource_0269e800);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = uVar1;
      if (uVar1 == 0) {
        local_a0 = local_20;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = local_a0;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_58;
      FUN_007a7d14(local_58,local_28);
      if ((local_30 < 0) || ((long)uVar1 <= local_30)) {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
      local_4c = 1;
      _objc_storeStrong(&local_58,0);
    }
  }
  else {
    local_11 = local_30 == 1 || local_30 == 2;
    local_4c = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


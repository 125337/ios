// FUN_001f18bc @ 001f18bc

void FUN_001f18bc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    uVar1 = local_18;
    FUN_001f1dd4();
    if (((uVar1 & 1) == 0) || (uVar1 = local_18, FUN_001ee184(), (uVar1 & 1) != 0)) {
      FUN_001edf0c(local_18,0);
      FUN_001f20f4(local_18);
      local_1c = 1;
    }
    else {
      uVar1 = local_18;
      FUN_001eddc8();
      if ((uVar1 & 1) == 0) {
        FUN_001edf0c(local_18,0);
        FUN_001f20f4(local_18);
        local_1c = 1;
      }
      else {
        FUN_001ee88c();
        uVar1 = local_18;
        FUN_001d5a74();
        local_38 = param_1;
        FUN_001ee984();
        local_40 = param_1;
        FUN_001eea64();
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar1;
        FUN_001f20f4(local_18);
        FUN_001eeedc(local_38,local_40,local_18,local_48);
        _objc_storeStrong(&local_48,0);
        local_1c = 0;
      }
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}


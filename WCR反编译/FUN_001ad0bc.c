// FUN_001ad0bc @ 001ad0bc

void FUN_001ad0bc(long param_1)

{
  ulong uVar1;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar1;
  if (uVar1 == 0) {
    local_2c = 1;
  }
  else {
    _objc_getAssociatedObject(uVar1,&DAT_028c8a8b);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    if (uVar1 == *(ulong *)(param_1 + 0x20)) {
      _objc_setAssociatedObject(0,local_28,&DAT_028c8a8b,0,1);
      uVar1 = local_28;
      FUN_001ad210();
      if ((uVar1 & 1) == 0) {
        local_2c = 1;
      }
      else {
        FUN_001acfa0(local_28);
        local_2c = 0;
      }
    }
    else {
      local_2c = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}


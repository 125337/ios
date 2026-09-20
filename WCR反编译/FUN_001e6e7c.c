// FUN_001e6e7c @ 001e6e7c

byte FUN_001e6e7c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long local_50 [3];
  long local_38;
  undefined4 local_2c;
  long *local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = param_2;
  if (local_20 == 0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    lVar2 = local_20;
    FUN_001e812c();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar2;
    if (lVar2 == 0) {
      local_11 = 0;
      local_2c = 1;
    }
    else {
      FUN_001e82e8();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_38;
      local_50[0] = lVar2;
      if (lVar2 == local_20) {
        if (local_28 != (long *)0x0) {
          _objc_retainAutorelease();
          *local_28 = lVar1;
        }
        local_11 = 1;
      }
      else {
        local_11 = 0;
      }
      local_2c = 1;
      _objc_storeStrong(local_50,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


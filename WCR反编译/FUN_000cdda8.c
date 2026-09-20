// FUN_000cdda8 @ 000cdda8

byte FUN_000cdda8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) || (local_28 == 0)) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    lVar1 = local_28;
    FUN_000cdecc();
    _objc_retainAutoreleasedReturnValue();
    local_11 = lVar1 == local_20;
    local_2c = 1;
    local_38 = lVar1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


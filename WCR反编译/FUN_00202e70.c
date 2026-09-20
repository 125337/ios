// FUN_00202e70 @ 00202e70

void FUN_00202e70(undefined8 param_1)

{
  long lVar1;
  long local_28;
  uint local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    lVar1 = local_18;
    FUN_00202f5c();
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar1;
    if (lVar1 != 0) {
      FUN_001fec40(lVar1);
    }
    local_1c = (uint)(lVar1 == 0);
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}


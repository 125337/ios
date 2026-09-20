// FUN_001f2c14 @ 001f2c14

void FUN_001f2c14(undefined8 param_1)

{
  long lVar1;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    lVar1 = local_18;
    FUN_001eddc8();
    FUN_001f2cbc(local_18,(uint)lVar1 & 1,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}


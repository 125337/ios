// FUN_0158c9b0 @ 0158c9b0

byte FUN_0158c9b0(undefined8 param_1,byte param_2)

{
  long lVar1;
  long local_30;
  byte local_21;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  local_21 = param_2;
  _objc_getAssociatedObject(local_20,DAT_028c5ed8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    local_11 = 0;
  }
  else {
    local_11 = (local_21 ^ 1) & 1;
  }
  local_30 = lVar1;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


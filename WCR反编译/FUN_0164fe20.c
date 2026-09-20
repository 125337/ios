// FUN_0164fe20 @ 0164fe20

void FUN_0164fe20(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 != 0) {
    _objc_setAssociatedObject(local_18,DAT_028c6090,local_20,1);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}


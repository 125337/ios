// FUN_0007f6bc @ 0007f6bc

void FUN_0007f6bc(undefined8 param_1,undefined8 param_2)

{
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 != 0) {
    if (local_20 == 0) {
      _objc_setAssociatedObject(local_18,DAT_026df7a0,0,1);
    }
    else {
      _objc_setAssociatedObject(local_18,DAT_026df7a0,local_20,1);
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}


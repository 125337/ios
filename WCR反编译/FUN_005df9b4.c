// FUN_005df9b4 @ 005df9b4

void FUN_005df9b4(undefined8 param_1,undefined8 param_2)

{
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 != 0) && (local_20 != 0)) {
    _objc_setAssociatedObject(local_18,DAT_026f4490,local_20,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}


// FUN_0008e020 @ 0008e020

void FUN_0008e020(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 != 0) {
    _objc_setAssociatedObject(local_18,DAT_026df780,local_20,1);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}


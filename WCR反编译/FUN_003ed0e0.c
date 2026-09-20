// FUN_003ed0e0 @ 003ed0e0

void FUN_003ed0e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  _objc_setAssociatedObject(local_18,DAT_026e02f8,local_20,3);
  _objc_setAssociatedObject(local_18,DAT_026e02f0,0,3);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}


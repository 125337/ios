// FUN_003ec670 @ 003ec670

void FUN_003ec670(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  _objc_setAssociatedObject(local_18,DAT_026e02f0,local_20,3);
  _objc_setAssociatedObject(local_18,DAT_026e02f8,0,3);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}


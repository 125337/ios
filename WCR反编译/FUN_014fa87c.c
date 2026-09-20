// FUN_014fa87c @ 014fa87c

void FUN_014fa87c(undefined8 param_1)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_18 = &DAT_028e3700;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02586158);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_30,0);
  return;
}


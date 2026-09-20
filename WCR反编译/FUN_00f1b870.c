// FUN_00f1b870 @ 00f1b870

void FUN_00f1b870(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e2c28;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02582868);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e2c20);
  return;
}


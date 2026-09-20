// FUN_00f71f90 @ 00f71f90

void FUN_00f71f90(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e2e30;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025835e8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e2e28);
  return;
}


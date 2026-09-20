// FUN_00502994 @ 00502994

void FUN_00502994(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028caf30;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257d768);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028caf28);
  return;
}


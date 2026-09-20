// FUN_0031b758 @ 0031b758

void FUN_0031b758(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c9d00;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257c078);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028c9cf8);
  return;
}


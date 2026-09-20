// FUN_003631d8 @ 003631d8

void FUN_003631d8(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028ca138;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257cac8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028ca130);
  return;
}


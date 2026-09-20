// FUN_001e65d0 @ 001e65d0

void FUN_001e65d0(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c9098;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257ad18);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028c9090);
  return;
}


// FUN_001e6644 @ 001e6644

void FUN_001e6644(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c90a8;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257ad38);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028c90a0);
  return;
}


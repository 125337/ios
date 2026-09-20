// FUN_001f01cc @ 001f01cc

void FUN_001f01cc(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c9118;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257ae28);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028c9110);
  return;
}


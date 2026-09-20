// FUN_0052a110 @ 0052a110

void FUN_0052a110(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cb218;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257dbc8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028cb210);
  return;
}


// FUN_002375bc @ 002375bc

void FUN_002375bc(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c9288;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257af78);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028c9280);
  return;
}


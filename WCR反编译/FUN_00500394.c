// FUN_00500394 @ 00500394

void FUN_00500394(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028caf40;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257d788);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028caf38);
  return;
}


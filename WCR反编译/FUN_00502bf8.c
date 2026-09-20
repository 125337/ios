// FUN_00502bf8 @ 00502bf8

void FUN_00502bf8(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028caf50;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257d7a8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028caf48);
  return;
}


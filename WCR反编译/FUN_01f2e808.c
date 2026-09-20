// FUN_01f2e808 @ 01f2e808

void FUN_01f2e808(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e48a0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258cc60);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e4898);
  return;
}


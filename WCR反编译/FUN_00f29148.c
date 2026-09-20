// FUN_00f29148 @ 00f29148

void FUN_00f29148(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e2ce0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025829c8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e2cd8);
  return;
}


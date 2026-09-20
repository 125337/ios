// FUN_007fe8cc @ 007fe8cc

void FUN_007fe8cc(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028ccf20;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025804d0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028ccf18);
  return;
}


// FUN_00efd87c @ 00efd87c

void FUN_00efd87c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e2b00;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025820c8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e2af8);
  return;
}


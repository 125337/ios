// FUN_00eef27c @ 00eef27c

void FUN_00eef27c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e2b08;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025820e8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e2af0);
  return;
}


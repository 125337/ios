// FUN_01ccb740 @ 01ccb740

void FUN_01ccb740(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e46e0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258c0a0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e46d8);
  return;
}


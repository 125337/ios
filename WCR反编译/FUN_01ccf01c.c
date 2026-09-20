// FUN_01ccf01c @ 01ccf01c

void FUN_01ccf01c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e46f0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258c0c0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e46e8);
  return;
}


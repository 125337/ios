// FUN_015794bc @ 015794bc

void FUN_015794bc(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e3a28;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025868c0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e3a20);
  return;
}


// FUN_00423120 @ 00423120

void FUN_00423120(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028ca7e0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257d2e8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028ca7d8);
  return;
}


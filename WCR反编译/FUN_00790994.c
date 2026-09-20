// FUN_00790994 @ 00790994

void FUN_00790994(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cca70;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257fdc8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028cca68);
  return;
}


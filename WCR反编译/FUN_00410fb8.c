// FUN_00410fb8 @ 00410fb8

void FUN_00410fb8(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028ca790;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257d1c8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028ca788);
  return;
}


// FUN_004eb4ac @ 004eb4ac

void FUN_004eb4ac(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cae10;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257d638);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028cae08);
  return;
}


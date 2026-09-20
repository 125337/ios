// FUN_004eb438 @ 004eb438

void FUN_004eb438(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cae00;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257d618);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028cadf8);
  return;
}


// FUN_014f4e90 @ 014f4e90

void FUN_014f4e90(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e3810;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025863b8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e3808);
  return;
}


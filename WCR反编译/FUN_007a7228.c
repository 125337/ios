// FUN_007a7228 @ 007a7228

void FUN_007a7228(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028ccb58;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257fe10);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028ccb50);
  return;
}


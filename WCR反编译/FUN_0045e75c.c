// FUN_0045e75c @ 0045e75c

void FUN_0045e75c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cab30;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257d488);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028cab28);
  return;
}


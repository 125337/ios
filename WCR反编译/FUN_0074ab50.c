// FUN_0074ab50 @ 0074ab50

void FUN_0074ab50(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cc7e8;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257f888);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028cc7e0);
  return;
}


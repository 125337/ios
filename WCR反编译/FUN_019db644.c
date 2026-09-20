// FUN_019db644 @ 019db644

void FUN_019db644(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e4468;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258aa90);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e4460);
  return;
}


// FUN_01bc93f8 @ 01bc93f8

void FUN_01bc93f8(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e45e8;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258ba00);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e45e0);
  return;
}


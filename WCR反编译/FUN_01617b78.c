// FUN_01617b78 @ 01617b78

void FUN_01617b78(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e3c38;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025877e0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e3c30);
  return;
}


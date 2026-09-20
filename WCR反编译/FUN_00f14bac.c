// FUN_00f14bac @ 00f14bac

void FUN_00f14bac(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e2c10;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02582828);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e2c08);
  return;
}


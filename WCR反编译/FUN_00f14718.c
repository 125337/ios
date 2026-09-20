// FUN_00f14718 @ 00f14718

void FUN_00f14718(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e2bf0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025827e8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e2be8);
  return;
}


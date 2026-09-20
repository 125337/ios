// FUN_016b7698 @ 016b7698

void FUN_016b7698(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e3ee0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02588110);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e3ed8);
  return;
}


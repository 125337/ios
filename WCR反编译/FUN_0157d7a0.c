// FUN_0157d7a0 @ 0157d7a0

void FUN_0157d7a0(void)

{
  undefined8 local_20;
  long *local_18;
  
  FUN_0157e588();
  local_18 = &DAT_028e3a30;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02586910);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e3938);
  return;
}


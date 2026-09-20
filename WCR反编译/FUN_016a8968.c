// FUN_016a8968 @ 016a8968

void FUN_016a8968(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e3e28;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02587ef0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e3e20);
  return;
}


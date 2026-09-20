// FUN_017ade24 @ 017ade24

void FUN_017ade24(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e41c0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02588db0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e41b8);
  return;
}


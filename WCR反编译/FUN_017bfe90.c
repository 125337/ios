// FUN_017bfe90 @ 017bfe90

void FUN_017bfe90(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e4260;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02589050);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e4258);
  return;
}


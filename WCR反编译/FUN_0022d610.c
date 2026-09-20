// FUN_0022d610 @ 0022d610

void FUN_0022d610(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c9260;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257af08);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028c9258);
  return;
}


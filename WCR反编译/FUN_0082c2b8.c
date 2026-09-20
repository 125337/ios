// FUN_0082c2b8 @ 0082c2b8

void FUN_0082c2b8(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cd228;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02580820);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028cd220);
  return;
}


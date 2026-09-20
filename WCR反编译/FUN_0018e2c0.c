// FUN_0018e2c0 @ 0018e2c0

void FUN_0018e2c0(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c8998;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257aa30);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028c8990);
  return;
}


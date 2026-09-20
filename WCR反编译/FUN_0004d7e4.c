// FUN_0004d7e4 @ 0004d7e4

void FUN_0004d7e4(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c7bb0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025795d0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028c7ba8);
  return;
}


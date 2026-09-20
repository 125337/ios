// FUN_0003df34 @ 0003df34

void FUN_0003df34(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c7b48;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025793b0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028c7b40);
  return;
}


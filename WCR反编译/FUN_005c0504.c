// FUN_005c0504 @ 005c0504

void FUN_005c0504(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cb770;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257e268);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028cb768);
  return;
}


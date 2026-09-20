// FUN_00132bd0 @ 00132bd0

void FUN_00132bd0(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c8680;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257a428);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}


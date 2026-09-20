// FUN_00550fb0 @ 00550fb0

void FUN_00550fb0(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cb418;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257dd68);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}


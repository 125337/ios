// FUN_00eab8c8 @ 00eab8c8

void FUN_00eab8c8(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e2960;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02581ac0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e2958);
  return;
}


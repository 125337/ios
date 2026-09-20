// FUN_01584904 @ 01584904

void FUN_01584904(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e3a90;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02586a40);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e3a88);
  return;
}


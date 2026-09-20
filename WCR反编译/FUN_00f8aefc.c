// FUN_00f8aefc @ 00f8aefc

void FUN_00f8aefc(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e2ed8;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025837b0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e2ed0);
  return;
}


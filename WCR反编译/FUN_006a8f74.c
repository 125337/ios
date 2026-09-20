// FUN_006a8f74 @ 006a8f74

void FUN_006a8f74(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cbeb0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257ecb8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028cbea8);
  return;
}


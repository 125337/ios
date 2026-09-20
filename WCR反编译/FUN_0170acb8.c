// FUN_0170acb8 @ 0170acb8

void FUN_0170acb8(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e3f30;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02588530);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e3f28);
  return;
}


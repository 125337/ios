// FUN_0107d664 @ 0107d664

void FUN_0107d664(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e32c8;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02584f10);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e32c0);
  return;
}


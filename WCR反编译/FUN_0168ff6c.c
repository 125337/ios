// FUN_0168ff6c @ 0168ff6c

void FUN_0168ff6c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e3d50;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02587e90);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e3d48);
  return;
}


// FUN_019bfb1c @ 019bfb1c

void FUN_019bfb1c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e4450;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258a9b8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e4448);
  return;
}


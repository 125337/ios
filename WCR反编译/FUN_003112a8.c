// FUN_003112a8 @ 003112a8

void FUN_003112a8(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c9bd0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257bf78);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028c9bc8);
  return;
}


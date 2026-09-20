// FUN_0074b32c @ 0074b32c

void FUN_0074b32c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cc808;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257f8c8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028cc800);
  return;
}


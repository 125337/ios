// FUN_00eab93c @ 00eab93c

void FUN_00eab93c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e2970;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02581ae0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e2968);
  return;
}


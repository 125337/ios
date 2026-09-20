// FUN_0042de7c @ 0042de7c

void FUN_0042de7c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028ca810;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257d368);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028ca808);
  return;
}


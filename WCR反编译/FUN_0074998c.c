// FUN_0074998c @ 0074998c

void FUN_0074998c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cc778;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257f788);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028cc770);
  return;
}


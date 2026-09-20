// FUN_0026a600 @ 0026a600

void FUN_0026a600(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c9540;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257b0e8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028c9538);
  return;
}


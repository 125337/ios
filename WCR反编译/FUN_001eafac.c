// FUN_001eafac @ 001eafac

void FUN_001eafac(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c90f0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257adb8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028c90e8);
  return;
}


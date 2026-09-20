// FUN_003c26ac @ 003c26ac

void FUN_003c26ac(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028ca1a0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257cc78);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028ca198);
  return;
}


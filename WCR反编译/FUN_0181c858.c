// FUN_0181c858 @ 0181c858

void FUN_0181c858(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e4280;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02589818);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e4278);
  return;
}


// FUN_00419bcc @ 00419bcc

void FUN_00419bcc(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028ca7c0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257d278);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028ca7b8);
  return;
}


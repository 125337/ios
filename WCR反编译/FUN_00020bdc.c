// FUN_00020bdc @ 00020bdc

void FUN_00020bdc(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c7a40;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02578f30);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028c7a38);
  return;
}


// FUN_00656f10 @ 00656f10

void FUN_00656f10(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cbc40;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257e6f8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028cbc38);
  return;
}


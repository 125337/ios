// FUN_01a821bc @ 01a821bc

void FUN_01a821bc(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e44e0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258afb0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e44d8);
  return;
}


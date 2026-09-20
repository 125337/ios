// FUN_01e183fc @ 01e183fc

void FUN_01e183fc(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e4780;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258c6b8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e4778);
  return;
}


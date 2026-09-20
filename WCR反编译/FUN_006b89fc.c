// FUN_006b89fc @ 006b89fc

void FUN_006b89fc(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cc1b0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257ed38);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028cc1a8);
  return;
}


// FUN_0076d0fc @ 0076d0fc

void FUN_0076d0fc(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cc930;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257fb88);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028cc928);
  return;
}


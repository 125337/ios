// FUN_01bd7a1c @ 01bd7a1c

void FUN_01bd7a1c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e4608;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258ba40);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e4600);
  return;
}


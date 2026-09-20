// FUN_00876f7c @ 00876f7c

void FUN_00876f7c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cd880;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02580990);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028cd878);
  return;
}


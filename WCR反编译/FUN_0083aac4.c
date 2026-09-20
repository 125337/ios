// FUN_0083aac4 @ 0083aac4

void FUN_0083aac4(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cd240;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02580840);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028cd238);
  return;
}


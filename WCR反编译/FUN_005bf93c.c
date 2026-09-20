// FUN_005bf93c @ 005bf93c

void FUN_005bf93c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cb760;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257e248);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028cb758);
  return;
}


// FUN_00036174 @ 00036174

void FUN_00036174(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c7b18;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025792f0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028c7b10);
  return;
}


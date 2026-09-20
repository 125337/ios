// FUN_003c57ac @ 003c57ac

void FUN_003c57ac(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028ca228;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257cd28);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028ca220);
  return;
}


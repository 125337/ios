// FUN_01e1e018 @ 01e1e018

void FUN_01e1e018(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e47c0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258c778);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e47b8);
  return;
}


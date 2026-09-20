// FUN_0002cdd4 @ 0002cdd4

void FUN_0002cdd4(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c7a70;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02579120);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028c7a68);
  return;
}


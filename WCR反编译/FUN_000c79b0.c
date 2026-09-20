// FUN_000c79b0 @ 000c79b0

void FUN_000c79b0(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c8268;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02579f30);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028c8260);
  return;
}


// FUN_01974994 @ 01974994

void FUN_01974994(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e4360;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258a3d8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e4358);
  return;
}


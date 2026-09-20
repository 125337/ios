// FUN_005bed60 @ 005bed60

void FUN_005bed60(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cb740;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257e208);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028cb738);
  return;
}


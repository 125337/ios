// FUN_0074a168 @ 0074a168

void FUN_0074a168(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cc788;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257f7a8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028cc780);
  return;
}


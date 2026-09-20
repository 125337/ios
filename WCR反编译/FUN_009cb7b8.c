// FUN_009cb7b8 @ 009cb7b8

void FUN_009cb7b8(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e2810;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025815b8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e2808);
  return;
}


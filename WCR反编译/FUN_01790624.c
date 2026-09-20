// FUN_01790624 @ 01790624

void FUN_01790624(void)

{
  long local_30;
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e4028;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02588bc0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  if (DAT_028e4020 == 0) {
    local_30 = DAT_028e4030;
  }
  else {
    local_30 = DAT_028e4020;
  }
  _objc_retainAutoreleaseReturnValue(local_30);
  return;
}


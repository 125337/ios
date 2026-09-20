// FUN_01814b68 @ 01814b68

void FUN_01814b68(void)

{
  char *local_30;
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e4270;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025897f8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  if (DAT_028e4268 == (char *)0x0) {
    local_30 = "WCTableViewSectionManager";
    _objc_getClass();
  }
  else {
    local_30 = DAT_028e4268;
  }
  _objc_retainAutoreleaseReturnValue(local_30);
  return;
}


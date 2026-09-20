// FUN_0187b5a8 @ 0187b5a8

void FUN_0187b5a8(void)

{
  char *local_30;
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e42e8;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02589b78);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  if (DAT_028e42e0 == (char *)0x0) {
    local_30 = "WCTableViewSectionManager";
    _objc_getClass();
  }
  else {
    local_30 = DAT_028e42e0;
  }
  _objc_retainAutoreleaseReturnValue(local_30);
  return;
}


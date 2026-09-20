// _WCRSideloadShareFixApplicationGroupIDs @ 0150670c

void _WCRSideloadShareFixApplicationGroupIDs(void)

{
  long local_30;
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e3830;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02586460);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  if (DAT_028e3828 == 0) {
    local_30 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_30 = DAT_028e3828;
  }
  _objc_retainAutoreleaseReturnValue(local_30);
  return;
}


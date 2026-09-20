// FUN_004f6720 @ 004f6720

void FUN_004f6720(void)

{
  long local_30;
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028caec8;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257d698);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  if (DAT_028caec0 == 0) {
    local_30 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_30 = DAT_028caec0;
  }
  _objc_retainAutoreleaseReturnValue(local_30);
  return;
}


// FUN_00677084 @ 00677084

void FUN_00677084(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cbcd0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257e828);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028cbca0);
  return;
}


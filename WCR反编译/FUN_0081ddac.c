// FUN_0081ddac @ 0081ddac

void FUN_0081ddac(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cd1c0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02580610);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028cd1b8);
  return;
}


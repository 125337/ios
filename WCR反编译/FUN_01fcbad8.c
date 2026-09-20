// FUN_01fcbad8 @ 01fcbad8

undefined8 FUN_01fcbad8(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e4970;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258d3b8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return DAT_028e4968;
}


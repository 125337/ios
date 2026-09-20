// FUN_006420b4 @ 006420b4

byte FUN_006420b4(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cba90;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257e668);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return DAT_028cba98 & 1;
}


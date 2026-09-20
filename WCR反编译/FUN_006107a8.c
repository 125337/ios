// FUN_006107a8 @ 006107a8

byte FUN_006107a8(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cb978;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257e538);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return DAT_026f44b8 & 1;
}


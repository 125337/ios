// FUN_0063a27c @ 0063a27c

byte FUN_0063a27c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cba68;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257e5e8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return DAT_026f44f8 & 1;
}


// FUN_0083791c @ 0083791c

undefined8 FUN_0083791c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cd218;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02580800);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return DAT_028cd210;
}


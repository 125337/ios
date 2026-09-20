// FUN_00f58890 @ 00f58890

void FUN_00f58890(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e2df8;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02583288);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}


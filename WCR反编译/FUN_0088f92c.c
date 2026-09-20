// FUN_0088f92c @ 0088f92c

void FUN_0088f92c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cdd28;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02580b30);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}


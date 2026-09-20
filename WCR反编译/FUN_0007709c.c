// FUN_0007709c @ 0007709c

void FUN_0007709c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c7f40;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02579a90);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}


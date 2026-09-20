// FUN_0011848c @ 0011848c

void FUN_0011848c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c85e8;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257a318);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}


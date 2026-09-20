// FUN_003e022c @ 003e022c

void FUN_003e022c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028ca3e0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257ce28);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}


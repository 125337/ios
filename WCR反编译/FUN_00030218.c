// FUN_00030218 @ 00030218

void FUN_00030218(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c7ae0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025791f0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}


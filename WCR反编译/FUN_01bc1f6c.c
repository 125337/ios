// FUN_01bc1f6c @ 01bc1f6c

void FUN_01bc1f6c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e45c0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258b6b0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}


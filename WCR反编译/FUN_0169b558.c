// FUN_0169b558 @ 0169b558

void FUN_0169b558(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e3e48;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02587f70);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}


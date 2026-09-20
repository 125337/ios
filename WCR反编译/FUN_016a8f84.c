// FUN_016a8f84 @ 016a8f84

void FUN_016a8f84(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e3e38;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02587f30);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}


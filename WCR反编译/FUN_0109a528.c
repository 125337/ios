// FUN_0109a528 @ 0109a528

long FUN_0109a528(undefined8 param_1)

{
  long local_30;
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e32d8;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02584f30);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  if (DAT_028e32d0 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = DAT_028e32d0;
    _dlsym(DAT_028e32d0,param_1);
  }
  return local_30;
}


// FUN_003fe19c @ 003fe19c

byte FUN_003fe19c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028ca688;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257d048);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return DAT_028ca680 & 1;
}


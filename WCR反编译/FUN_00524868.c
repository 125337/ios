// FUN_00524868 @ 00524868

void FUN_00524868(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cb140;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257db28);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  FUN_005279f0();
  return;
}


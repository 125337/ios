// FUN_006a4478 @ 006a4478

void FUN_006a4478(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cbe98;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257ebd8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}


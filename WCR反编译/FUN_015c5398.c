// FUN_015c5398 @ 015c5398

void FUN_015c5398(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e3b40;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02587148);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e3b38);
  return;
}


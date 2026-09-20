// FUN_01c74690 @ 01c74690

void FUN_01c74690(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e4670;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258bcf0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e4668);
  return;
}


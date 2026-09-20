// FUN_004052dc @ 004052dc

void FUN_004052dc(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028ca760;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257d168);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028ca758);
  return;
}


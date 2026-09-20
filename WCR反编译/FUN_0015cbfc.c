// FUN_0015cbfc @ 0015cbfc

void FUN_0015cbfc(undefined8 param_1)

{
  long lVar1;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
  }
  else {
    lVar1 = local_20;
    _objc_getAssociatedObject(local_20,DAT_026df938);
    _objc_retainAutoreleasedReturnValue();
    local_18 = lVar1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


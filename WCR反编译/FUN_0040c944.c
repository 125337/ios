// FUN_0040c944 @ 0040c944

void FUN_0040c944(undefined8 param_1)

{
  cfstringStruct *local_60;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  FUN_00404da4();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_sync();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (local_18 == (cfstringStruct *)0x0) {
    local_60 = &cf___;
  }
  else {
    local_60 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_60);
  return;
}


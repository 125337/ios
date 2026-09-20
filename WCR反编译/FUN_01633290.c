// FUN_01633290 @ 01633290

void FUN_01633290(void)

{
  undefined *puVar1;
  cfstringStruct *local_18;
  
  local_18 = &cf_RPScreenRecorder;
  _NSClassFromString();
  if (local_18 == (cfstringStruct *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSBundle_026ce418;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_bundleWithPath__026b1aa8,
               &cf__System_Library_Frameworks_ReplayKit_framework);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_18 = &cf_RPScreenRecorder;
    _NSClassFromString();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}


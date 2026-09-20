// FUN_007630c0 @ 007630c0

void FUN_007630c0(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_20;
  
  pcVar1 = &cf_Voice_PressToTalk;
  FUN_0076313c();
  _objc_retainAutoreleasedReturnValue();
  local_20 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_20 = &cf_cOO;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  _objc_autoreleaseReturnValue(local_20);
  return;
}


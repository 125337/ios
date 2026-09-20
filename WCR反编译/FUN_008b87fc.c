// FUN_008b87fc @ 008b87fc

void FUN_008b87fc(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  
  pcVar1 = (cfstringStruct *)0x9;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_40 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  _objc_autoreleaseReturnValue(local_40);
  return;
}


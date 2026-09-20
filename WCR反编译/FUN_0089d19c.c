// FUN_0089d19c @ 0089d19c

void FUN_0089d19c(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_48;
  cfstringStruct *local_18;
  
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSBundle_026ce418;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_18 == (cfstringStruct *)0x0) {
    local_48 = &cf_0_0_0;
  }
  else {
    local_48 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}


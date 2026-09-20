// FUN_0219cab8 @ 0219cab8

void FUN_0219cab8(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = &cf_wcr_;
  (*(code *)PTR__objc_msgSend_02578628)(&cf_wcr_,PTR_s_stringByAppendingString__0269d398);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_autoreleaseReturnValue(pcVar1);
  return;
}


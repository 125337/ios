// FUN_00ef5110 @ 00ef5110

void FUN_00ef5110(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_28;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == (cfstringStruct *)0x0) {
    local_28 = &cf___;
  }
  else {
    local_28 = local_18;
  }
  pcVar1 = &cf_wcr_builtin_;
  (*(code *)PTR__objc_msgSend_02578628)
            (&cf_wcr_builtin_,PTR_s_stringByAppendingString__0269d398,local_28);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(pcVar1);
  return;
}


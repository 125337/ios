// FUN_00265ff4 @ 00265ff4

void FUN_00265ff4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_18 = (cfstringStruct *)0x0;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf___);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf_http___);
      if ((((ulong)pcVar1 & 1) == 0) &&
         (pcVar1 = local_20,
         (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf_https___),
         ((ulong)pcVar1 & 1) == 0)) {
        local_18 = (cfstringStruct *)0x0;
      }
      else {
        pcVar1 = local_20;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
      }
    }
    else {
      pcVar1 = &cf_https_;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_https_,PTR_s_stringByAppendingString__0269d398,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


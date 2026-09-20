// FUN_009c1714 @ 009c1714

void FUN_009c1714(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
  }
  else {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_hasPrefix__0269d320,&cf___);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf_http___);
      if ((((ulong)pcVar2 & 1) == 0) &&
         (pcVar2 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf_https___),
         ((ulong)pcVar2 & 1) == 0)) {
        pcVar2 = &cf_https___;
        (*(code *)PTR__objc_msgSend_02578628)
                  (&cf_https___,PTR_s_stringByAppendingString__0269d398,local_28);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_28;
        local_28 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
    }
    else {
      pcVar2 = &cf_https_;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_https_,PTR_s_stringByAppendingString__0269d398,local_28);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_28;
      local_28 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar2 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


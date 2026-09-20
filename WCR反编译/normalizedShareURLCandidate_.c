// normalizedShareURLCandidate: @ 01016760

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::normalizedShareURLCandidate_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_18 = local_30;
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_34 = 1;
  }
  else {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf___);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_hasPrefix__0269d320,&cf_http___);
      if ((((ulong)pcVar1 & 1) == 0) &&
         (pcVar1 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf_https___),
         ((ulong)pcVar1 & 1) == 0)) {
        pcVar1 = &cf_https___;
        (*(code *)PTR__objc_msgSend_02578628)
                  (&cf_https___,PTR_s_stringByAppendingString__0269d398,local_30);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar1;
      }
      else {
        pcVar1 = local_30;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
      }
      local_34 = 1;
      _objc_storeStrong(&local_40,0);
    }
    else {
      pcVar1 = &cf_https_;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_https_,PTR_s_stringByAppendingString__0269d398,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_34 = 1;
      local_18 = pcVar1;
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}


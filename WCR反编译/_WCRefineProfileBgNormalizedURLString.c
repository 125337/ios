// _WCRefineProfileBgNormalizedURLString @ 01cefd60

void _WCRefineProfileBgNormalizedURLString(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_60;
  cfstringStruct *local_50;
  undefined4 local_48;
  bool local_41;
  cfstringStruct *local_40;
  byte local_31;
  undefined *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_60 = local_20;
  local_31 = 0;
  local_41 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_60 = &cf___;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_60;
  }
  local_41 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_60;
  if ((local_41 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_48 = 1;
  }
  else {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_hasPrefix__0269d320,&cf_http___);
    if ((((ulong)pcVar3 & 1) == 0) &&
       (pcVar3 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,&cf_https___),
       ((ulong)pcVar3 & 1) == 0)) {
      pcVar3 = &cf_https___;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_https___,PTR_s_stringByAppendingString__0269d398,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar3;
    }
    else {
      pcVar3 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar3;
    }
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


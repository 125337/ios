// _WCRefineProfileBgSafePathComponent @ 01cef358

void _WCRefineProfileBgSafePathComponent(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_58;
  cfstringStruct *local_40;
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
  local_58 = local_20;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_58 = &cf___;
  }
  else {
    local_30 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_58;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
    pcVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_28;
    local_28 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___,&cf__);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_28;
    local_28 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if ((cfstringStruct *)0x50 < pcVar3) {
      pcVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_substringToIndex__0269d6c0,0x50);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_28;
      local_28 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    pcVar3 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar3;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


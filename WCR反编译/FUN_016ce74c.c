// FUN_016ce74c @ 016ce74c

void FUN_016ce74c(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_80;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined4 local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_80 = &cf___;
  }
  else {
    local_80 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
  if (local_80 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_48 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf________<>_);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_38;
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_componentsSeparatedByCharactersI_0269d1a8,puVar1);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_componentsJoinedByString__0269d140,&cf__);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_whitespaceCharacterSet_0269d768);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___,&cf__);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_60;
    local_60 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if ((cfstringStruct *)0x50 < pcVar2) {
      pcVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_substringToIndex__0269d6c0,0x50);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_60;
      local_60 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar2 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
    local_48 = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}


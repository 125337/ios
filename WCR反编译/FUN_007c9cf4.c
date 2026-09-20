// FUN_007c9cf4 @ 007c9cf4

void FUN_007c9cf4(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_a0;
  cfstringStruct *local_38;
  undefined4 local_30;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar3 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     pcVar2 = local_20, pcVar3 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_30 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_space_s_,&cf___);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_38;
    local_38 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___,&cf___);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_38;
    local_38 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (local_38 == (cfstringStruct *)0x0) {
      local_a0 = &cf___;
    }
    else {
      local_a0 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_a0;
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


// resolvedSampleText @ 01a8797c

/* Function Stack Size: 0x10 bytes */

ID WCRefineGradientPalettePickerViewController::resolvedSampleText(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_38;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_previewText_026bd8c8);
  _objc_retainAutoreleasedReturnValue();
  local_38 = (cfstringStruct *)param_1;
  if ((cfstringStruct *)param_1 == (cfstringStruct *)0x0) {
    local_38 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_38;
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__N,&cf_12);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_28;
  local_28 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__G,&cf__YS);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_28;
  local_28 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__D,&cf_iPhone);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_28;
  local_28 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_28;
  local_28 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_28,&cf_2kpNBhT_R);
  }
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((cfstringStruct *)0x12 < pcVar3) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_substringToIndex__0269d6c0,0x12);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_28;
    local_28 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar3 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)pcVar3;
}


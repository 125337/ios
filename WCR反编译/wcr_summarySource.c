// wcr_summarySource @ 01dd9f80

/* Function Stack Size: 0x10 bytes */

ID WCRefineSessionStatsViewController::wcr_summarySource(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_c8;
  cfstringStruct *local_70;
  cfstringStruct *local_60;
  undefined4 local_54;
  undefined *local_50;
  bool local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  cfstringStruct *local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sessionResult_026c5440);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sampleText_026c5690);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar3 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_41 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_70 = &::cf___;
  }
  else {
    local_70 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sampleText_026c5690);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_70;
  }
  local_41 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_70;
  if ((local_41 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_20;
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isGroup_026af768);
  if (((ulong)pcVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendString__0269ccb0,&cf_yJSe_g7h_g);
    pcVar3 = local_38;
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (pcVar4 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendString__0269ccb0,&cf_lgS___ve_g);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendString__0269ccb0,local_38);
    }
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_copy_0269d150);
    local_54 = 1;
    local_18 = puVar2;
  }
  else {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_statsDigest_026c56b0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendString__0269ccb0,&cf__JSe_g7h_g);
    pcVar3 = local_38;
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (pcVar4 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendString__0269ccb0,&cf_lgS___ve_g);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendString__0269ccb0,local_38);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendString__0269ccb0,&::cf_newline_s_);
    puVar2 = local_50;
    pcVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_c8 = &::cf___;
    }
    else {
      local_c8 = local_60;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendString__0269ccb0,local_c8);
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_copy_0269d150);
    local_54 = 1;
    local_18 = puVar2;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}


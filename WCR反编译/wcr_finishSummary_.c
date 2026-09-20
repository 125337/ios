// wcr_finishSummary: @ 01dd7f94

/* Function Stack Size: 0x18 bytes */

ID WCRefineSessionStatsViewController::wcr_finishSummary_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  uint local_9c;
  uint local_7c;
  cfstringStruct *local_60;
  cfstringStruct *local_48;
  undefined *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_60 = local_28;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_60 = &::cf___;
  }
  else {
    local_38 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_60;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  while( true ) {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    local_7c = 0;
    if ((cfstringStruct *)0x2 < pcVar3) {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf____);
      local_7c = (uint)pcVar3;
    }
    pcVar3 = local_30;
    if ((local_7c & 1) == 0) break;
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_substringToIndex__0269d6c0,
               (undefined1 *)((long)&pcVar4[-1].field3_0x18 + 5));
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_30;
    local_30 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  while( true ) {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    local_9c = 0;
    if (pcVar3 != (cfstringStruct *)0x0) {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf__);
      local_9c = (uint)pcVar3;
    }
    pcVar3 = local_30;
    if ((local_9c & 1) == 0) break;
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_substringToIndex__0269d6c0,
               (undefined1 *)((long)&pcVar4[-1].field3_0x18 + 7));
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_30;
    local_30 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)pcVar3;
}


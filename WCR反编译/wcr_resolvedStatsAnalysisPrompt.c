// wcr_resolvedStatsAnalysisPrompt @ 01dd9754

/* Function Stack Size: 0x10 bytes */

ID WCRefineSessionStatsViewController::wcr_resolvedStatsAnalysisPrompt(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_98;
  cfstringStruct *local_88;
  cfstringStruct *local_70;
  uint local_68;
  bool local_61;
  cfstringStruct *local_60;
  byte local_51;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar2 = (cfstringStruct *)PTR_WCRefineAIStore_026ce048;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_20;
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isGroup_026af768);
  pcVar2 = local_30;
  if (((ulong)pcVar3 & 1) == 0) {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_chatUsr_026c5438);
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_88 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_effectiveSessionOptionsForID__0269cea0,local_88);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionPreset);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_98 = local_40;
    local_51 = 0;
    local_61 = false;
    bVar1 = ((ulong)pcVar2 & 1) == 0;
    if (bVar1) {
      local_98 = &::cf___;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_98;
    }
    local_61 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_98;
    if ((local_61 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    pcVar2 = local_48;
    if (pcVar3 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_68 = (uint)(pcVar3 != (cfstringStruct *)0x0);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    if (local_68 != 0) goto LAB_01dd9b30;
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_groupChatAnalysisEnabled_0269d010);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_resolvedGroupChatAnalysisPrompt_0269d210);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
    pcVar2 = local_70;
    if (pcVar3 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_68 = (uint)(pcVar3 != (cfstringStruct *)0x0);
    _objc_storeStrong(&local_70,0);
    if (local_68 != 0) goto LAB_01dd9b30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = &::cf___;
  local_68 = 1;
LAB_01dd9b30:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}


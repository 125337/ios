// sessionStatsResolvedTitleForPageID:mode: @ 0213420c

/* Function Stack Size: 0x20 bytes */

ID WCRefineConfig::sessionStatsResolvedTitleForPageID_mode_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_f0;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  byte local_71;
  undefined *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  uint local_4c;
  long_long local_48;
  ulong local_40;
  SEL local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar3 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_48 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     uVar3 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &::cf___;
    local_4c = 1;
    goto LAB_0213471c;
  }
  pcVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sessionStatsCardTitles_026ca418);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_58 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld___);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = local_58;
  local_60 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectForKeyedSubscript__0269d098,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_68 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
  pcVar4 = local_68;
  local_71 = 0;
  local_81 = 0;
  bVar1 = true;
  if (((ulong)pcVar5 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = pcVar4 == (cfstringStruct *)0x0;
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  if (bVar1) {
    local_91 = 0;
    if ((local_48 == 0) || (local_48 == 1)) {
      local_f0 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_91 = 1;
      local_90 = local_f0;
    }
    else {
      local_f0 = (cfstringStruct *)0x0;
    }
    _objc_storeStrong(&local_68,local_f0);
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
  }
  pcVar4 = local_68;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
  pcVar5 = local_68;
  if (((ulong)pcVar4 & 1) == 0) {
LAB_021346a4:
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_4c = 1;
    local_28 = pcVar4;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar5 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
    pcVar4 = local_a0;
    if (pcVar5 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar4;
    }
    local_4c = (uint)(pcVar5 != (cfstringStruct *)0x0);
    _objc_storeStrong(&local_a0,0);
    if (local_4c == 0) goto LAB_021346a4;
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
LAB_0213471c:
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}


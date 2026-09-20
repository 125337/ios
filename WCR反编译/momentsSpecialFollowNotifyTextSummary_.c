// momentsSpecialFollowNotifyTextSummary: @ 01c1b23c

/* Function Stack Size: 0x18 bytes */

ID WCRefineMomentsViewController::momentsSpecialFollowNotifyTextSummary_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_70;
  cfstringStruct *local_60;
  undefined4 local_58;
  bool local_51;
  cfstringStruct *local_50;
  byte local_41;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_70 = local_30;
  local_41 = 0;
  local_51 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_70 = &::cf___;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_70;
  }
  local_51 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_70;
  if ((local_51 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  pcVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  pcVar3 = local_38;
  if (pcVar4 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf__;
    local_58 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    local_18 = local_60;
    if (pcVar3 < (cfstringStruct *)0x11) {
      (*(code *)PTR__objc_retain_02578638)();
    }
    else {
      pcVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_substringToIndex__0269d6c0,0x10);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    local_58 = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}


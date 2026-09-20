// wcr_displayContentFromInput:preferAtAllPrefix:plainForRefer: @ 009d9634

/* Function Stack Size: 0x20 bytes */

ID WCRefineAnonymousAtHelper::wcr_displayContentFromInput_preferAtAllPrefix_plainForRefer_
             (ID param_1,SEL param_2,ID param_3,bool param_4,bool param_5)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_c0;
  cfstringStruct *local_98;
  undefined4 local_90;
  bool local_89;
  cfstringStruct *local_88;
  byte local_79;
  undefined *local_78;
  cfstringStruct *local_70;
  byte local_62;
  byte local_61;
  cfstringStruct *local_60;
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_60 = (cfstringStruct *)0x0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  pcVar3 = local_60;
  local_61 = (byte)param_4;
  local_62 = (byte)param_5;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_c0 = local_60;
  local_79 = 0;
  local_89 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_c0 = &::cf___;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_78 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_88 = local_c0;
  }
  local_89 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_c0;
  if ((local_89 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  pcVar3 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &::cf___;
    local_90 = 1;
  }
  else if ((local_62 & 1) == 0) {
    pcVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_containsString__0269d0b0,&::cf__);
    pcVar3 = local_70;
    if (((ulong)pcVar5 & 1) == 0) {
      if ((local_61 & 1) == 0) {
        pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____);
        _objc_retainAutoreleasedReturnValue();
        local_90 = 1;
        local_48 = pcVar3;
      }
      else {
        pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        local_90 = 1;
        local_48 = pcVar3;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = pcVar3;
      local_90 = 1;
    }
  }
  else {
    pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,&::cf__,0,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_70;
    local_98 = pcVar5;
    if (pcVar5 != (cfstringStruct *)0x0) {
      pcVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      local_38 = 0;
      local_30 = 0;
      local_40 = pcVar4;
      local_28 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_stringByReplacingMatchesInString_0269ef30,pcVar3,0,0,pcVar4,&::cf___);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_70;
      local_70 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    pcVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_hasPrefix__0269d320,&::cf__);
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar5 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_substringFromIndex__0269d120,1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_70;
      local_70 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
    }
    pcVar3 = local_70;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = pcVar3;
    local_90 = 1;
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_60,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_48;
}


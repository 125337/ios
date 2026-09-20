// wcr_parseSendCommand:isAtAll:body: @ 009dd038

/* Function Stack Size: 0x28 bytes */

bool WCRefineAnonymousAtHelper::wcr_parseSendCommand_isAtAll_body_
               (ID param_1,SEL param_2,ID param_3,bool *param_4,ID *param_5)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_e0;
  cfstringStruct *local_b8;
  cfstringStruct *local_98;
  byte local_89;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined4 local_78;
  bool local_71;
  cfstringStruct *local_70;
  byte local_61;
  undefined *local_60;
  cfstringStruct *local_58;
  ulong *local_50;
  bool *local_48;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  pcVar3 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_50 = param_5;
  local_48 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_b8 = local_40;
  local_61 = 0;
  local_71 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_b8 = &::cf___;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_b8;
  }
  local_71 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_b8;
  if ((local_71 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  pcVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_21 = 0;
    local_78 = 1;
    goto LAB_009dd49c;
  }
  pcVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_e0 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = local_e0;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  local_88 = (cfstringStruct *)0x0;
  local_89 = 0;
  pcVar3 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_hasPrefix__0269d320,&cf__wcratall);
  if (((ulong)pcVar3 & 1) == 0) {
    pcVar3 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_hasPrefix__0269d320,&cf__wcrat);
    if (((ulong)pcVar3 & 1) != 0) {
      local_88 = (cfstringStruct *)0x6;
      local_89 = 0;
      goto LAB_009dd328;
    }
    local_21 = 0;
    local_78 = 1;
  }
  else {
    local_88 = (cfstringStruct *)0x9;
    local_89 = 1;
LAB_009dd328:
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = &::cf___;
    pcVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (local_88 < pcVar3) {
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_substringFromIndex__0269d120,local_88);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_98;
      local_98 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar3 = local_98;
    if (local_48 != (bool *)0x0) {
      *(byte *)local_48 = local_89 & 1;
    }
    if (local_50 != (ulong *)0x0) {
      _objc_retainAutorelease();
      *local_50 = (ulong)pcVar3;
    }
    local_21 = 1;
    local_78 = 1;
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(&local_80,0);
LAB_009dd49c:
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}


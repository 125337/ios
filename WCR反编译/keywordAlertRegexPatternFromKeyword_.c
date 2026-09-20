// keywordAlertRegexPatternFromKeyword: @ 00f9c08c

/* Function Stack Size: 0x18 bytes */

ID WCRefineHelper::keywordAlertRegexPatternFromKeyword_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_a0;
  cfstringStruct *local_70;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 *local_18;
  
  local_50 = (cfstringStruct *)0x0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  pcVar3 = local_50;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_a0 = local_50;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_a0 = &::cf___;
  }
  else {
    local_60 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_a0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_a0;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_70);
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  pcVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (pcVar3 < (cfstringStruct *)0x3) {
    local_38 = (cfstringStruct *)0x0;
  }
  else {
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_characterAtIndex__0269fa18,0);
    pcVar3 = local_58;
    pcVar5 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_characterAtIndex__0269fa18,
               (undefined1 *)((long)&pcVar5[-1].field3_0x18 + 7));
    local_38 = local_58;
    if (((short)pcVar4 == 0x2f && (short)pcVar3 == 0x2f) ||
       ((short)pcVar4 == -0xf1 && (short)pcVar3 == -0xf1)) {
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      local_30 = (undefined1 *)((long)&pcVar3[-1].field3_0x18 + 6);
      local_28 = 1;
      local_20 = 1;
      local_18 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_substringWithRange__0269d138,1,local_30);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      local_38 = (cfstringStruct *)0x0;
    }
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_38;
}


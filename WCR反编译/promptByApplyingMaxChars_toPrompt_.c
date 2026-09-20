// promptByApplyingMaxChars:toPrompt: @ 009bf5d4

/* Function Stack Size: 0x20 bytes */

ID WCRefineAIStore::promptByApplyingMaxChars_toPrompt_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_60;
  undefined *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  pcVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    if (local_38 == (cfstringStruct *)0x0) {
      local_60 = &::cf___;
    }
    else {
      local_60 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_60;
    local_3c = 1;
  }
  else {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf__);
    pcVar2 = local_38;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (((ulong)pcVar3 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      local_3c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_clampedReplyMaxChars__0269d3b8,local_30);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf__ld);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_38;
      local_48 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,puVar1);
      _objc_retainAutoreleasedReturnValue();
      local_3c = 1;
      local_18 = pcVar2;
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}


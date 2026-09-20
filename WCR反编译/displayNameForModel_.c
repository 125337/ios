// displayNameForModel: @ 0158e160

/* Function Stack Size: 0x18 bytes */

ID WCRefineVoiceCloneHelper::displayNameForModel_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_98;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  undefined4 local_6c;
  cfstringStruct *local_68;
  undefined *local_60;
  bool local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  undefined *local_18;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_51 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_98 = &cf_r;
  }
  else {
    local_98 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_name)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_98;
  }
  local_51 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_98;
  if ((local_51 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar4 = local_48;
  puVar3 = PTR_s_rangeOfString__0269d838;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rangeOfString__0269d838,&cf__);
  pcVar2 = local_48;
  local_68 = pcVar4;
  local_60 = puVar3;
  if (pcVar4 == (cfstringStruct *)0x7fffffffffffffff) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
    local_6c = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_48;
    local_78 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_substringToIndex__0269d6c0,local_68);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_20 = local_68;
    local_18 = local_60;
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_substringFromIndex__0269d120,local_60 + (long)local_68);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar4 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
    pcVar2 = local_48;
    if (pcVar4 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
    }
    else {
      pcVar4 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,local_88);
      pcVar2 = local_80;
      if (((ulong)pcVar4 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar2;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar2;
      }
    }
    local_6c = 1;
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}


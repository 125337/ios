// defaultTitleForMessage: @ 01bb03f4

/* Function Stack Size: 0x18 bytes */

ID WCRefineMessageRepositoryViewController::defaultTitleForMessage_
             (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_78;
  cfstringStruct *local_60;
  cfstringStruct *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_60 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_60;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
  _objc_retainAutoreleasedReturnValue();
  local_78 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_78 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_78;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)pcVar1 & 1) == 0) ||
     (pcVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     pcVar1 == (cfstringStruct *)0x0)) {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_typeTitleForKey__026c0400,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_44 = 1;
    local_18 = pcVar1;
  }
  else {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf_format_s_);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf_newline_s_,
               &::cf_space_s_);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_50;
    local_50 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_creturn_s_,
               &::cf_space_s_);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_50;
    local_50 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_50;
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_50;
    local_50 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    while (pcVar1 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_containsString__0269d0b0,&::cf_space_s_),
          ((ulong)pcVar1 & 1) != 0) {
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf_space_s_,
                 &::cf_space_s_);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_50;
      local_50 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_typeTitleForKey__026c0400,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
    else {
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      local_18 = local_50;
      if (pcVar1 < (cfstringStruct *)0x25) {
        (*(code *)PTR__objc_retain_02578638)();
      }
      else {
        pcVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringToIndex__0269d6c0,0x24);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
    }
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}


// inputStringForEntry: @ 01c83f7c

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginHubCustomEntriesViewController::inputStringForEntry_
             (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_c0;
  bool local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_kind);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_storage);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_59 = ((ulong)pcVar2 & 1) == 0;
    if (local_59) {
      local_c0 = &::cf___;
    }
    else {
      local_c0 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_storage);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_c0;
    }
    local_59 = !local_59;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_c0;
    if (local_59) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if (pcVar1 == (cfstringStruct *)0x0) {
        pcVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf______);
        _objc_retainAutoreleasedReturnValue();
        local_28 = puVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      else {
        pcVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf_________);
        _objc_retainAutoreleasedReturnValue();
        local_28 = puVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
    }
    else {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf____wcr___);
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_version);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_controller);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf_________);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_44 = 1;
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}


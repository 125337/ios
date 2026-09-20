// FUN_01c91898 @ 01c91898

void FUN_01c91898(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_98;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_valueForKey__0269d128);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_text);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_28;
      local_28 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_performSelector__026ca7b8,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_28;
    local_28 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar1 = local_28;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  pcVar2 = local_28;
  if (((ulong)pcVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_98 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_98;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


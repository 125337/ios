// FUN_01cca0ec @ 01cca0ec

void FUN_01cca0ec(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_c8;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_58;
  byte local_49;
  cfstringStruct *local_48;
  byte local_39;
  undefined *local_38;
  cfstringStruct *local_30;
  int local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  if (local_20 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UITextField_026ce2a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITextField_026ce2a0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_performSelector__026ca7b8,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_58 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
        pcVar2 = local_58;
        if (((ulong)pcVar3 & 1) == 0) {
          local_24 = 0;
        }
        else {
          puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_c8 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_c8 = &cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = local_c8;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          local_24 = 1;
        }
        _objc_storeStrong(&local_58,0);
        if (local_24 != 0) goto LAB_01cca4fc;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
      local_24 = 1;
    }
    else {
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_30 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      pcVar2 = local_30;
      local_39 = 0;
      local_49 = 0;
      if (((ulong)pcVar3 & 1) == 0) {
        local_98 = &cf___;
      }
      else {
        puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        local_39 = 1;
        local_38 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
        _objc_retainAutoreleasedReturnValue();
        local_49 = 1;
        local_90 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_90 = &cf___;
        }
        local_98 = local_90;
        local_48 = pcVar2;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_98;
      if ((local_49 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_48);
      }
      if ((local_39 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_38);
      }
      local_24 = 1;
      _objc_storeStrong(&local_30,0);
    }
  }
LAB_01cca4fc:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


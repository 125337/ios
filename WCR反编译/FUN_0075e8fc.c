// FUN_0075e8fc @ 0075e8fc

void FUN_0075e8fc(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  uint local_f4;
  uint local_e4;
  cfstringStruct *local_e0;
  cfstringStruct *local_c8;
  uint local_8c;
  cfstringStruct *local_88;
  cfstringStruct *local_70;
  bool local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  pcVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_88 = (cfstringStruct *)0x0;
  }
  else {
    local_88 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  local_8c = 1;
  if (local_88 != (cfstringStruct *)0x0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_placeHolderLabel_026a7d60);
    local_8c = (uint)pcVar3 ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)(local_88);
  if ((local_8c & 1) == 0) {
    pcVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_placeHolderLabel_026a7d60);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    local_40 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    pcVar3 = local_40;
    if (((ulong)pcVar4 & 1) == 0) {
      local_34 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = pcVar3;
      pcVar3 = _WCRefineTextStyleSearchPlaceholder;
      FUN_0075ede8();
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_text)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_61 = false;
      bVar1 = ((ulong)pcVar4 & 1) == 0;
      if (bVar1) {
        local_c8 = &cf___;
      }
      else {
        local_c8 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
        _objc_retainAutoreleasedReturnValue();
        local_60 = local_c8;
      }
      local_61 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = local_c8;
      if ((local_61 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_e0 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = local_e0;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,&cf_d__);
      local_e4 = 1;
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,&cf_Search);
        local_e4 = (uint)pcVar3;
      }
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      local_f4 = 0;
      if (pcVar3 != (cfstringStruct *)0x0) {
        pcVar3 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,local_58);
        local_f4 = (uint)pcVar3;
      }
      if (((local_e4 & 1) == 0) && ((local_f4 & 1) == 0)) {
        local_34 = 1;
      }
      else {
        FUN_0075c464(local_28,PTR_s_setPlaceholder__0269e9c8,local_70);
        local_34 = 0;
      }
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  else {
    local_34 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}


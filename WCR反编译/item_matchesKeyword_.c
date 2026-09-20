// item:matchesKeyword: @ 019d09c8

/* Function Stack Size: 0x20 bytes */

bool WCRefineFontListViewController::item_matchesKeyword_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  byte local_cc;
  cfstringStruct *local_c8;
  cfstringStruct *local_b8;
  cfstringStruct *local_a8;
  cfstringStruct *local_98;
  cfstringStruct *local_88;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  long local_48;
  undefined4 local_3c;
  long local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 1;
    local_3c = 1;
  }
  else {
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_30;
    local_48 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_displayName);
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_88 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_88;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_postScriptName);
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_98 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_98;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_familyName);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_a8 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_a8;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_styleName);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_b8 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_b8;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_path)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_c8 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_c8 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(local_c8);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,local_48);
    local_cc = 1;
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsString__0269d0b0,local_48);
      local_cc = 1;
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsString__0269d0b0,local_48);
        local_cc = 1;
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar2 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_containsString__0269d0b0,local_48);
          local_cc = 1;
          if (((ulong)pcVar2 & 1) == 0) {
            pcVar2 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_containsString__0269d0b0,local_48);
            local_cc = (byte)pcVar2;
          }
        }
      }
    }
    local_11 = local_cc & 1;
    local_3c = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}


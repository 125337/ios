// openThemeRecommendURLString:title: @ 0175d184

/* Function Stack Size: 0x20 bytes */

void ThemeExchangeViewController::openThemeRecommendURLString_title_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  ID IVar5;
  cfstringStruct *local_d0;
  uint local_b4;
  cfstringStruct *local_a0;
  char *local_88;
  char *local_80;
  byte local_71;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_50;
  bool local_49;
  cfstringStruct *local_48;
  byte local_39;
  undefined *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  pcVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_a0 = local_28;
  local_39 = 0;
  local_49 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_a0 = &::cf___;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_a0;
  }
  local_49 = !bVar1;
  _objc_storeStrong(&local_28,local_a0);
  if ((local_49 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_cPc_gMn_);
    local_50 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 0;
    local_71 = 0;
    local_b4 = 1;
    local_58 = puVar2;
    if (puVar2 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_scheme_026a1dd8);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_b4 = (uint)puVar2 ^ 1;
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_b4 & 1) == 0) {
      pcVar4 = "MMWebViewController";
      _objc_getClass();
      local_80 = pcVar4;
      if (pcVar4 == (char *)0x0) {
        local_50 = 1;
      }
      else {
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_88 = pcVar4;
        if (pcVar4 != (char *)0x0) {
          pcVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_d0 = &cf_cP;
          }
          else {
            local_d0 = local_30;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_setValue_forKey__0269d300,local_d0,&cf_title);
          IVar5 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar5);
        }
        _objc_storeStrong(&local_88,0);
        local_50 = 0;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_cPceHe);
      local_50 = 1;
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}


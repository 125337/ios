// applyBubblePackNamed:showToast: @ 01fbdeec

/* Function Stack Size: 0x1c bytes */

void WCRefineWechatThemeManagerViewController::applyBubblePackNamed_showToast_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_e0;
  cfstringStruct *local_68;
  bool local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_38;
  byte local_29;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  if (local_28 == (cfstringStruct *)0x0) {
    local_68 = &::cf___;
  }
  else {
    local_68 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_68;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineWechatThemeStore_026ce6d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    FUN_01fba8c8();
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadThemes_026c9f60);
  puVar1 = PTR_WCRefineHelper_026ce000;
  if ((local_29 & 1) != 0) {
    if ((((byte)local_68 ^ 1) & 1) == 0) {
      pcVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      pcVar4 = &cf__eR_S_MRllS;
      if (pcVar3 == (cfstringStruct *)0x0) {
        pcVar4 = &cf_ll__N;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,pcVar4);
    }
    else {
      pcVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_e0 = &cf__SmUSrllSll_N;
      }
      else {
        local_e0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_ll_9e_u0_);
        _objc_retainAutoreleasedReturnValue();
        local_48 = local_e0;
      }
      local_49 = pcVar4 != (cfstringStruct *)0x0;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_e0);
      if (local_49) {
        (*(code *)PTR__objc_release_02578630)(local_48);
      }
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}


// migrateFontSelectionPathIfNeeded @ 019d8e70

/* Function Stack Size: 0x10 bytes */

void WCRefineFontBeautifyViewController::migrateFontSelectionPathIfNeeded(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  cfstringStruct *local_70;
  cfstringStruct *local_58;
  ID local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_fontBeautifyPostScriptName_026a1d38);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_58 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_58;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_fontBeautifyFontPath_026a1d30);
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_70 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_70;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_3c = 1;
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_resolvedFontPathForPostScriptNam_026baed8,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
    if (IVar2 == 0) {
      local_3c = 1;
    }
    else {
      IVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_38);
      if ((IVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_setFontBeautifyFontPath__026b2da0,local_48);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
        local_3c = 0;
      }
      else {
        local_3c = 1;
      }
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}


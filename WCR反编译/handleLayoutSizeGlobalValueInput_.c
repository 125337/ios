// handleLayoutSizeGlobalValueInput: @ 01b58f7c

/* Function Stack Size: 0x18 bytes */

void WCRefineLayoutFunctionViewController::handleLayoutSizeGlobalValueInput_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_58;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_58 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_58;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&::cf_0),
     ((ulong)pcVar1 & 1) != 0)) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__n_hQ______Y_);
  }
  else {
    pcVar1 = local_38;
    _WCRLayoutSizeValueStringIsValid();
    if (((ulong)pcVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_eQ);
      local_3c = 1;
      goto LAB_01b592a4;
    }
    pcVar1 = local_38;
    _WCRLayoutSizeSanitizedValueString();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_WCRefineConfig_026cdf58;
    local_48 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_hQ______Y__OX_);
    _objc_storeStrong(&local_48,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_promptLayoutSizeRefresh_026bf758);
  local_3c = 0;
LAB_01b592a4:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}


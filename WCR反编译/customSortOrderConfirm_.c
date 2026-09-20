// customSortOrderConfirm: @ 01ca550c

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginManagementViewController::customSortOrderConfirm_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_b8;
  cfstringStruct *local_60 [3];
  cfstringStruct *local_48;
  int local_3c;
  undefined8 local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAlert_026aa350);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_3c = 1;
  }
  else {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_retain_02578638)();
    local_60[0] = &::cf___;
    if ((local_48 != (cfstringStruct *)0x0) &&
       (pcVar1 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_b8 = &::cf___;
      }
      _objc_storeStrong(local_60,local_b8);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_60[0];
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_60[0];
    local_60[0] = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar1 = local_60[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_showErrorAlert_message__026c2da8,&::cf_eQ,&cf_eQgHevc_MOn_);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCurrentAlert__026aa348,0);
      local_3c = 1;
    }
    else {
      pcVar1 = local_60[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_integerValue_026ca750);
      if ((long)pcVar1 < 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_showErrorAlert_message__026c2da8,&::cf_eQ,&cf_c_MOn_N_N0);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCurrentAlert__026aa348,0);
        local_3c = 1;
      }
      else {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCurrentAlert__026aa348,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_notifyEntrySettingsChanged_026c2e30);
        local_3c = 0;
      }
    }
    _objc_storeStrong(local_60);
    _objc_storeStrong(&local_48,0);
    if (local_3c == 0) {
      local_3c = 0;
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}


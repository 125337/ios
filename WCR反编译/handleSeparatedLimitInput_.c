// handleSeparatedLimitInput: @ 01d12bac

/* Function Stack Size: 0x18 bytes */

void WCRefineQuickChatSettingsViewController::handleSeparatedLimitInput_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_80;
  undefined *local_50;
  undefined4 local_44;
  long local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textFromSender__026b1b18,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWcr_metricAlert__026ba928,0);
  if (local_30 == (cfstringStruct *)0x0) {
    local_80 = &::cf___;
  }
  else {
    local_80 = local_30;
  }
  puVar2 = PTR__OBJC_CLASS___NSScanner_026ce368;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSScanner_026ce368,PTR_s_scannerWithString__0269fa30,local_80);
  _objc_retainAutoreleasedReturnValue();
  local_40 = 0;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_scanInteger__026a4fc8,&local_40);
  if ((((((ulong)puVar2 & 1) == 0) ||
       (puVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isAtEnd_026ab608),
       ((ulong)puVar2 & 1) == 0)) || (local_40 < 1)) || (200 < local_40)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_eQ);
    local_44 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_18;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editingGroupLimit_026c3f90);
    if (((ulong)pcVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setQuickChatPrivateLimit__026c3fa0,local_40);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setQuickChatGroupLimit__026c3f98,local_40);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyRuntime_026c3d60);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}


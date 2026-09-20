// handleChatTopBarSearchOffsetXInput: @ 01b559d4

/* Function Stack Size: 0x18 bytes */

void WCRefineLayoutFunctionViewController::handleChatTopBarSearchOffsetXInput_
               (ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  cfstringStruct **ppcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_60;
  double local_50;
  double local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  ppcVar2 = &local_28;
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(ppcVar2,param_3);
  FUN_01b4574c();
  if (((ulong)ppcVar2 & 1) == 0) {
    local_2c = 1;
    goto LAB_01b55ccc;
  }
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_60 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_60;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_38;
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  local_48 = 0.0;
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
LAB_01b55bc8:
    dVar1 = local_48;
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(dVar1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    local_2c = 0;
  }
  else {
    local_50 = 0.0;
    pcVar5 = local_40;
    FUN_01b546fc(pcVar3,local_40,&local_50);
    if (((ulong)pcVar5 & 1) != 0) {
      if (local_50 < -200.0) {
        local_50 = -200.0;
      }
      if (200.0 < local_50) {
        local_50 = 200.0;
      }
      local_48 = local_50;
      goto LAB_01b55bc8;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQpeW_);
    local_2c = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
LAB_01b55ccc:
  _objc_storeStrong(&local_28,0);
  return;
}


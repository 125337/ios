// handleMsgBannerMaxTextLengthInput: @ 01b94740

/* Function Stack Size: 0x18 bytes */

void WCRefineMessageBannerBeautifyViewController::handleMsgBannerMaxTextLengthInput_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_a8;
  undefined8 local_68;
  bool local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  long local_40;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = lVar4;
  (*(code *)PTR__objc_release_02578630)(lVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    pcVar5 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = 0;
    local_48 = 0;
    local_38 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_msgBannerMaxTextLength_026a0780);
    local_59 = false;
    if ((long)pcVar5 < 1) {
      local_a8 = &cf____;
    }
    else {
      local_a8 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgBannerMaxTextOverflowSuffix_026a0788);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_a8;
    }
    local_59 = (long)pcVar5 >= 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_a8;
    if ((local_59 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    lVar1 = local_30;
    pcVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgBannerMaxTextLength_026a0780);
    local_68 = local_48;
    FUN_01b94b2c(lVar1,pcVar5,local_50,&local_40,&local_68);
    _objc_storeStrong(&local_48,local_68);
    if (local_40 < 1) {
      _objc_storeStrong(local_40,&local_48,&cf____);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setMsgBannerMaxTextLength__026c0048,local_40);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setMsgBannerMaxTextOverflowSuffi_026c0050,local_48);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_38,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}


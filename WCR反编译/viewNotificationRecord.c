// viewNotificationRecord @ 01d286c8

/* Function Stack Size: 0x10 bytes */

void WCRefineRedEnvelopViewController::viewNotificationRecord(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_58;
  cfstringStruct *local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_redEnvelopNotificationSessionID_026a6a80);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_48 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_48;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_58 = &cf_filehelper;
  }
  else {
    local_58 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_openChatWithUser__026b31c8,local_58);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}


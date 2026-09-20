// toggleChatBubbleWidthOptimize: @ 01b466fc

/* Function Stack Size: 0x18 bytes */

void WCRefineLayoutFunctionViewController::toggleChatBubbleWidthOptimize_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  puVar2 = PTR_WCRefineHelper_026ce000;
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  pcVar1 = &::cf__;
  if ((uVar3 & 1) == 0) {
    pcVar1 = &cf__sQll__OS;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_WCRefine,pcVar1,&cf_bwSN,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  return;
}


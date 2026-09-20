// previewMsgBannerEffect @ 01b92c58

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageBannerBeautifyViewController::previewMsgBannerEffect(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_msgBannerYuanbaoIsFriend_026bffa0);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showMsgBannerAddYuanbaoThenPrevi_026bfff0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_msgBannerSendYuanbaoPreviewIfFri_026bffc0);
  }
  return;
}


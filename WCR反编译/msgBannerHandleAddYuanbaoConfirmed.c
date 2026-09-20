// msgBannerHandleAddYuanbaoConfirmed @ 01b921c0

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageBannerBeautifyViewController::msgBannerHandleAddYuanbaoConfirmed
               (ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_msgBannerYuanbaoNeedsPrivacyShee_026bffd8);
  if (((IVar1 & 1) == 0) ||
     (IVar1 = param_1,
     (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_msgBannerPresentYuanbaoAddSheetT_026bffe0),
     (IVar1 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_msgBannerFinishAddYuanbaoThenPre_026bffc8);
  }
  return;
}


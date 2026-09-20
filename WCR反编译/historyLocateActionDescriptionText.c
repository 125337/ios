// historyLocateActionDescriptionText @ 01b1f770

/* Function Stack Size: 0x10 bytes */

ID WCRefineKeywordAlertHistoryViewController::historyLocateActionDescriptionText
             (ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_shouldAutoDeleteViewedHistoryRec_026beb90);
  pcVar1 = &cf_bRTRRd;
  if ((param_1 & 1) == 0) {
    pcVar1 = &cf_bRTOYuSU_;
  }
  _objc_retainAutoreleaseReturnValue();
  return (ID)pcVar1;
}


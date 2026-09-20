// openHistoryPage: @ 01b3df9c

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertViewController::openHistoryPage_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_pushKeywordAlertHistoryViewContr_026a4000,local_18,1)
  ;
  _objc_storeStrong(&local_28,0);
  return;
}


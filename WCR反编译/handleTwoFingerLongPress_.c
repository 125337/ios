// handleTwoFingerLongPress: @ 01b16768

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertHistoryCardViewController::handleTwoFingerLongPress_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if ((lVar1 == 1) &&
     (IVar2 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_multiSelectMode_026be908),
     (IVar2 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showCardsPerPageSetting_026beca0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}


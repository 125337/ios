// handleViewLongPress: @ 01759930

/* Function Stack Size: 0x18 bytes */

void ThemeExchangeViewController::handleViewLongPress_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (lVar1 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showUnlockAlert_026b4240);
  }
  _objc_storeStrong(&local_28,0);
  return;
}


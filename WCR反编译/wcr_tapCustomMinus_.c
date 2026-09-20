// wcr_tapCustomMinus: @ 01dc2e8c

/* Function Stack Size: 0x18 bytes */

void WCRefineSessionStatsLayoutViewController::wcr_tapCustomMinus_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_accessibilityIdentifier_0269ec20);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcr_presentMinusActionsForPageID_026c52e0,local_30);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}


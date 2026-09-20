// showUnavailableToastForActionID: @ 01cedb00

/* Function Stack Size: 0x18 bytes */

void WCRefineProfileCardFunctionPageViewController::showUnavailableToastForActionID_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDThemeDelivery);
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__wcR_Ock_WceQ_N);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Nbf_g);
  }
  _objc_storeStrong(&local_28,0);
  return;
}


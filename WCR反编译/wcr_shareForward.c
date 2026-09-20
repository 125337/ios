// wcr_shareForward @ 01ddbe10

/* Function Stack Size: 0x10 bytes */

void WCRefineSessionStatsViewController::wcr_shareForward(ID param_1,SEL param_2)

{
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingShareImage_026c5710);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingShareImage__026c56f8,0);
  if (local_28 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lgSRNvbJT);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_wcr_forwardImage_fromViewControl_026a1850,local_28,
               local_18);
  }
  _objc_storeStrong(&local_28,0);
  return;
}


// WCRefine_onDoNotDisturbTapped @ 0023caec

/* Function Stack Size: 0x10 bytes */

void WCRefineDoNotDisturbHook::WCRefine_onDoNotDisturbTapped(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineDoNotDisturbSupport_026ce118,PTR_s_toggleFromQuickEntry_026a0c48);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = &::cf__;
  if (((ulong)puVar2 & 1) == 0) {
    pcVar1 = &cf__sQRpb;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  return;
}


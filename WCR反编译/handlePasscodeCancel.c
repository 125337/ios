// handlePasscodeCancel @ 010f1e1c

/* Function Stack Size: 0x10 bytes */

void WCRefinePageLockGuard::handlePasscodeCancel(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCurrentPasscodeAlert__026aebe8,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_finishAuthWithCancel_026aec48);
  return;
}


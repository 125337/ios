// clearPendingAuthState @ 010f1038

/* Function Stack Size: 0x10 bytes */

void WCRefinePageLockGuard::clearPendingAuthState(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setAuthenticating__026aebc0,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPendingSuccess__026aebc8);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPendingCancel__026aebd0,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPendingKey__026aebd8,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPasscodeAttempts__026aebe0,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCurrentPasscodeAlert__026aebe8,0);
  return;
}


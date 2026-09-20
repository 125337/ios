// presentLockScreenIfNeeded @ 00006a88

/* Function Stack Size: 0x10 bytes */

void EncryptionLock::presentLockScreenIfNeeded(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEncryptionEnabled_0269cb38);
  if ((((IVar1 & 1) != 0) &&
      (IVar1 = param_1,
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hasUnlockedSuccessfully_0269cb68),
      (IVar1 & 1) == 0)) &&
     (IVar1 = param_1,
     (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_biometricAuthenticating_0269cb40),
     (IVar1 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setupLockWindow_0269cbd8);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isLockedOut_0269cbe0);
    if ((IVar1 & 1) == 0) {
      IVar1 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isBiometricEnabled_0269cbf0);
      if (((IVar1 & 1) == 0) ||
         (IVar1 = param_1,
         (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_biometricAttempted_0269cbf8),
         (IVar1 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showLockScreen_0269cc08);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_authenticateWithBiometrics_0269cc00);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showLockoutMessage_0269cbe8);
    }
  }
  return;
}


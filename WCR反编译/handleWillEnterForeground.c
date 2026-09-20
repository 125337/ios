// handleWillEnterForeground @ 0000574c

/* Function Stack Size: 0x10 bytes */

void EncryptionLock::handleWillEnterForeground(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  double in_d0;
  double dVar4;
  byte local_21;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEncryptionEnabled_0269cb38);
  if ((IVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hideBackgroundPrivacyCover_0269cb60);
  }
  else {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_biometricAuthenticating_0269cb40);
    if ((IVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_getProtectionTimeout_0269cae0);
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setTimeoutInterval__0269cae8);
      IVar2 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hasUnlockedSuccessfully_0269cb68);
      local_21 = (byte)IVar2;
      bVar1 = false;
      if ((IVar2 & 1) != 0) {
        IVar2 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lastBackgroundTime_0269cb70);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = IVar2 != 0;
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
      if (bVar1) {
        puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        IVar2 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lastBackgroundTime_0269cb70);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_timeIntervalSinceDate__0269cb78);
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        dVar4 = in_d0;
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_timeoutInterval_0269cb80);
        if (dVar4 < in_d0) {
          local_21 = 0;
        }
      }
      if ((local_21 & 1) == 0) {
        IVar2 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hasUnlockedSuccessfully_0269cb68);
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setHasUnlockedSuccessfully__0269cb88,0);
        if ((IVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setBiometricAttempted__0269cb90,0);
        }
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_presentLockScreenIfNeeded_0269cb98);
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hideBackgroundPrivacyCover_0269cb60);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hideBackgroundPrivacyCover_0269cb60);
      }
    }
  }
  return;
}


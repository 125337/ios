// handleWillResignActive @ 00005644

/* Function Stack Size: 0x10 bytes */

void EncryptionLock::handleWillResignActive(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEncryptionEnabled_0269cb38);
  if (((IVar1 & 1) != 0) &&
     (IVar1 = param_1,
     (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_biometricAuthenticating_0269cb40),
     (IVar1 & 1) == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setLastBackgroundTime__0269cb50);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showBackgroundPrivacyCover_0269cb58);
  }
  return;
}


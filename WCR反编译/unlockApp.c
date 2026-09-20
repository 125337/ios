// unlockApp @ 0000aee8

/* Function Stack Size: 0x10 bytes */

void EncryptionLock::unlockApp(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setFailedAttempts__0269ccd8,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setIsLockScreenPresented__0269cc30,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setBiometricAttempted__0269cb90,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setBiometricAuthenticating__0269cc10,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setHasUnlockedSuccessfully__0269cb88,1);
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setLastBackgroundTime__0269cb50);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lockWindow_0269cba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar2 != 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lockWindow_0269cba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lockWindow_0269cba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setLockWindow__0269cba8,0);
  }
  return;
}


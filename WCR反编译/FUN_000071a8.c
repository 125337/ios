// FUN_000071a8 @ 000071a8

void FUN_000071a8(long param_1)

{
  _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28,0);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setBiometricAttempted__0269cb90,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setBiometricAuthenticating__0269cc10,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_showLockScreen_0269cc08);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setBiometricAuthenticating__0269cc10,0);
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_unlockApp_0269cc20);
  }
  return;
}


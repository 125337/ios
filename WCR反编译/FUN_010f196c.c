// FUN_010f196c @ 010f196c

void FUN_010f196c(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28,0);
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_code_026ae1d0);
    bVar1 = true;
    if ((lVar2 != -2) && (bVar1 = true, lVar2 != -4)) {
      bVar1 = lVar2 == -9;
    }
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_finishAuthWithCancel_026aec48);
    }
    else {
      uVar3 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_hasEncryptionPasscode_026aec20);
      if ((uVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                   &cf_N81Y_HQ_W0_OR_0_Nn__x_O_NY_u);
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_finishAuthWithCancel_026aec48);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_presentPasscodePrompt_026aec30);
      }
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_finishAuthWithSuccess_026aec40);
  }
  return;
}


// FUN_00f4d17c @ 00f4d17c

void FUN_00f4d17c(long param_1)

{
  cfstringStruct *pcVar1;
  
  pcVar1 = &cf__mR0Rh_N_;
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    pcVar1 = &cf_mRh_N_1Y_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  return;
}


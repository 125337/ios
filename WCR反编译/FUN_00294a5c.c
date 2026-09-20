// FUN_00294a5c @ 00294a5c

void FUN_00294a5c(long param_1)

{
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowErrorWithText__0269f838,&cf_S1Y_,
               *(undefined8 *)(param_1 + 0x20));
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowDoneWithText_f_0269f848,
               &cf__S0RS_MRJ_Y,*(undefined8 *)(param_1 + 0x20));
    FUN_0028fbf8(0x405e000000000000,*(undefined8 *)(param_1 + 0x28));
  }
  return;
}


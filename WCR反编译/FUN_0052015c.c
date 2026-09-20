// FUN_0052015c @ 0052015c

void FUN_0052015c(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastErrorWithText__0269ced8,
               &cf_OX_1Y_hgvQCgP);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastDoneWithText__0269cee0,&cf__b_OX_0RvQ);
  }
  return;
}


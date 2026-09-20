// FUN_001b8110 @ 001b8110

void FUN_001b8110(long param_1)

{
  cfstringStruct *pcVar1;
  
  pcVar1 = &cf__Rd_YS;
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    pcVar1 = &cf_Rd_YS1Y_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  return;
}


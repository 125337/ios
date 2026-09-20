// FUN_01d199d4 @ 01d199d4

void FUN_01d199d4(long param_1,byte param_2,byte param_3)

{
  cfstringStruct *pcVar1;
  
  if ((param_2 & 1) != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
    pcVar1 = &cf__fbcTTagv_SNS;
    if ((param_3 & 1) == 0) {
      pcVar1 = &cf__feYl;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  }
  return;
}


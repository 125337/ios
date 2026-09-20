// FUN_000bddb4 @ 000bddb4

void FUN_000bddb4(byte param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  
  uVar2 = (ulong)((param_1 ^ 1) & 1);
  _WCRefineApplyPluginHubEntryHidden();
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_cN6e__g_T_u);
  }
  else {
    pcVar1 = &cf_Qn_6e_eQS_>f_y;
    if ((param_1 & 1) == 0) {
      pcVar1 = &cf_Qn_6e_eQS_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  }
  return;
}


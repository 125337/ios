// openPaymentLinkLedgerPage @ 00fa2ac4

/* Function Stack Size: 0x10 bytes */

void WCRefineHelper::openPaymentLinkLedgerPage(ID param_1,SEL param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  _WCRSFOpenMiniProgramShortLink(&cf__,1);
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showModernToast__0269ce78,&::cf_elSb);
  }
  return;
}


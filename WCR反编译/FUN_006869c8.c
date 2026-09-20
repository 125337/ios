// FUN_006869c8 @ 006869c8

void FUN_006869c8(long param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_6e>kc
               ,*(undefined8 *)(param_1 + 0x20),&cf_bwSN,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showPaymentLinkLedgerPromptWithT_026a6478,&cf_6e>kc
               ,*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}


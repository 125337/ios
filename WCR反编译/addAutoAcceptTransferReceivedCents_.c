// addAutoAcceptTransferReceivedCents: @ 01fd808c

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::addAutoAcceptTransferReceivedCents_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_autoAcceptTransferBalanceEnabled_0269d738);
  if (((IVar1 & 1) != 0) && (0 < (long)param_3)) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_autoAcceptTransferBalanceCurrent_026ca2d0);
    if ((long)IVar1 <= (long)(IVar1 + param_3)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_setAutoAcceptTransferBalanceCurr_026ca2d8,IVar1 + param_3);
    }
  }
  return;
}


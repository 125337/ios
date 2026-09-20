// openWalletBalanceInput @ 0193d7e0

/* Function Stack Size: 0x10 bytes */

void WCRefineCustomAmountViewController::openWalletBalanceInput(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  IVar2 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_walletBalanceReplacement_026abcd0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_showInputAlertWithTitle_placehol_026b9588,&cf__INYOpe,&cf_OY,IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_28,0);
  return;
}


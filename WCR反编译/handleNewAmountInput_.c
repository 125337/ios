// handleNewAmountInput: @ 018099d0

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineAutoAcceptTransferTierListViewController::handleNewAmountInput_
          (WCRefineAutoAcceptTransferTierListViewController *this,ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  double in_d0;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  FUN_01806734();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (0.0 < in_d0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,local_18,PTR_s_indexInStoredRulesForAmount__026b5c30);
    if (IVar2 == 0x7fffffffffffffff) {
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d0,local_18,PTR_s_pushEditorWithAmount_ruleIndex__026b5c58,0x7fffffffffffffff);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_chMO_X__W);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf____YN);
  }
  _objc_storeStrong(&local_28,0);
  return;
}


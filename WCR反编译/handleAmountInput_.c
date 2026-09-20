// handleAmountInput: @ 01806598

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineAutoAcceptTransferTierEditorViewController::handleAmountInput_
          (WCRefineAutoAcceptTransferTierEditorViewController *this,ID param_1,SEL param_2,
          ID param_3)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  ID IVar3;
  double in_d0;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  FUN_01806734();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (0.0 < in_d0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(in_d0,local_18,PTR_s_amountExistsInOtherRules__026b5be0);
    if ((IVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(in_d0,local_18,PTR_s_setAmount__026b5be8);
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isEditingExistingRule_026b5b88);
      pcVar1 = &cf__chMO;
      if ((IVar3 & 1) == 0) {
        pcVar1 = &cf_e_chMO;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTitle__0269cef0,pcVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
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


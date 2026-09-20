// isEditingExistingRule @ 018051a4

/* Function Stack Size: 0x10 bytes */

bool WCRefineAutoAcceptTransferTierEditorViewController::isEditingExistingRule
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined4 local_38;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_storedRuleIndex_026b5b78);
  local_38 = 0;
  if (IVar1 != 0x7fffffffffffffff) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_storedRuleIndex_026b5b78);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_allRules_026b5b80);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = (bool)(IVar1 < IVar2);
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return local_38;
}


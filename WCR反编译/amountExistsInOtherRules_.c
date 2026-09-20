// amountExistsInOtherRules: @ 01806194

/* Function Stack Size: 0x18 bytes */

bool WCRefineAutoAcceptTransferTierEditorViewController::amountExistsInOtherRules_
               (ID param_1,SEL param_2,double param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ulong local_40;
  ID local_38;
  double local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_allRules_026b5b80);
  _objc_retainAutoreleasedReturnValue();
  local_40 = 0;
  local_38 = param_1;
  do {
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    if (IVar1 <= local_40) {
      local_11 = 0;
LAB_01806354:
      _objc_storeStrong(&local_38,0);
      return local_11 & 1;
    }
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEditingExistingRule_026b5b88);
    if (((IVar1 & 1) == 0) ||
       (IVar1 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_storedRuleIndex_026b5b78),
       local_40 != IVar1)) {
      IVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      FUN_01804e40();
      FUN_01806374();
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      FUN_01806374(local_30);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isEqualToString__0269ccc8);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      if ((IVar4 & 1) != 0) {
        local_11 = 1;
        goto LAB_01806354;
      }
    }
    local_40 = local_40 + 1;
  } while( true );
}


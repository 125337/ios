// pushEditorWithAmount:ruleIndex: @ 018096ac

/* Function Stack Size: 0x20 bytes */

void WCRefineAutoAcceptTransferTierListViewController::pushEditorWithAmount_ruleIndex_
               (ID param_1,SEL param_2,double param_3,unsigned_long_long param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_38;
  unsigned_long_long local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineAutoAcceptTransferTierEditorViewController_026cf058;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(local_28);
  IVar2 = local_18;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_38,0);
  return;
}


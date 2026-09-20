// indexInStoredRulesForAmount: @ 01808bc0

/* Function Stack Size: 0x18 bytes */

unsigned_long_long
WCRefineAutoAcceptTransferTierListViewController::indexInStoredRulesForAmount_
          (ID param_1,SEL param_2,double param_3)

{
  unsigned_long_long uVar1;
  ID IVar2;
  ID IVar3;
  ID local_48;
  unsigned_long_long *local_40;
  unsigned_long_long local_38;
  ID local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  FUN_01806374(param_3);
  _objc_retainAutoreleasedReturnValue();
  local_38 = 0x7fffffffffffffff;
  IVar3 = local_18;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rules_026a44d8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = IVar2;
  local_40 = &local_38;
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_enumerateObjectsUsingBlock__0269d3d0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  uVar1 = local_38;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_30,0);
  return uVar1;
}


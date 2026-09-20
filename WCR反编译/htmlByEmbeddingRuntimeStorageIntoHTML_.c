// htmlByEmbeddingRuntimeStorageIntoHTML: @ 01f013f0

/* Function Stack Size: 0x18 bytes */

ID WCRefineToDoListWebSettingsViewController::htmlByEmbeddingRuntimeStorageIntoHTML_
             (ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *local_58;
  ID *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  pIVar1 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(pIVar1,param_3);
  FUN_01f01544();
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_28;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_30 = pIVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_58 = *(undefined **)PTR____NSDictionary0___02578288;
  }
  FUN_01f016dc(pIVar1,local_58);
  _objc_retainAutoreleasedReturnValue();
  FUN_01ee5898(IVar4,pIVar1,local_30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(pIVar1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar4;
}


// currentChatProvider @ 009b6f30

/* Function Stack Size: 0x10 bytes */

ID WCRefineAIStore::currentChatProvider(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID local_58;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  IVar2 = param_1;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentChatProviderID_026aad28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_providerForID__026aad08);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_supportsChat_026aad10);
  bVar1 = (IVar2 & 1) == 0;
  if (bVar1) {
    local_58 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_providerForID__026aad08,&cf_siliconflow);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_58;
  }
  else {
    local_58 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_58;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}


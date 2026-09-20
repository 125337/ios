// isChatProviderConfigured @ 009c03c4

/* Function Stack Size: 0x10 bytes */

bool WCRefineAIStore::isChatProviderConfigured(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  byte local_48;
  ID local_40;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentChatProvider_0269d548);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_20;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_providerID_0269d480);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_apiKeyForProviderID_kind__0269d488,param_1,&cf_chat);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_supportsChat_026aad10);
  bVar1 = false;
  local_48 = 0;
  if ((IVar2 & 1) != 0) {
    local_40 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_chatModel_026aadc8);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = 0;
    if (IVar2 != 0) {
      IVar2 = local_30;
      FUN_009c0574(local_30,local_38);
      local_48 = (byte)IVar2;
    }
  }
  local_11 = local_48 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}


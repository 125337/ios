// queryProviderBalance @ 017e96e8

/* Function Stack Size: 0x10 bytes */

void WCRefineAISettingsViewController::queryProviderBalance(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined *local_50;
  ID local_48;
  undefined *local_40;
  uint local_34;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrBindKind__026b5330);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrProviderForKind__026b5230,&cf_chat);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRefineAIStore_026ce048;
  local_28 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_providerID_0269d480);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_apiKeyForProviderID_kind__0269d488,IVar3,&cf_chat);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar5;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (puVar4 != (undefined *)0x0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_balanceRequest_026b55a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar6 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WgYO_);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    puVar1 = local_30;
    puVar5 = PTR_WCRefineAIClient_026ce080;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_017e9a08;
    local_58 = &DAT_02589218;
    local_40 = puVar6;
    (*(code *)PTR__objc_retain_02578638)();
    IVar2 = local_28;
    local_50 = puVar6;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_fetchBalanceForProvider_apiKey_c_026b55b0,IVar3,puVar1,&local_70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBalanceRequest__026b55b8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQkXQ);
  }
  local_34 = (uint)(puVar4 == (undefined *)0x0);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}


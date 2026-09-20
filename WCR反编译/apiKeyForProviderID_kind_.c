// apiKeyForProviderID:kind: @ 009c4e00

/* Function Stack Size: 0x20 bytes */

ID WCRefineAIStore::apiKeyForProviderID_kind_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  ID local_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  lVar1 = local_38;
  FUN_009c4fc4();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  IVar3 = local_20;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_apiKeyForProviderID__026aadf8,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_44 = 1;
    local_18 = IVar3;
  }
  else {
    uVar2 = local_30;
    FUN_009c50ac(local_30,local_40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_wcrReadAPIKeyForAccount__026aae38);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    IVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    IVar3 = local_50;
    if (IVar4 == 0) {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_apiKeyForProviderID__026aadf8,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_18 = IVar3;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = IVar3;
    }
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}


// isPluginEnabledInSearch: @ 01ca88b0

/* Function Stack Size: 0x18 bytes */

bool WCRefinePluginSortViewController::isPluginEnabledInSearch_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_50;
  undefined4 local_44;
  ID local_40;
  ID local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_objectForKeyedSubscript__0269d098,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  if (IVar1 == 0) {
    local_11 = 0;
    local_44 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_valueForKey__0269d128,local_40);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = (byte)puVar3 & 1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}


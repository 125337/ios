// isPluginEnabledForSearchByClassName: @ 014c4850

/* Function Stack Size: 0x18 bytes */

bool WCRefineSearchManager::isPluginEnabledForSearchByClassName_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
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
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getPluginKey__026af5f0,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  if ((IVar1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0), IVar1 == 0)) {
    local_11 = 1;
    local_3c = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_valueForKey__0269d128,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_11 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_boolValue_026ca540);
      local_11 = (byte)puVar2 & 1;
    }
    local_3c = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}


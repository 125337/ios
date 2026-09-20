// multiSelectEntryEnabled @ 00f6e140

/* Function Stack Size: 0x10 bytes */

bool WCRefineForwardToGroupHelper::multiSelectEntryEnabled(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  uint local_2c;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_featureEnabled_026ac9b8);
  local_2c = 0;
  if ((IVar2 & 1) != 0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_forwardToGroupMultiSelectEnabled_026ac9c8);
    local_2c = (uint)puVar1;
  }
  _objc_storeStrong(&local_28,0);
  return local_2c & 1;
}


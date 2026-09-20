// groupingEnabled @ 01771960

/* Function Stack Size: 0x10 bytes */

bool WCRefinePluginHubManager::groupingEnabled(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int local_34;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
  if (((ulong)puVar1 & 1) == 0) {
    local_34 = 1;
  }
  else {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_boolValue_026ca540);
    local_34 = (int)puVar1;
  }
  _objc_storeStrong(&local_28,0);
  return (uint)(local_34 != 0);
}


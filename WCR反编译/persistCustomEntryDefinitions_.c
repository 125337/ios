// persistCustomEntryDefinitions: @ 017780ac

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginHubManager::persistCustomEntryDefinitions_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  long local_38;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
  if (lVar2 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_setConfigValue_forKey__026b4428,local_38,&cf_WCRPluginHubCustomEntries);
  _objc_storeStrong(&local_28,0);
  return;
}


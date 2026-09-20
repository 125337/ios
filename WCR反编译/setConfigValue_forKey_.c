// setConfigValue:forKey: @ 0177ccd4

/* Function Stack Size: 0x20 bytes */

void WCRefinePluginHubManager::setConfigValue_forKey_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *local_38;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  if (local_28 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_removeObjectForKey__0269d700,local_30);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setObject_forKeyedSubscript__0269d248,local_28,local_30);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_38);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}


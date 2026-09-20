// clearDest @ 01954cd4

/* Function Stack Size: 0x10 bytes */

void WCRefineFakeLocationSettingsViewController::clearDest(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_removeObjectForKey__0269d700,&cf_wcr_fakeLocationDestLatitude);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_removeObjectForKey__0269d700,&cf_wcr_fakeLocationDestLongitude);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_removeObjectForKey__0269d700,&cf_wcr_fakeLocationDestName);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_28);
  _objc_storeStrong(&local_28,0);
  return;
}


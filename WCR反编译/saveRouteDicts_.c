// saveRouteDicts: @ 00f5a214

/* Function Stack Size: 0x18 bytes */

void WCRefineFakeLocationEngine::saveRouteDicts_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
  if (lVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_removeObjectForKey__0269d700,&cf_wcr_fakeLocationRouteCoords);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,local_28,
               &cf_wcr_fakeLocationRouteCoords);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_30);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}


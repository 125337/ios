// saveDestLat:lng:name: @ 01954608

/* Function Stack Size: 0x28 bytes */

void WCRefineFakeLocationSettingsViewController::saveDestLat_lng_name_
               (ID param_1,SEL param_2,double param_3,double param_4,ID param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *local_78;
  undefined *local_40;
  cfstringStruct *local_38;
  double local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_38,param_5);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
             &cf_wcr_fakeLocationDestLatitude);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,
             &cf_wcr_fakeLocationDestLongitude);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_38 == (cfstringStruct *)0x0) {
    local_78 = &::cf___;
  }
  else {
    local_78 = local_38;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,local_78,
             &cf_wcr_fakeLocationDestName);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_40);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}


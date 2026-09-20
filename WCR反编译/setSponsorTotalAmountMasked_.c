// setSponsorTotalAmountMasked: @ 02167de0

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setSponsorTotalAmountMasked_(ID param_1,SEL param_2,double param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineSponsorSecureStore_026ce918;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineSponsorSecureStore_026ce918,PTR_s_resolvedWxid__026a7de8,0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 != (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_WCRefineCloudSponsorGen___);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_doubleForKey__026a7e60);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_WCRefineSponsorSecureStore_026ce918,
               PTR_s_saveTrustedTotal_forWxid_cloudGe_026a7e68,local_30,(long)param_3);
  }
  _objc_storeStrong(&local_30,0);
  return;
}


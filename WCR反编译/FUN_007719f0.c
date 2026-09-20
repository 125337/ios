// FUN_007719f0 @ 007719f0

void FUN_007719f0(double param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long local_20;
  double local_18;
  
  local_18 = param_1;
  FUN_0076be80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_20 = param_2;
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
            (local_18,PTR_WCRefineSponsorSecureStore_026ce918,
             PTR_s_saveTrustedTotal_forWxid_cloudGe_026a7e68,local_20,(long)param_1);
  _objc_storeStrong(&local_20,0);
  return;
}


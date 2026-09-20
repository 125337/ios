// normalizedProfiles @ 0160acd4

/* Function Stack Size: 0x10 bytes */

ID WCRSuperFloatProfileStore::normalizedProfiles(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_38;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ensureProfilesInitialized_026b1870);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_38 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_autoreleaseReturnValue();
  return (ID)local_38;
}


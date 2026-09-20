// FUN_016855cc @ 016855cc

bool FUN_016855cc(double param_1,ulong param_2)

{
  undefined *puVar1;
  bool local_11;
  
  FUN_00963008();
  if (((param_2 & 1) == 0) &&
     (puVar1 = PTR_WCRefineHelper_026ce000,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineHelper_026ce000,PTR_s_shouldShowUnfinishedFeaturePrevi_026ae7e8),
     ((ulong)puVar1 & 1) == 0)) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_11 = DAT_0232c6f0 <= param_1 + DAT_0232c3a0;
  }
  else {
    local_11 = true;
  }
  return local_11;
}


// getRepeatEnhanceCornerRadius @ 0169b2e4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* getRepeatEnhanceCornerRadius() */

float getRepeatEnhanceCornerRadius(void)

{
  undefined *puVar1;
  double in_d0;
  float local_14;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_14 = (float)in_d0;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_14 < 0.0) {
    local_14 = 0.0;
  }
  if (10.0 < local_14) {
    local_14 = 10.0;
  }
  return local_14;
}


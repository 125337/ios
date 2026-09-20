// FUN_007a7f64 @ 007a7f64

double FUN_007a7f64(byte param_1)

{
  double local_78;
  double local_70;
  undefined *local_60;
  undefined *local_20;
  byte local_11;
  
  local_60 = PTR_WCRefineConfig_026cdf58;
  local_11 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = local_60;
  if ((local_11 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_mainFrameBelowPinnedSpacing_026a8110);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_mainFramePinnedTopSpacing_026a8108);
  }
  local_70 = (double)(long)local_60;
  if (local_70 <= 0.0) {
    local_78 = DAT_02323d38;
  }
  else {
    if (50.0 <= local_70) {
      local_70 = 50.0;
    }
    local_78 = local_70;
  }
  _objc_storeStrong(&local_20,0);
  return local_78;
}


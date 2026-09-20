// FUN_008610ec @ 008610ec

double FUN_008610ec(double param_1)

{
  undefined *puVar1;
  double local_40;
  double local_20;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_profileFollowGlobalCornerEnabled_026a8ea0);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_profileStroke_026a8f40);
    local_40 = param_1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_globalCornerStroke_026a2018);
    local_40 = param_1;
  }
  local_20 = local_40;
  if (local_40 < 0.0) {
    local_20 = 0.0;
  }
  if (5.0 < local_20) {
    local_20 = 5.0;
  }
  _objc_storeStrong(&local_18,0);
  return local_20;
}


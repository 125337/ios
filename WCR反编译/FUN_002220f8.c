// FUN_002220f8 @ 002220f8

double FUN_002220f8(double param_1)

{
  undefined *puVar1;
  double local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_18 = param_1;
  if (param_1 < 0.0) {
    local_18 = 0.0;
  }
  if (5.0 < local_18) {
    local_18 = 5.0;
  }
  return local_18;
}


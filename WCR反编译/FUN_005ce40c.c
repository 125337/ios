// FUN_005ce40c @ 005ce40c

double FUN_005ce40c(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  double local_90;
  double local_88;
  double local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_18 = param_1 / 6.0;
  }
  else {
    local_88 = 0.0;
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_88 <= 0.0) {
      local_88 = 0.0;
    }
    local_90 = param_1;
    if (local_88 <= param_1) {
      local_90 = local_88;
    }
    local_18 = local_90;
  }
  return local_18;
}


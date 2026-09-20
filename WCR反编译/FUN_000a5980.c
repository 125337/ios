// FUN_000a5980 @ 000a5980

double FUN_000a5980(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  double local_80;
  double local_78;
  double local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_18 = 0.0;
  }
  else {
    local_78 = 0.0;
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_78 <= 0.0) {
      local_78 = 0.0;
    }
    local_80 = param_1;
    if (local_78 <= param_1) {
      local_80 = local_78;
    }
    local_18 = local_80;
  }
  return local_18;
}


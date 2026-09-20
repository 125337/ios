// FUN_003cb0c8 @ 003cb0c8

double FUN_003cb0c8(double param_1)

{
  undefined *puVar1;
  double local_70;
  double local_68;
  double local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (0.0 < param_1) {
    local_68 = param_1;
    if (param_1 <= 20.0) {
      local_68 = 20.0;
    }
    if (local_68 <= 68.0) {
      local_70 = local_68;
    }
    else {
      local_70 = 68.0;
    }
    local_18 = local_70;
  }
  else {
    local_18 = 52.0;
  }
  return local_18;
}


// FUN_003e8fac @ 003e8fac

void FUN_003e8fac(double param_1)

{
  undefined *puVar1;
  double local_40;
  double local_38;
  undefined *local_20;
  double local_18;
  
  _CACurrentMediaTime();
  if ((DAT_028ca4a8 <= 0.0) || (0.25 <= param_1 - DAT_028ca4a8)) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    DAT_028ca4a8 = param_1;
    local_18 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_20 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_imeKeyboardCornerEnabled_026a33d0);
    DAT_028ca498 = SUB81(puVar1,0);
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_imeKeyboardCornerRadius_026a33d8);
    local_38 = (double)(long)puVar1;
    if (local_38 < 0.0) {
      local_38 = 0.0;
    }
    if (80.0 < local_38) {
      local_38 = 80.0;
    }
    DAT_026e0290 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_imeKeyboardCornerBorderSize_026a33e0);
    local_40 = local_38;
    if (local_38 < 0.0) {
      local_40 = 0.0;
    }
    if (5.0 < local_40) {
      local_40 = 5.0;
    }
    DAT_028ca4a0 = local_40;
    _objc_storeStrong(&local_20,0);
  }
  return;
}


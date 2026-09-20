// FUN_00f887e0 @ 00f887e0

double FUN_00f887e0(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                   undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  double local_f8;
  double local_f0;
  double local_e0;
  double local_d8;
  double local_38;
  undefined *local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = 10.0;
  local_38 = 10.0;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_msgReferCornerEnabled_026a05d8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_msgReferCornerRadius_026a05e0);
    if ((long)puVar1 < 1) {
      local_d8 = 10.0;
    }
    else {
      if ((long)puVar1 < 0x1f) {
        local_e0 = (double)(long)puVar1;
      }
      else {
        local_e0 = 30.0;
      }
      local_d8 = local_e0;
    }
    local_38 = local_d8;
  }
  if (local_28 != 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    _CGRectIsEmpty(local_d8);
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      local_f0 = param_4;
      if (param_3 < param_4) {
        local_f0 = param_3;
      }
      local_f8 = local_f0 * 0.5;
      if (local_38 < local_f8) {
        local_f8 = local_38;
      }
      local_38 = local_f8;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_38;
}


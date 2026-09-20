// FUN_01e8f1cc @ 01e8f1cc

double FUN_01e8f1cc(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double local_e0;
  double local_d0;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_30;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_2);
  dVar3 = param_1;
  if (local_18 == (undefined *)0x0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_18;
    local_18 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toDoCardContentVerticalInset_026c6de0);
  puVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toDoCardTitleEnabled_026c6de8);
  local_30 = dVar3;
  if (((ulong)puVar2 & 1) != 0) {
    local_b0 = 20.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toDoCardTitleFontSize_026c6df0);
    local_b0 = local_b0 + 4.0;
    if (local_b0 <= 20.0) {
      local_b0 = 20.0;
    }
    puVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toDoCardDateEnabled_026c6df8);
    if (((ulong)puVar2 & 1) == 0) {
      local_c0 = 0.0;
    }
    else {
      local_b8 = 14.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toDoCardTitleFontSize_026c6df0);
      if (local_b8 <= 14.0) {
        local_b8 = 14.0;
      }
      local_c0 = local_b8;
    }
    local_d0 = dVar3 * 0.5;
    if (local_d0 <= 0.0) {
      local_d0 = 0.0;
    }
    local_30 = dVar3 + local_b0 + local_c0 + local_d0;
  }
  local_e0 = param_1;
  if (param_1 <= 1.0) {
    local_e0 = 1.0;
  }
  dVar3 = local_30 + local_e0 + dVar3;
  FUN_01e9bfa4();
  _objc_storeStrong(&local_18,0);
  return dVar3;
}


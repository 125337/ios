// FUN_001a0778 @ 001a0778

double FUN_001a0778(double param_1,double param_2)

{
  dword *pdVar1;
  dword *pdVar2;
  double local_78;
  double local_70;
  dword *local_58;
  dword *local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_78 = param_2;
  if (param_1 < param_2) {
    local_78 = param_1;
  }
  local_48 = local_78;
  local_30 = local_78;
  if (0.0 < local_78) {
    pdVar2 = (dword *)PTR_WCRefineConfig_026cdf58;
    local_40 = param_2;
    local_38 = param_1;
    local_28 = param_1;
    local_20 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pdVar1 = pdVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = pdVar1;
    (*(code *)PTR__objc_release_02578630)(pdVar2);
    pdVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (pdVar2 == (dword *)0x0) {
      pdVar2 = (dword *)PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      pdVar1 = pdVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_50 = pdVar1;
      (*(code *)PTR__objc_release_02578630)(pdVar2);
    }
    else {
      pdVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_integerValue_026ca750);
      local_50 = pdVar2;
    }
    if ((long)local_50 < 0) {
      local_50 = (dword *)0x0;
    }
    else if (100 < (long)local_50) {
      local_50 = &segment_command_00000020.flags;
    }
    if ((long)local_50 < 100) {
      if ((long)local_50 < 1) {
        local_70 = 0.0;
        pdVar2 = local_50;
      }
      else {
        pdVar2 = (dword *)0x4059000000000000;
        local_70 = local_30 * 0.5 * ((double)(long)local_50 / 100.0);
      }
    }
    else {
      local_70 = local_30 * 0.5;
      pdVar2 = local_50 + -0x19;
    }
    local_18 = local_70;
    _objc_storeStrong(pdVar2,&local_58,0);
  }
  else {
    local_18 = 0.0;
  }
  return local_18;
}


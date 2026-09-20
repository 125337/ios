// FUN_00784138 @ 00784138

dword * FUN_00784138(byte param_1)

{
  dword *pdVar1;
  dword *local_20;
  
  if ((param_1 & 1) == 0) {
    pdVar1 = (dword *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_20 = pdVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pdVar1);
  }
  else {
    pdVar1 = (dword *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_20 = pdVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pdVar1);
  }
  if ((((long)local_20 < 0) || (0xc < (long)local_20)) &&
     (local_20 = (dword *)((long)&MACH_HEADER.cputype + 2), (param_1 & 1) == 0)) {
    local_20 = &MACH_HEADER.cputype;
  }
  return local_20;
}


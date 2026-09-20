// FUN_001441d8 @ 001441d8

dword * FUN_001441d8(void)

{
  dword *pdVar1;
  dword *local_18;
  
  pdVar1 = (dword *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = pdVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pdVar1);
  if ((long)local_18 < 1) {
    local_18 = (dword *)((long)&MACH_HEADER.cputype + 1);
  }
  if (0x14 < (long)local_18) {
    local_18 = &MACH_HEADER.sizeofcmds;
  }
  return local_18;
}


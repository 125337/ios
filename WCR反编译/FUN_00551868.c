// FUN_00551868 @ 00551868

dword * FUN_00551868(void)

{
  dword *pdVar1;
  dword *local_70;
  dword *local_68;
  
  pdVar1 = (dword *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pdVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pdVar1);
  if (0xe10 < (long)local_68) {
    local_68 = &section_00000dc8.reserved2;
  }
  if ((long)local_68 < 0x3d) {
    local_70 = (dword *)((long)&segment_command_00000020.vmaddr + 4);
  }
  else {
    local_70 = local_68;
  }
  return local_70;
}


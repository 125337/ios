// FUN_00776054 @ 00776054

undefined * FUN_00776054(void)

{
  undefined *puVar1;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((long)local_18 < 10) {
    local_18 = (undefined *)((long)&MACH_HEADER.cpusubtype + 2);
  }
  if (0x17 < (long)local_18) {
    local_18 = (undefined *)((long)&MACH_HEADER.sizeofcmds + 3);
  }
  if ((long)local_18 < 9) {
    local_18 = (undefined *)((long)&MACH_HEADER.cpusubtype + 1);
  }
  return local_18;
}


// autoUploadIntervalHours @ 00f01cd0

/* Function Stack Size: 0x10 bytes */

long_long WCRefineCloudBackupService::autoUploadIntervalHours(ID param_1,SEL param_2)

{
  dword *pdVar1;
  dword *local_18;
  
  pdVar1 = (dword *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = pdVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pdVar1);
  if ((((local_18 != (dword *)((long)&MACH_HEADER.cputype + 2)) &&
       (local_18 != &MACH_HEADER.filetype)) && (local_18 != &MACH_HEADER.flags)) &&
     (((qword *)local_18 != &segment_command_00000020.fileoff &&
      (local_18 != &section_00000068.flags)))) {
    local_18 = &MACH_HEADER.flags;
  }
  return (long_long)local_18;
}


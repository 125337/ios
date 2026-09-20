// retainCount @ 00f01c18

/* Function Stack Size: 0x10 bytes */

long_long WCRefineCloudBackupService::retainCount(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((long)local_28 < 1) {
    local_28 = (undefined *)((long)&MACH_HEADER.magic + 3);
  }
  if (9 < (long)local_28) {
    local_28 = (undefined *)((long)&MACH_HEADER.cpusubtype + 1);
  }
  return (long_long)local_28;
}


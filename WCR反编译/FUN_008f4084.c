// FUN_008f4084 @ 008f4084

long FUN_008f4084(void)

{
  char *pcVar1;
  char *local_18;
  
  pcVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if ((long)local_18 < 1) {
    local_18 = (char *)((long)&MACH_HEADER.magic + 1);
  }
  if (600 < (long)local_18) {
    local_18 = section_00000248.segname;
  }
  return (long)local_18 * 1000;
}


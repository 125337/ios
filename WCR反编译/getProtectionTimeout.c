// getProtectionTimeout @ 01a30d3c

/* Function Stack Size: 0x10 bytes */

long_long WCRefineGeneralFunctionViewController::getProtectionTimeout(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_40;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((long)local_40 < 1) {
    local_40 = (undefined *)((long)&MACH_HEADER.filetype + 3);
  }
  return (long_long)local_40;
}


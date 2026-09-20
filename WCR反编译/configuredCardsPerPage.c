// configuredCardsPerPage @ 01b0afd4

/* Function Stack Size: 0x10 bytes */

unsigned_long_long
WCRefineKeywordAlertHistoryCardViewController::configuredCardsPerPage(ID param_1,SEL param_2)

{
  dword *pdVar1;
  dword *local_28;
  
  pdVar1 = (dword *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pdVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pdVar1);
  if (local_28 == (dword *)0x0) {
    local_28 = (dword *)((long)&MACH_HEADER.magic + 1);
  }
  else if (&MACH_HEADER.cpusubtype < local_28) {
    local_28 = &MACH_HEADER.cpusubtype;
  }
  return (unsigned_long_long)local_28;
}


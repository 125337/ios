// centerSlotCount @ 01e55bbc

/* Function Stack Size: 0x10 bytes */

long_long WCRefineTelegramTabStripView::centerSlotCount(ID param_1,SEL param_2)

{
  dword *pdVar1;
  dword *local_b8;
  dword *local_b0;
  dword *local_a8;
  dword *local_18;
  
  pdVar1 = (dword *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = pdVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pdVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabButtons_026c6940);
  _objc_retainAutoreleasedReturnValue();
  local_a8 = (dword *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((long)local_b0 < 1) {
    if ((long)local_a8 < 2) {
      local_a8 = (dword *)((long)&MACH_HEADER.magic + 1);
    }
    local_18 = local_a8;
  }
  else {
    if (8 < (long)local_b0) {
      local_b0 = &MACH_HEADER.cpusubtype;
    }
    if ((long)local_b0 < 2) {
      local_b8 = (dword *)((long)&MACH_HEADER.magic + 1);
    }
    else {
      local_b8 = local_b0;
    }
    local_18 = local_b8;
  }
  return (long_long)local_18;
}


// itemsPerRow @ 01099d58

/* Function Stack Size: 0x10 bytes */

long_long WCRefineLocalEmoticonStore::itemsPerRow(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((long)local_18 < 4) || (7 < (long)local_18)) {
    local_18 = (undefined *)((long)&MACH_HEADER.cputype + 1);
  }
  return (long_long)local_18;
}


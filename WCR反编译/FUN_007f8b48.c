// FUN_007f8b48 @ 007f8b48

mach_header * FUN_007f8b48(undefined *param_1)

{
  undefined *puVar1;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  mach_header *local_18;
  
  local_20 = param_1;
  FUN_007f8a9c();
  if ((((ulong)param_1 & 1) == 0) || ((long)local_20 < 1)) {
    local_18 = (mach_header *)0x7fffffffffffffff;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardCustomSectionOffset_026a2578);
    local_30 = (undefined *)-(long)puVar1;
    if (0 < (long)puVar1) {
      local_30 = puVar1;
    }
    if ((long)local_30 < 1) {
      local_30 = (undefined *)((long)&MACH_HEADER.magic + 1);
    }
    if ((long)local_20 < (long)local_30) {
      local_30 = local_20;
    }
    local_18 = (mach_header *)(local_30 + -1);
    _objc_storeStrong(&local_28,0);
  }
  return local_18;
}


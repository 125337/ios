// FUN_00350774 @ 00350774

mach_header * FUN_00350774(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_28;
  mach_header *local_18;
  
  puVar1 = param_1;
  FUN_003506a0();
  if ((((ulong)puVar1 & 1) == 0) || ((long)param_1 < 1)) {
    local_18 = (mach_header *)0x7fffffffffffffff;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_28 = (undefined *)-(long)puVar2;
    if (0 < (long)puVar2) {
      local_28 = puVar2;
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if ((long)local_28 < 1) {
      local_28 = (undefined *)((long)&MACH_HEADER.magic + 1);
    }
    if ((long)param_1 < (long)local_28) {
      local_28 = param_1;
    }
    local_18 = (mach_header *)(local_28 + -1);
  }
  return local_18;
}


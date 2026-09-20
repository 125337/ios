// FUN_016aa7d8 @ 016aa7d8

undefined * FUN_016aa7d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_58;
  undefined *local_30;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((long)local_30 < 1) || (10 < (long)local_30)) {
    local_30 = (undefined *)((long)&MACH_HEADER.magic + 3);
  }
  if (((ulong)puVar2 & 1) == 0) {
    local_58 = (undefined *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    local_58 = local_30;
  }
  return local_58;
}


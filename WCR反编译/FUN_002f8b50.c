// FUN_002f8b50 @ 002f8b50

uint FUN_002f8b50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint local_14;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_14 = 0;
  if (((ulong)puVar2 & 1) != 0) {
    local_14 = 0;
    FUN_01138eb8();
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return local_14 & 1;
}


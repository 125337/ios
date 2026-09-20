// FUN_004ce66c @ 004ce66c

uint FUN_004ce66c(void)

{
  undefined *puVar1;
  uint local_2c;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_mainPageSinkMainFrameEnabled_026a4108);
  local_2c = 1;
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mainPageSinkContactsEnabled_026a4110);
    local_2c = 1;
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mainPageSinkDiscoverEnabled_026a4118);
      local_2c = (uint)puVar1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return local_2c & 1;
}


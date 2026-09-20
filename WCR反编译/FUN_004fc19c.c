// FUN_004fc19c @ 004fc19c

void FUN_004fc19c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_14;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_14 = 0;
  if (((ulong)puVar2 & 1) != 0) {
    local_14 = (byte)puVar2;
    FUN_004fc548();
  }
  DAT_028caf10 = local_14 & 1;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  DAT_028caf11 = SUB81(puVar2,0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}


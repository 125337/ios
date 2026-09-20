// FUN_0063a16c @ 0063a16c

ulong FUN_0063a16c(void)

{
  undefined *puVar1;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_navigationHomeOnlineMode_026a60d8);
  _objc_storeStrong(&local_18,0);
  return (ulong)puVar1 & 0xffffffff;
}


// FUN_015850e8 @ 015850e8

undefined * FUN_015850e8(void)

{
  undefined *puVar1;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((long)local_18 < 0) || (2 < (long)local_18)) {
    local_18 = (undefined *)0x0;
  }
  return local_18;
}


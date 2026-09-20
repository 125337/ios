// FUN_016bdc08 @ 016bdc08

uint FUN_016bdc08(void)

{
  undefined *puVar1;
  uint local_2c;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_screenshotWatermarkEnabled_026a1ee0);
  local_2c = 1;
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_videoWatermarkEnabled_026a6d88);
    local_2c = (uint)puVar1;
  }
  _objc_storeStrong(&local_18,0);
  return local_2c & 1;
}


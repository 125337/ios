// wcr_hasAnyScreenshotWatermarkLayerEnabled @ 00726474

/* Function Stack Size: 0x10 bytes */

bool WCRefineScreenshotWatermarkProcessor::wcr_hasAnyScreenshotWatermarkLayerEnabled
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  uint local_3c;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_screenshotWatermark1Enabled_026a78c0);
  local_3c = 1;
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_screenshotWatermark2Enabled_026a78c8);
    local_3c = 1;
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_screenshotWatermark3Enabled_026a78d0);
      local_3c = (uint)puVar1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return local_3c & 1;
}


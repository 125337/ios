// wcr_hasAnyEnabledRecordingPostProcessFeature @ 006e7c6c

/* Function Stack Size: 0x10 bytes */

bool WCRefineScreenRecordingFrameProcessor::wcr_hasAnyEnabledRecordingPostProcessFeature
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
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_screenRecordingFrameEnabled_026a6d80);
  local_3c = 1;
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_videoWatermarkEnabled_026a6d88);
    local_3c = (uint)puVar1;
  }
  _objc_storeStrong(&local_28,0);
  return local_3c & 1;
}


// wcr_shouldObserveRecordingPostProcess @ 006e8d04

/* Function Stack Size: 0x10 bytes */

bool WCRefineScreenRecordingFrameProcessor::wcr_shouldObserveRecordingPostProcess
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  uint local_40;
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
  if (((ulong)puVar1 & 1) != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_canUseScreenRecordingFrameBe_026a6e30);
    local_40 = 1;
    if ((IVar2 & 1) != 0) goto LAB_006e8dcc;
  }
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_videoWatermarkEnabled_026a6d88);
  local_40 = (uint)puVar1;
LAB_006e8dcc:
  _objc_storeStrong(&local_28,0);
  return local_40 & 1;
}


// wcr_shouldShowProgressToastForFrame:watermark: @ 006e90e8

/* Function Stack Size: 0x18 bytes */

bool WCRefineScreenRecordingFrameProcessor::wcr_shouldShowProgressToastForFrame_watermark_
               (ID param_1,SEL param_2,bool param_3,bool param_4)

{
  undefined *puVar1;
  uint local_40;
  undefined *local_30;
  undefined1 local_22;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_22 = (undefined1)param_4;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = 0;
  local_30 = puVar1;
  if ((local_21 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_screenRecordingFrameShowToast_026a6e48);
    local_40 = (uint)puVar1;
  }
  _objc_storeStrong(&local_30,0);
  return local_40 & 1;
}


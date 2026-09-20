// wcr_shouldShowToastForFrame:watermark: @ 006e8fcc

/* Function Stack Size: 0x18 bytes */

bool WCRefineScreenRecordingFrameProcessor::wcr_shouldShowToastForFrame_watermark_
               (ID param_1,SEL param_2,bool param_3,bool param_4)

{
  undefined *puVar1;
  uint local_48;
  uint local_44;
  undefined *local_30;
  byte local_22;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_22 = (byte)param_4;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  if ((local_21 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_screenRecordingFrameShowToast_026a6e48);
    local_44 = 1;
    if (((ulong)puVar1 & 1) != 0) goto LAB_006e909c;
  }
  local_48 = 0;
  if ((local_22 & 1) != 0) {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_videoWatermarkShowToast_026a6e50);
    local_48 = (uint)puVar1;
  }
  local_44 = local_48;
LAB_006e909c:
  _objc_storeStrong(&local_30,0);
  return local_44 & 1;
}


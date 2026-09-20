// wcr_logVideoTrackInfo:label: @ 00700da0

/* Function Stack Size: 0x20 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_logVideoTrackInfo_label_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined1 auStack_88 [84];
  undefined4 local_34;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  if (local_28 == 0) {
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_naturalSize_0269f570);
    if (local_28 == 0) {
      _memset(auStack_88,0,0x30);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(auStack_88,local_28,PTR_s_preferredTransform_0269f578);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_renderSizeForTrack__026a70c8,local_28);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}


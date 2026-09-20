// wcr_handleCapturedState:reason: @ 006e938c

/* Function Stack Size: 0x1c bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_handleCapturedState_reason_
               (ID param_1,SEL param_2,bool param_3,ID param_4)

{
  bool bVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  uint uVar6;
  ID local_d0;
  ID local_b8;
  ID local_58;
  ID local_48;
  undefined8 local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_30 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  uVar6 = (uint)local_21;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_lastCapturedState_026a6e60);
  if ((uVar6 & 1) != (uint)IVar3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setLastCapturedState__026a6e68,local_21 & 1);
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_shouldObserveRecordingPostPr_026a6db8);
    IVar3 = local_18;
    if ((IVar4 & 1) != 0) {
      if ((local_21 & 1) == 0) {
        IVar4 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_recordingStartDate_026a6e78);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = false;
        bVar1 = false;
        local_b8 = IVar4;
        if (IVar4 == 0) {
          local_48 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_recordingSearchStartDate_026a6e98);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          bVar1 = local_48 == 0;
          local_d0 = local_48;
          if (bVar1) {
            local_58 = local_18;
            (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_appEnteredBackgroundDate_026a6ea0);
            _objc_retainAutoreleasedReturnValue();
            local_d0 = local_58;
          }
          local_b8 = local_d0;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_wcr_beginWaitingForRecordingAsse_026a6ea8,local_b8,&cf_capturestop,1)
        ;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_58);
        }
        if (bVar2) {
          (*(code *)PTR__objc_release_02578630)(local_48);
        }
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRecordingStartDate__026a6e70);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_recordingStartDate_026a6e78);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)(0xc014000000000000);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRecordingSearchStartDate__026a6e80);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRecordingStopDate__026a6e88,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_setWaitingForRecordingAsset__026a6e28,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFoundAssetToastShown__026a6e90,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_wcr_refreshRecordingBaselineSnap_026a6e10);
      }
    }
  }
  _objc_storeStrong(&local_30,0);
  return;
}


// wcr_beginWaitingForRecordingAssetFromDate:reason:showMessage: @ 006ea758

/* Function Stack Size: 0x24 bytes */

void WCRefineScreenRecordingFrameProcessor::
     wcr_beginWaitingForRecordingAssetFromDate_reason_showMessage_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  cfstringStruct *local_d8;
  undefined *local_58 [3];
  undefined *local_40;
  byte local_31;
  cfstringStruct *local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  local_31 = (byte)param_5;
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRecordingStopDate__026a6e88,puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setSilentCatchupScan__026a6ee8,(local_31 ^ 1) & 1);
  if (local_28 == 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_recordingSearchStartDate_026a6e98);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar3 == 0) {
      puVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (0xc05e000000000000,local_40,PTR_s_dateByAddingTimeInterval__0269cd18);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRecordingSearchStartDate__026a6e80);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
  }
  else {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (0xc014000000000000,local_28,PTR_s_dateByAddingTimeInterval__0269cd18);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRecordingSearchStartDate__026a6e80);
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWaitingForRecordingAsset__026a6e28,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFoundAssetToastShown__026a6e90,0);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_58[0] = puVar1;
  if (((local_31 & 1) != 0) &&
     (IVar4 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_isApplicationActive_026a6ed8),
     IVar3 = local_18, (IVar4 & 1) != 0)) {
    puVar1 = local_58[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_screenRecordingFrameEnabled_026a6d80);
    puVar5 = local_58[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_videoWatermarkEnabled_026a6d88);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_wcr_shouldShowToastForFrame_wate_026a6ef0,(ulong)puVar1 & 0xffffffff,
               (ulong)puVar5 & 0xffffffff);
    if ((IVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_showToast__026a6ef8,&cf_hKm0RU_O___g)
      ;
    }
  }
  if (local_30 == (cfstringStruct *)0x0) {
    local_d8 = &cf_recordingstop;
  }
  else {
    local_d8 = local_30;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff3333333333333,local_18,PTR_s_wcr_scheduleRecordingScanAfterDe_026a6ec0,local_d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_scheduleRecordingFallbackSca_026a6f00);
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}


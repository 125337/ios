// wcr_processPendingRecordingScan @ 006eae70

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineScreenRecordingFrameProcessor::wcr_processPendingRecordingScan
          (WCRefineScreenRecordingFrameProcessor *this,ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  double in_d0;
  double local_e8;
  undefined *local_98;
  undefined4 local_8c;
  undefined *local_88;
  double local_80;
  byte local_71;
  ID local_70;
  byte local_61;
  undefined *local_60;
  double local_58;
  ID local_50 [3];
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_processing_026a6f10);
  if (((param_1 & 1) == 0) &&
     (IVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_isApplicationActive_026a6ed8),
     (IVar1 & 1) != 0)) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_shouldObserveRecordingPostPr_026a6db8);
    if ((IVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setWaitingForRecordingAsset__026a6e28,0);
    }
    else {
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcr_hasPhotoReadWriteAuthorizati_026a6f18);
      if ((IVar1 & 1) == 0) {
        puVar2 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        IVar1 = local_28;
        local_38 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_screenRecordingFrameEnabled_026a6d80);
        puVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermarkEnabled_026a6d88);
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_wcr_shouldShowToastForFrame_wate_026a6ef0,(ulong)puVar2 & 0xffffffff,
                   (ulong)puVar4 & 0xffffffff);
        if ((IVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_showToast__026a6ef8,&cf_U_O_TYt);
        }
        _objc_storeStrong(&local_38,0);
      }
      else {
        IVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcr_latestUnprocessedRecordingAs_026a6f20);
        _objc_retainAutoreleasedReturnValue();
        local_50[0] = IVar1;
        if (IVar1 == 0) {
          local_61 = 0;
          local_71 = 0;
          IVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_recordingStopDate_026a6f28);
          _objc_retainAutoreleasedReturnValue();
          if (IVar1 == 0) {
            local_e8 = 0.0;
          }
          else {
            puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
            _objc_retainAutoreleasedReturnValue();
            local_61 = 1;
            IVar3 = local_28;
            local_60 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_recordingStopDate_026a6f28);
            _objc_retainAutoreleasedReturnValue();
            local_71 = 1;
            local_70 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_timeIntervalSinceDate__0269cb78);
            local_e8 = in_d0;
          }
          if ((local_71 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_70);
          }
          if ((local_61 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_60);
          }
          (*(code *)PTR__objc_release_02578630)(IVar1);
          local_58 = local_e8;
          IVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_silentCatchupScan_026a6f30);
          local_80 = 12.0;
          if ((IVar1 & 1) == 0) {
            local_80 = 75.0;
          }
          IVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_waitingForRecordingAsset_026a6eb8);
          if ((((IVar1 & 1) == 0) || (local_58 < 0.0)) || (local_80 <= local_58)) {
            puVar2 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            IVar3 = local_28;
            local_88 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_silentCatchupScan_026a6f30);
            IVar1 = local_28;
            if ((IVar3 & 1) == 0) {
              puVar2 = local_88;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_88,PTR_s_screenRecordingFrameEnabled_026a6d80);
              puVar4 = local_88;
              (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_videoWatermarkEnabled_026a6d88);
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar1,PTR_s_wcr_shouldShowToastForFrame_wate_026a6ef0,
                         (ulong)puVar2 & 0xffffffff,(ulong)puVar4 & 0xffffffff);
              if ((IVar1 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_wcr_showToast__026a6ef8,&cf__g_b0RevU_O_eN);
              }
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_setWaitingForRecordingAsset__026a6e28,0);
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSilentCatchupScan__026a6ee8,0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_wcr_refreshRecordingBaselineSnap_026a6e10);
            _objc_storeStrong(&local_88,0);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x4000000000000000,local_28,PTR_s_wcr_scheduleRecordingScanAfterDe_026a6ec0,
                       &cf_retrynoasset);
          }
          local_8c = 1;
        }
        else {
          puVar2 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          IVar3 = local_28;
          local_98 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_foundAssetToastShown_026a6f38);
          IVar1 = local_28;
          if ((IVar3 & 1) == 0) {
            puVar2 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_98,PTR_s_screenRecordingFrameEnabled_026a6d80);
            puVar4 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_videoWatermarkEnabled_026a6d88);
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar1,PTR_s_wcr_shouldShowToastForFrame_wate_026a6ef0,
                       (ulong)puVar2 & 0xffffffff,(ulong)puVar4 & 0xffffffff);
            if ((IVar1 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_setFoundAssetToastShown__026a6e90,1);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_wcr_showToast__026a6ef8,&cf_hKm0RU_O_eNYt_N_);
            }
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_wcr_processRecordingAsset__026a6f40,local_50[0]);
          _objc_storeStrong(&local_98,0);
          local_8c = 0;
        }
        _objc_storeStrong(local_50,0);
      }
    }
  }
  return;
}


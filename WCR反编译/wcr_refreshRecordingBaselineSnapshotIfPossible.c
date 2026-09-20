// wcr_refreshRecordingBaselineSnapshotIfPossible @ 006eddc8

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_refreshRecordingBaselineSnapshotIfPossible
               (ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_shouldObserveRecordingPostPr_026a6db8);
  if ((((IVar1 & 1) != 0) &&
      (IVar1 = param_1,
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_waitingForRecordingAsset_026a6eb8),
      (IVar1 & 1) == 0)) &&
     (IVar1 = param_1, (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_processing_026a6f10),
     (IVar1 & 1) == 0)) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_wcr_latestScreenRecordingAssetId_026a6fd0,0x50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setRecordingBaselineAssetIds__026a6fd8);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  return;
}


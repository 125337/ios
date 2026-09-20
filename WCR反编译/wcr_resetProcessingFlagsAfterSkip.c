// wcr_resetProcessingFlagsAfterSkip @ 007006f0

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_resetProcessingFlagsAfterSkip
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_disarmProcessingWatchdog_026a7390);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_stopTrackingExportProgress_026a7170);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_progressHUD_026a7178);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_progressHUD_026a7178);
    _objc_retainAutoreleasedReturnValue();
    local_28 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setProgressHUD__026a72d8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismiss_026a5668);
    _objc_storeStrong(&local_28,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setProcessing__026a6ff0,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setProcessingLocalIdentifier__026a6ff8,0);
  return;
}


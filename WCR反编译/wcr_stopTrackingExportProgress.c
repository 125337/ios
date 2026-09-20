// wcr_stopTrackingExportProgress @ 006ff0f4

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_stopTrackingExportProgress(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_exportProgressTimer_026a7330);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setExportProgressTimer__026a7328,0);
  return;
}


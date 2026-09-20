// wcr_processingWatchdogFired @ 00700968

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_processingWatchdogFired(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_processing_026a6f10);
  if ((IVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_wcr_finishProcessingWithToast_fo_026a7040,&cf_U_O_Yte,1);
  }
  return;
}


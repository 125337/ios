// wcr_resetExportDebugCountersForStage: @ 00700f24

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_resetExportDebugCountersForStage_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWcr_currentExportStage__026a73b8,local_28)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWcr_exportCIFrameCount__026a7108,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWcr_exportProgressTickCount__026a72f0,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWcr_lastExportStatusLogged__026a7300,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (0xbff0000000000000,local_18,PTR_s_setWcr_lastExportProgressLogged__026a7310);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWcr_exportStuckTickCount__026a7308,0);
  _objc_storeStrong(&local_28,0);
  return;
}


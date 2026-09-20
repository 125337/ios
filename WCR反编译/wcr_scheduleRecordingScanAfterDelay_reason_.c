// wcr_scheduleRecordingScanAfterDelay:reason: @ 006ea63c

/* Function Stack Size: 0x20 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_scheduleRecordingScanAfterDelay_reason_
               (ID param_1,SEL param_2,double param_3,ID param_4)

{
  double dVar1;
  undefined8 local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  dVar1 = DAT_02323c68;
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  if (local_28 < dVar1) {
    local_28 = dVar1;
  }
  if (10.0 < local_28) {
    local_28 = 10.0;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_cancelPreviousPerformRequestsWit_026a4988,
             local_18,PTR_s_wcr_processPendingRecordingScan_026a6ee0,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,local_18,PTR_s_performSelector_withObject_after_026a4990,
             PTR_s_wcr_processPendingRecordingScan_026a6ee0,0);
  _objc_storeStrong(&local_30,0);
  return;
}


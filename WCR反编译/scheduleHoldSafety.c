// scheduleHoldSafety @ 0150e388

/* Function Stack Size: 0x10 bytes */

void WCRSpeechBroadcastEngine::scheduleHoldSafety(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cancelHoldSafety_026affa0);
  puVar1 = PTR__OBJC_CLASS___NSTimer_026ce210;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x403e000000000000,PTR__OBJC_CLASS___NSTimer_026ce210,
             PTR_s_scheduledTimerWithTimeInterval_t_026a4968,param_1,PTR_s_onHoldSafety_026affd0,0,0
            );
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setHoldSafetyTimer__026affc8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_holdSafetyTimer_026affc0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_addTimer_forMode__026ca4d0,param_1,
             *(undefined8 *)PTR__NSRunLoopCommonModes_02578258);
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}


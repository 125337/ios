// onHoldSafety @ 0150e4c4

/* Function Stack Size: 0x10 bytes */

void WCRSpeechBroadcastEngine::onHoldSafety(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setHoldSafetyTimer__026affc8,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_stopSilentHold_026affa8);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_releaseSpeechBackgroundTask_026affb0);
  return;
}


// finishSpeechPipelineIfIdle @ 0150ea54

/* Function Stack Size: 0x10 bytes */

void WCRSpeechBroadcastEngine::finishSpeechPipelineIfIdle(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ID IVar4;
  ID IVar5;
  undefined8 local_38;
  undefined8 local_28;
  
  IVar4 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_synthesizer_026afff0);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar3 = false;
  bVar2 = false;
  bVar1 = true;
  if ((IVar5 & 1) == 0) {
    local_28 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_synthesizer_026afff0);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = true;
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = true;
    if ((IVar5 & 1) == 0) {
      local_38 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingText_026b0000);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      IVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = IVar5 != 0;
    }
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  if (!bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cancelHoldSafety_026affa0);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_stopSilentHold_026affa8);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_releaseSpeechBackgroundTask_026affb0);
  }
  return;
}


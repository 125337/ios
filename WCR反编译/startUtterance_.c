// startUtterance: @ 0150f2f4

/* Function Stack Size: 0x18 bytes */

void WCRSpeechBroadcastEngine::startUtterance_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  ID local_40;
  undefined *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_prepareBackgroundAudioPipeline_026b0040);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingText__026b0030,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_finishSpeechPipelineIfIdle_026b0048);
    local_2c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___AVSpeechUtterance_026ced68;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___AVSpeechUtterance_026ced68,
               PTR_s_speechUtteranceWithString__026b0050,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined4 *)PTR__AVSpeechUtteranceDefaultSpeechRate_025785b0,puVar2,
               PTR_s_setRate__0269f2e0);
    (*(code *)PTR__objc_msgSend_02578628)(0x3f800000,local_38,PTR_s_setPitchMultiplier__026b0058);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_compactZhVoice_026b0060);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar1;
    if (IVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setVoice__026b0068,IVar1);
    }
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_synthesizer_026afff0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}


// setVoiceCustomDurationEnabled: @ 0203bcb0

/* Function Stack Size: 0x14 bytes */

void WCRefineConfig::setVoiceCustomDurationEnabled_(ID param_1,SEL param_2,bool param_3)

{
  ID local_58;
  ID local_50;
  
  if ((param_3 & 1) == 0) {
    local_58 = 0;
  }
  else {
    local_50 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_voiceCustomDurationSeconds_026a9b48);
    if ((long)local_50 < 1) {
      local_50 = 1;
    }
    local_58 = local_50;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setVoiceCustomDurationSeconds__026bc5a8,local_58);
  return;
}


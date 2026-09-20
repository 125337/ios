// setVideoWatermarkSettingsExpanded: @ 018048ec

/* Function Stack Size: 0x14 bytes */

void WCRefineAssistFunctionViewController::setVideoWatermarkSettingsExpanded_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_videoWatermarkSettingsExpanded) = (byte)param_3 & 1;
  return;
}


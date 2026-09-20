// setFrameSettingsExpanded: @ 01804948

/* Function Stack Size: 0x14 bytes */

void WCRefineAssistFunctionViewController::setFrameSettingsExpanded_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_frameSettingsExpanded) = (byte)param_3 & 1;
  return;
}


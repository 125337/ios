// setSelectingScreenRecordingFrameTemplate: @ 01804a5c

/* Function Stack Size: 0x14 bytes */

void WCRefineAssistFunctionViewController::setSelectingScreenRecordingFrameTemplate_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_selectingScreenRecordingFrameTemplate) = (byte)param_3 & 1;
  return;
}


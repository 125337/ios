// setGestureScreenshotSettingsExpanded: @ 01804a00

/* Function Stack Size: 0x14 bytes */

void WCRefineAssistFunctionViewController::setGestureScreenshotSettingsExpanded_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_gestureScreenshotSettingsExpanded) = (byte)param_3 & 1;
  return;
}


// setScreenshotFrameSettingsCollapsed: @ 0219c758

/* Function Stack Size: 0x14 bytes */

void WCRefineConfig::setScreenshotFrameSettingsCollapsed_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 0x10) = (byte)param_3 & 1;
  return;
}


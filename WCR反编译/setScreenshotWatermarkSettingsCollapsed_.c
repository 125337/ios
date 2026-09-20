// setScreenshotWatermarkSettingsCollapsed: @ 0219c7a0

/* Function Stack Size: 0x14 bytes */

void WCRefineConfig::setScreenshotWatermarkSettingsCollapsed_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 0x11) = (byte)param_3 & 1;
  return;
}


// screenshotFrameSettingsCollapsed @ 0219c738

/* Function Stack Size: 0x10 bytes */

bool WCRefineConfig::screenshotFrameSettingsCollapsed(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0x10) & 1;
}


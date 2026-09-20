// setSettingsPageSettingsExpanded: @ 01f458a8

/* Function Stack Size: 0x14 bytes */

void WCRefineUICleanViewController::setSettingsPageSettingsExpanded_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_settingsPageSettingsExpanded) = (byte)param_3 & 1;
  return;
}


// setPageSheetMode: @ 01f9f904

/* Function Stack Size: 0x14 bytes */

void WCRefineVoicePackSettingsViewController::setPageSheetMode_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_pageSheetMode) = (byte)param_3 & 1;
  return;
}


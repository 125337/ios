// setLoadingItems: @ 01f98de4

/* Function Stack Size: 0x14 bytes */

void WCRefineVoicePackPickerViewController::setLoadingItems_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_loadingItems) = (byte)param_3 & 1;
  return;
}


// setViewVisible: @ 01f98ce8

/* Function Stack Size: 0x14 bytes */

void WCRefineVoicePackPickerViewController::setViewVisible_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_viewVisible) = (byte)param_3 & 1;
  return;
}


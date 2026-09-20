// setSending: @ 01f98b6c

/* Function Stack Size: 0x14 bytes */

void WCRefineVoicePackPickerViewController::setSending_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_sending) = (byte)param_3 & 1;
  return;
}


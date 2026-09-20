// setDurationPrefetchPending: @ 01f98e40

/* Function Stack Size: 0x14 bytes */

void WCRefineVoicePackPickerViewController::setDurationPrefetchPending_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_durationPrefetchPending) = (byte)param_3 & 1;
  return;
}


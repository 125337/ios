// durationPrefetchPending @ 01f98e14

/* Function Stack Size: 0x10 bytes */

bool WCRefineVoicePackPickerViewController::durationPrefetchPending(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_durationPrefetchPending) & 1;
}


// selecting @ 01f98ed0

/* Function Stack Size: 0x10 bytes */

bool WCRefineVoicePackPickerViewController::selecting(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_selecting) & 1;
}


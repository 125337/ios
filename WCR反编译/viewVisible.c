// viewVisible @ 01f98cbc

/* Function Stack Size: 0x10 bytes */

bool WCRefineVoicePackPickerViewController::viewVisible(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_viewVisible) & 1;
}


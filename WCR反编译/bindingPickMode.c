// bindingPickMode @ 01f98f2c

/* Function Stack Size: 0x10 bytes */

bool WCRefineVoicePackPickerViewController::bindingPickMode(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_bindingPickMode) & 1;
}


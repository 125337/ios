// keyboardVisible @ 01f0f260

/* Function Stack Size: 0x10 bytes */

bool WCRefineToDoListWebSettingsViewController::keyboardVisible(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_keyboardVisible) & 1;
}


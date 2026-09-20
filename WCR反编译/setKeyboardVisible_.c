// setKeyboardVisible: @ 01f0f28c

/* Function Stack Size: 0x14 bytes */

void WCRefineToDoListWebSettingsViewController::setKeyboardVisible_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_keyboardVisible) = (byte)param_3 & 1;
  return;
}


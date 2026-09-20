// setHasSavedWindowLevelForTextInput: @ 01683fc8

/* Function Stack Size: 0x14 bytes */

void WCRSuperFloatCropViewController::setHasSavedWindowLevelForTextInput_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_hasSavedWindowLevelForTextInput) = (byte)param_3 & 1;
  return;
}


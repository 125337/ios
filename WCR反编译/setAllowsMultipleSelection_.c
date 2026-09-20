// setAllowsMultipleSelection: @ 010a4b34

/* Function Stack Size: 0x14 bytes */

void WCRefineMessageRepositoryPickerViewController::setAllowsMultipleSelection_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_allowsMultipleSelection) = (byte)param_3 & 1;
  return;
}


// allowsMultipleSelection @ 010a4b08

/* Function Stack Size: 0x10 bytes */

bool WCRefineMessageRepositoryPickerViewController::allowsMultipleSelection(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_allowsMultipleSelection) & 1;
}


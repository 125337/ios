// setListBuilt: @ 01bfd40c

/* Function Stack Size: 0x14 bytes */

void WCRefineMomentsTailPickerViewController::setListBuilt_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_listBuilt) = (byte)param_3 & 1;
  return;
}


// setChipIgnoreTap: @ 01b77394

/* Function Stack Size: 0x14 bytes */

void WCRefineLocalEmoticonLibraryViewController::setChipIgnoreTap_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_chipIgnoreTap) = (byte)param_3 & 1;
  return;
}


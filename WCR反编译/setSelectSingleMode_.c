// setSelectSingleMode: @ 01b76d60

/* Function Stack Size: 0x14 bytes */

void WCRefineLocalEmoticonLibraryViewController::setSelectSingleMode_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_selectSingleMode) = (byte)param_3 & 1;
  return;
}


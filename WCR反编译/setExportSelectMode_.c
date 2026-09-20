// setExportSelectMode: @ 01b76d04

/* Function Stack Size: 0x14 bytes */

void WCRefineLocalEmoticonLibraryViewController::setExportSelectMode_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_exportSelectMode) = (byte)param_3 & 1;
  return;
}


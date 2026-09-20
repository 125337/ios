// setSuppressReloadForImport: @ 01b77044

/* Function Stack Size: 0x14 bytes */

void WCRefineLocalEmoticonLibraryViewController::setSuppressReloadForImport_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_suppressReloadForImport) = (byte)param_3 & 1;
  return;
}


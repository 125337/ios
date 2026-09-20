// selectSingleMode @ 01b76d34

/* Function Stack Size: 0x10 bytes */

bool WCRefineLocalEmoticonLibraryViewController::selectSingleMode(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_selectSingleMode) & 1;
}


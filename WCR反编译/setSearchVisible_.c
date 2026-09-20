// setSearchVisible: @ 01c46de0

/* Function Stack Size: 0x14 bytes */

void WCRefineNameplateLibraryViewController::setSearchVisible_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_searchVisible) = (byte)param_3 & 1;
  return;
}


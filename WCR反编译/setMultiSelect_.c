// setMultiSelect: @ 01c7a220

/* Function Stack Size: 0x14 bytes */

void WCRefinePageBackgroundLibraryViewController::setMultiSelect_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_multiSelect) = (byte)param_3 & 1;
  return;
}


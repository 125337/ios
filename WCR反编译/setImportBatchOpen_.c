// setImportBatchOpen: @ 01b770a0

/* Function Stack Size: 0x14 bytes */

void WCRefineLocalEmoticonLibraryViewController::setImportBatchOpen_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_importBatchOpen) = (byte)param_3 & 1;
  return;
}


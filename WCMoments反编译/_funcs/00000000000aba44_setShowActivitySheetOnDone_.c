// setShowActivitySheetOnDone: @0xaba44

/* Function Stack Size: 0x14 bytes */

void WCMTOCropViewController::setShowActivitySheetOnDone_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_showActivitySheetOnDone) = (byte)param_3 & 1;
  return;
}


// showActivitySheetOnDone @0xaba18

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropViewController::showActivitySheetOnDone(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_showActivitySheetOnDone) & 1;
}


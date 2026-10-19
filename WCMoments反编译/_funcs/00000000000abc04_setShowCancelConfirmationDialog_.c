// setShowCancelConfirmationDialog: @0xabc04

/* Function Stack Size: 0x14 bytes */

void WCMTOCropViewController::setShowCancelConfirmationDialog_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_showCancelConfirmationDialog) = (byte)param_3 & 1;
  return;
}


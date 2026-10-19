// setInitialSetupPerformed: @0xbc994

/* Function Stack Size: 0x14 bytes */

void WCMTOCropView::setInitialSetupPerformed_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_initialSetupPerformed) = (byte)param_3 & 1;
  return;
}


// setInternalLayoutDisabled: @0xbbb98

/* Function Stack Size: 0x14 bytes */

void WCMTOCropView::setInternalLayoutDisabled_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_internalLayoutDisabled) = (byte)param_3 & 1;
  return;
}


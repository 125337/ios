// disableForgroundMatching @0xbc3e0

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropView::disableForgroundMatching(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_disableForgroundMatching) & 1;
}


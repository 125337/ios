// initialSetupPerformed @0xbc968

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropView::initialSetupPerformed(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_initialSetupPerformed) & 1;
}


// disableRotationButtons @0xc5664

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropToolbar::disableRotationButtons(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_disableRotationButtons) & 1;
}


// resetButtonHidden @0xc59bc

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropToolbar::resetButtonHidden(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_resetButtonHidden) & 1;
}


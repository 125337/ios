// cancelButtonHidden @0xc5a14

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropToolbar::cancelButtonHidden(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_cancelButtonHidden) & 1;
}


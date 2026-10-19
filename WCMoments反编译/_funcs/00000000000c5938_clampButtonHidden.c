// clampButtonHidden @0xc5938

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropToolbar::clampButtonHidden(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_clampButtonHidden) & 1;
}


// clampButtonGlowing @0xc590c

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropToolbar::clampButtonGlowing(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_clampButtonGlowing) & 1;
}


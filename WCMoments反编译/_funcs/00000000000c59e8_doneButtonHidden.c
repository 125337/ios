// doneButtonHidden @0xc59e8

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropToolbar::doneButtonHidden(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_doneButtonHidden) & 1;
}


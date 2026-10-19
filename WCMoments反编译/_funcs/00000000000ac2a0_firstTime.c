// firstTime @0xac2a0

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropViewController::firstTime(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_firstTime) & 1;
}


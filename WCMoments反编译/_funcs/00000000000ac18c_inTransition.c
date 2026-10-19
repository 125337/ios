// inTransition @0xac18c

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropViewController::inTransition(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_inTransition) & 1;
}


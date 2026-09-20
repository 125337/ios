// startsWithFullScreen @ 0168440c

/* Function Stack Size: 0x10 bytes */

bool WCRSuperFloatCropViewController::startsWithFullScreen(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_startsWithFullScreen) & 1;
}


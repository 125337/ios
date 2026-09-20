// chipIgnoreTap @ 01b77368

/* Function Stack Size: 0x10 bytes */

bool WCRefineLocalEmoticonLibraryViewController::chipIgnoreTap(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_chipIgnoreTap) & 1;
}


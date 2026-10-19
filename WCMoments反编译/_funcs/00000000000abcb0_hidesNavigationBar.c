// hidesNavigationBar @0xabcb0

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropViewController::hidesNavigationBar(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_hidesNavigationBar) & 1;
}


// toolbarHidden @0xac244

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropViewController::toolbarHidden(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_toolbarHidden) & 1;
}


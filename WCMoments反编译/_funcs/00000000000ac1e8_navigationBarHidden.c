// navigationBarHidden @0xac1e8

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropViewController::navigationBarHidden(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_navigationBarHidden) & 1;
}


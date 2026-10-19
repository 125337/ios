// editing @0xbc3b4

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropView::editing(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_editing) & 1;
}


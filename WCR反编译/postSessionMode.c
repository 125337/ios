// postSessionMode @ 01bfd1a4

/* Function Stack Size: 0x10 bytes */

bool WCRefineMomentsTailPickerViewController::postSessionMode(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_postSessionMode) & 1;
}


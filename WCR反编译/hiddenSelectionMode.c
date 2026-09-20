// hiddenSelectionMode @ 019acad8

/* Function Stack Size: 0x10 bytes */

bool WCRefineFileManagerViewController::hiddenSelectionMode(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_hiddenSelectionMode) & 1;
}


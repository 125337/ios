// isNew @ 01eae134

/* Function Stack Size: 0x10 bytes */

bool WCRefineToDoItemEditViewController::isNew(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_isNew) & 1;
}


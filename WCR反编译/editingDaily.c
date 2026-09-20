// editingDaily @ 01eae30c

/* Function Stack Size: 0x10 bytes */

bool WCRefineToDoItemEditViewController::editingDaily(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_editingDaily) & 1;
}


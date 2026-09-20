// doneCollapsed @ 01eb7c30

/* Function Stack Size: 0x10 bytes */

bool WCRefineToDoListEditorViewController::doneCollapsed(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_doneCollapsed) & 1;
}


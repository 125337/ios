// setDoneCollapsed: @ 01eb7c5c

/* Function Stack Size: 0x14 bytes */

void WCRefineToDoListEditorViewController::setDoneCollapsed_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_doneCollapsed) = (byte)param_3 & 1;
  return;
}


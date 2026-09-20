// didPrepareDismiss @ 00f951fc

/* Function Stack Size: 0x10 bytes */

bool WCRPageSheetKeyboardBinder::didPrepareDismiss(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}


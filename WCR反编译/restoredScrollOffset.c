// restoredScrollOffset @ 00370a00

/* Function Stack Size: 0x10 bytes */

bool WCRGroupingSessionListViewController::restoredScrollOffset(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_restoredScrollOffset) & 1;
}


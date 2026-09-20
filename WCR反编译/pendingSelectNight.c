// pendingSelectNight @ 01c46f8c

/* Function Stack Size: 0x10 bytes */

bool WCRefineNameplateLibraryViewController::pendingSelectNight(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_pendingSelectNight) & 1;
}


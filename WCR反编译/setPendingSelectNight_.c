// setPendingSelectNight: @ 01c46fb8

/* Function Stack Size: 0x14 bytes */

void WCRefineNameplateLibraryViewController::setPendingSelectNight_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_pendingSelectNight) = (byte)param_3 & 1;
  return;
}


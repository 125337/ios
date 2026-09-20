// setPendingDeletePackKeepItems: @ 01b772dc

/* Function Stack Size: 0x14 bytes */

void WCRefineLocalEmoticonLibraryViewController::setPendingDeletePackKeepItems_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_pendingDeletePackKeepItems) = (byte)param_3 & 1;
  return;
}


// setThumbRebuildScheduled: @ 019acd3c

/* Function Stack Size: 0x14 bytes */

void WCRefineFileManagerViewController::setThumbRebuildScheduled_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_thumbRebuildScheduled) = (byte)param_3 & 1;
  return;
}


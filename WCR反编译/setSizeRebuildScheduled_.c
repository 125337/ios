// setSizeRebuildScheduled: @ 019acd98

/* Function Stack Size: 0x14 bytes */

void WCRefineFileManagerViewController::setSizeRebuildScheduled_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_sizeRebuildScheduled) = (byte)param_3 & 1;
  return;
}


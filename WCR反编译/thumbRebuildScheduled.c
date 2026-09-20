// thumbRebuildScheduled @ 019acd10

/* Function Stack Size: 0x10 bytes */

bool WCRefineFileManagerViewController::thumbRebuildScheduled(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_thumbRebuildScheduled) & 1;
}


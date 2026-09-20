// committed @ 01bb8450

/* Function Stack Size: 0x10 bytes */

bool WCRMessageSyncMultiSelectViewController::committed(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_committed) & 1;
}


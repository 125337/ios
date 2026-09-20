// searchActive @ 003709a4

/* Function Stack Size: 0x10 bytes */

bool WCRGroupingSessionListViewController::searchActive(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_searchActive) & 1;
}


// setSearchActive: @ 003709d0

/* Function Stack Size: 0x14 bytes */

void WCRGroupingSessionListViewController::setSearchActive_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_searchActive) = (byte)param_3 & 1;
  return;
}


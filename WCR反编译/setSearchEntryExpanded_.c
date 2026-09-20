// setSearchEntryExpanded: @ 01d866cc

/* Function Stack Size: 0x14 bytes */

void WCRefineSearchSettingsViewController::setSearchEntryExpanded_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_searchEntryExpanded) = (byte)param_3 & 1;
  return;
}


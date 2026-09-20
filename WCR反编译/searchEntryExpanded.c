// searchEntryExpanded @ 01d866a0

/* Function Stack Size: 0x10 bytes */

bool WCRefineSearchSettingsViewController::searchEntryExpanded(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_searchEntryExpanded) & 1;
}


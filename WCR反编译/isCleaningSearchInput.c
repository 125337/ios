// isCleaningSearchInput @ 01d8676c

/* Function Stack Size: 0x10 bytes */

bool WCRefineSearchSettingsViewController::isCleaningSearchInput(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_isCleaningSearchInput) & 1;
}


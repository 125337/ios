// toggleSearchEntryExpanded @ 01d80170

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchSettingsViewController::toggleSearchEntryExpanded(ID param_1,SEL param_2)

{
  *(byte *)(param_1 + (long)_searchEntryExpanded) =
       (*(byte *)(param_1 + (long)_searchEntryExpanded) ^ 1) & 1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
  return;
}


// setHtmlSearchPanelVisible: @ 01f0eff8

/* Function Stack Size: 0x14 bytes */

void WCRefineToDoListWebSettingsViewController::setHtmlSearchPanelVisible_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_htmlSearchPanelVisible) = (byte)param_3 & 1;
  return;
}


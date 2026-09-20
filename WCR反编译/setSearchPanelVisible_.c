// setSearchPanelVisible: @ 019719dc

/* Function Stack Size: 0x14 bytes */

void WCRefineFileManagerPreviewViewController::setSearchPanelVisible_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_searchPanelVisible) = (byte)param_3 & 1;
  return;
}


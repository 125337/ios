// searchPanelVisible @ 019719b0

/* Function Stack Size: 0x10 bytes */

bool WCRefineFileManagerPreviewViewController::searchPanelVisible(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_searchPanelVisible) & 1;
}


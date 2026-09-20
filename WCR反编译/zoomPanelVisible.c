// zoomPanelVisible @ 019715c8

/* Function Stack Size: 0x10 bytes */

bool WCRefineFileManagerPreviewViewController::zoomPanelVisible(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_zoomPanelVisible) & 1;
}


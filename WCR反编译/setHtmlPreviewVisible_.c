// setHtmlPreviewVisible: @ 01f0f230

/* Function Stack Size: 0x14 bytes */

void WCRefineToDoListWebSettingsViewController::setHtmlPreviewVisible_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_htmlPreviewVisible) = (byte)param_3 & 1;
  return;
}


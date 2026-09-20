// setAlwaysEditText: @ 01971358

/* Function Stack Size: 0x14 bytes */

void WCRefineFileManagerPreviewViewController::setAlwaysEditText_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_alwaysEditText) = (byte)param_3 & 1;
  return;
}


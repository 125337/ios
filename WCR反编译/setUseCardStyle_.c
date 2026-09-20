// setUseCardStyle: @ 00955170

/* Function Stack Size: 0x14 bytes */

void WCRClipboardHistoryPanelController::setUseCardStyle_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_useCardStyle) = (byte)param_3 & 1;
  return;
}


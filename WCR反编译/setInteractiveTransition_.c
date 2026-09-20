// setInteractiveTransition: @ 01e5c784

/* Function Stack Size: 0x14 bytes */

void WCRefineTelegramTabStripView::setInteractiveTransition_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_interactiveTransition) = (byte)param_3 & 1;
  return;
}


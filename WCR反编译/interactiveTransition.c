// interactiveTransition @ 01e5c758

/* Function Stack Size: 0x10 bytes */

bool WCRefineTelegramTabStripView::interactiveTransition(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_interactiveTransition) & 1;
}


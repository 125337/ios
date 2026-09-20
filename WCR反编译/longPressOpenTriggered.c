// longPressOpenTriggered @ 01e9b538

/* Function Stack Size: 0x10 bytes */

bool WCRefineToDoCardView::longPressOpenTriggered(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_longPressOpenTriggered) & 1;
}


// setBlankWebProbeConfirmationScheduled: @ 01e9b21c

/* Function Stack Size: 0x14 bytes */

void WCRefineToDoCardView::setBlankWebProbeConfirmationScheduled_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_blankWebProbeConfirmationScheduled) = (byte)param_3 & 1;
  return;
}


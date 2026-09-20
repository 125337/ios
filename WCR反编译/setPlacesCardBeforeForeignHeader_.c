// setPlacesCardBeforeForeignHeader: @ 007f1860

/* Function Stack Size: 0x14 bytes */

void WCRefineToDoHeaderContainerView::setPlacesCardBeforeForeignHeader_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_placesCardBeforeForeignHeader) = (byte)param_3 & 1;
  return;
}


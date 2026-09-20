// placesCardBeforeForeignHeader @ 007f1834

/* Function Stack Size: 0x10 bytes */

bool WCRefineToDoHeaderContainerView::placesCardBeforeForeignHeader(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_placesCardBeforeForeignHeader) & 1;
}


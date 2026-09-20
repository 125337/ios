// setPlacesStripAfterForeignHeader: @ 0034699c

/* Function Stack Size: 0x14 bytes */

void WCRefineHomeAvatarStripContainerView::setPlacesStripAfterForeignHeader_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_placesStripAfterForeignHeader) = (byte)param_3 & 1;
  return;
}


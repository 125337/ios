// placesStripAfterForeignHeader @ 00346970

/* Function Stack Size: 0x10 bytes */

bool WCRefineHomeAvatarStripContainerView::placesStripAfterForeignHeader(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_placesStripAfterForeignHeader) & 1;
}


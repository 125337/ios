// setUnreadAsRedDot: @ 01af113c

/* Function Stack Size: 0x14 bytes */

void WCRefineHomeAvatarStripItem::setUnreadAsRedDot_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 8) = (byte)param_3 & 1;
  return;
}


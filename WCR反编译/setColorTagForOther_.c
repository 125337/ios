// setColorTagForOther: @ 018c4600

/* Function Stack Size: 0x14 bytes */

void WCRefineChatTimeViewController::setColorTagForOther_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_colorTagForOther) = (byte)param_3 & 1;
  return;
}


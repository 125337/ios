// setExpanded: @0xf750

/* Function Stack Size: 0x14 bytes */

void WCMCommentPresentation::setExpanded_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_expanded) = (byte)param_3 & 1;
  return;
}


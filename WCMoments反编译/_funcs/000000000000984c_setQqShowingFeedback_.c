// setQqShowingFeedback: @0x984c

/* Function Stack Size: 0x14 bytes */

void WCMQQRefreshControl::setQqShowingFeedback_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_qqShowingFeedback) = (byte)param_3 & 1;
  return;
}


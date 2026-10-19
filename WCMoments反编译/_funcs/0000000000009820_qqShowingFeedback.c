// qqShowingFeedback @0x9820

/* Function Stack Size: 0x10 bytes */

bool WCMQQRefreshControl::qqShowingFeedback(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_qqShowingFeedback) & 1;
}


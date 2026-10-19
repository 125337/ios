// setLastFeedPoll: @0x5b590

/* Function Stack Size: 0x18 bytes */

void WCMFeedController::setLastFeedPoll_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_lastFeedPoll) = param_3;
  return;
}


// setLastProgress: @ 015c16d4

/* Function Stack Size: 0x18 bytes */

void WCRVoiceSeekOverlay::setLastProgress_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_lastProgress) = param_3;
  return;
}


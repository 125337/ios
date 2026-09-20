// hasFinished @ 0059c32c

/* Function Stack Size: 0x10 bytes */

bool WCRefineMomentsMediaDownloader::hasFinished(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}


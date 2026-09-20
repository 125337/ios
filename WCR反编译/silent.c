// silent @ 0059c518

/* Function Stack Size: 0x10 bytes */

bool WCRefineMomentsMediaDownloader::silent(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}


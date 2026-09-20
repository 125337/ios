// expectVideo @ 0101505c

/* Function Stack Size: 0x10 bytes */

bool WCRLinkMediaDownloader::expectVideo(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}


// isFinalized @0x9779c

/* Function Stack Size: 0x10 bytes */

bool WCMYYImageDecoder::isFinalized(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0x90) & 1;
}


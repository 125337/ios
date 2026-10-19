// shouldPreDecodeAsync @0x7d1bc

/* Function Stack Size: 0x10 bytes */

bool WCMYBIBImageData::shouldPreDecodeAsync(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0x1a) & 1;
}


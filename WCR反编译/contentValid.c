// contentValid @ 00177748

/* Function Stack Size: 0x10 bytes */

bool WCRAddedSectionCache::contentValid(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}


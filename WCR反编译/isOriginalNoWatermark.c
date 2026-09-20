// isOriginalNoWatermark @ 01015734

/* Function Stack Size: 0x10 bytes */

bool WCRefineLinkVideoVariant::isOriginalNoWatermark(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}


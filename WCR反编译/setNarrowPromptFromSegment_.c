// setNarrowPromptFromSegment: @ 01725808

/* Function Stack Size: 0x14 bytes */

void ThemeBoxAirDropLogViewController::setNarrowPromptFromSegment_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_narrowPromptFromSegment) = (byte)param_3 & 1;
  return;
}


// narrowPromptFromSegment @ 017257dc

/* Function Stack Size: 0x10 bytes */

bool ThemeBoxAirDropLogViewController::narrowPromptFromSegment(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_narrowPromptFromSegment) & 1;
}


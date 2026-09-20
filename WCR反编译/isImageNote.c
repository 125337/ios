// isImageNote @ 01016204

/* Function Stack Size: 0x10 bytes */

bool WCRefineLinkParseResult::isImageNote(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}


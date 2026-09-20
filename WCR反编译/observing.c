// observing @ 00961474

/* Function Stack Size: 0x10 bytes */

bool WCRClipboardHistoryStore::observing(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}


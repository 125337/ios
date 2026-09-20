// done @ 01f11dfc

/* Function Stack Size: 0x10 bytes */

bool WCRefineToDoEntry::done(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}


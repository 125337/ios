// sortAscending @ 01979ddc

/* Function Stack Size: 0x10 bytes */

bool WCRFileManagerState::sortAscending(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

